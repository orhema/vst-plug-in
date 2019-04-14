/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class MyvstAudioProcessorEditor  : public AudioProcessorEditor,
									public Slider::Listener
{
public:
    MyvstAudioProcessorEditor (MyvstAudioProcessor&);
    ~MyvstAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
	void sliderValueChanged(Slider* slider) override;
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MyvstAudioProcessor& processor;
	Slider volSlider;

public:
	std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> sliderValue;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MyvstAudioProcessorEditor)
};
