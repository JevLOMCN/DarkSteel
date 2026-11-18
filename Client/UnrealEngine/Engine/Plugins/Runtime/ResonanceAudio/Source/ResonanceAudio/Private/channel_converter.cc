// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// ConvertMonoFromStereo @ 14f072560

void __cdecl vraudio::ConvertMonoFromStereo(AudioBuffer *param_1,AudioBuffer *param_2)

{
  ChannelView *pCVar1;
  
  pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  MonoFromStereoSimd(param_1->num_frames_,pCVar1->begin_itr_,pCVar1[1].begin_itr_,
                     ((param_2->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_);
  return;
}

// ConvertStereoFromMono @ 14f072580

void __cdecl vraudio::ConvertStereoFromMono(AudioBuffer *param_1,AudioBuffer *param_2)

{
  ChannelView *pCVar1;
  
  pCVar1 = (param_2->channel_views_)._Mypair._Myval2._Myfirst;
  StereoFromMonoSimd(param_1->num_frames_,
                     ((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_,
                     pCVar1->begin_itr_,pCVar1[1].begin_itr_);
  return;
}

