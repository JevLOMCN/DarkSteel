// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// ExecuteTask @ 1464fdf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ::Audio::FMixerSourceManager::RenderSource
            (*(FMixerSourceManager **)((longlong)this + 0xd8),*(int *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 1464fdfa0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1465539f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Audio::FAudioRenderScheduler::ScheduleAll'::__l33::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0xd8) + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146553a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

// ExecuteTask @ 146553a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Audio::FAudioRenderScheduler::RenderBlock'::__l14::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  ::Audio::FAudioRenderScheduler::ScheduleAll
            (*(FAudioRenderScheduler **)((longlong)this + 0xd8),false);
  return;
}

