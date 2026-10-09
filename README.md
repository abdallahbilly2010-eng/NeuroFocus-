NeuroFocus — The Attention Diary 🧠

An open-source cognitive testing device and a 30-day personal study of cognitive performance.

Overview

NeuroFocus is a custom-built device designed to explore how reaction time, response inhibition, and working memory vary across repeated sessions.

The project combines embedded hardware, interactive cognitive tasks, and data analysis to investigate personal performance patterns and their possible associations with daily habits.

The Research Question

How does my cognitive performance change over 30 days, and how is it associated with sleep, study duration, caffeine intake, and mood?

Planned Cognitive Tasks

- Simple Reaction Time: Measure the time taken to respond to a stimulus.
- Choice Reaction Time: Measure response speed and accuracy when choosing between multiple options.
- Go/No-Go: Explore response inhibition and commission errors.
- Sequence Memory: Test the ability to remember and reproduce sequences.

Planned Hardware

- ESP32 development board
- Display
- Physical input buttons
- LEDs and an RGB stimulus indicator
- Buzzer for auditory stimuli
- Data storage, depending on the final design
- Custom enclosure

The final hardware configuration will be documented as the design develops.

Research Plan

The planned study will collect repeated measurements over 30 days.

The analysis will explore performance trends and possible associations with sleep, study duration, caffeine intake, and mood.

The results will describe observations from an individual experiment. They will not be used to diagnose medical conditions or establish clinical attention scores.

Development Roadmap

- [x] Create the project repository.
- [x] Define the initial concept and research question.
- [x] Create the initial project files.
- [ ] Finalize the hardware architecture.
- [ ] Implement and test the first reaction-time task.
- [ ] Implement the remaining cognitive tasks.
- [ ] Validate timing and data logging.
- [ ] Complete the 30-day data collection.
- [ ] Analyze and visualize the results.
- [ ] Publish the final documentation.

Repository Structure

File| Purpose
"main.cpp"| Main firmware entry point
"config.h"| Hardware and software configuration
"devlog.md"| Development journal

Current Status

Stage: Initial planning and software setup.

The project concept, initial repository structure, and preliminary device design have been started. Hardware assembly, firmware implementation, and experimental testing are still in progress.

Contributing

Suggestions and feedback are welcome. The project is being developed incrementally, and the documentation will be updated as features are implemented and tested.

License

A suitable open-source license will be selected before the first public release.
