/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MyvstAudioProcessorEditor::MyvstAudioProcessorEditor (MyvstAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    


	sliderValue = std::make_unique<AudioProcessorValueTreeState::SliderAttachment>(processor.treestate, VOL_ID, volSlider);
	setSize (490, 490);
	volSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	volSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 140, 28);
	volSlider.setRange(-49.0f, 0.0f);
	volSlider.setValue(-14.0f);
	volSlider.addListener(this);
	addAndMakeVisible(volSlider);
}

MyvstAudioProcessorEditor::~MyvstAudioProcessorEditor()
{
}

//==============================================================================
void MyvstAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    
}

void MyvstAudioProcessorEditor::resized()
{
	volSlider.setBounds(getLocalBounds());
	
	// This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
