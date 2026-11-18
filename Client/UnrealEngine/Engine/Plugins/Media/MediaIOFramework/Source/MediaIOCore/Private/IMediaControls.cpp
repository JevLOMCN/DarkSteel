// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 5

// ~IMediaControls @ 14d78cea0

void __thiscall IMediaControls::~IMediaControls(IMediaControls *this)

{
  *this = (IMediaControls)&___7IMediaControls__6B_;
  return;
}

// GetPlaybackTimeRange @ 14d7acba0

TRange<FTimespan> * __thiscall
IMediaControls::GetPlaybackTimeRange
          (IMediaControls *this,TRange<FTimespan> *__return_storage_ptr__,
          EMediaTimeRangeType param_1)

{
  long64 *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (long64 *)(**(code **)((longlong)*this + 8))(this,local_res8);
  (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
  (__return_storage_ptr__->LowerBound).Value.Ticks = 0;
  (__return_storage_ptr__->UpperBound).Value.Ticks = 0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\0';
  (__return_storage_ptr__->UpperBound).Value.Ticks = *plVar1;
  return __return_storage_ptr__;
}

// Seek @ 14d7bb850

bool __thiscall
IMediaControls::Seek(IMediaControls *this,FTimespan *param_1,FMediaSeekParams *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7bb853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x48))();
  return (bool)uVar1;
}

// SetBlockingPlaybackHint @ 14d7bb940

void __thiscall IMediaControls::SetBlockingPlaybackHint(IMediaControls *this,bool param_1)

{
  return;
}

// SetPlaybackTimeRange @ 14d7bcda0

bool __thiscall
IMediaControls::SetPlaybackTimeRange(IMediaControls *this,TRange<FTimespan> *param_1)

{
  return false;
}

