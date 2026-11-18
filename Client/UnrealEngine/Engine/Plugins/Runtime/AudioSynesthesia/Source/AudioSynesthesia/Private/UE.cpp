// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 16

// Construct<FConstantQResults> @ 14d812330

void __cdecl UE::CoreUObject::Private::Construct<FConstantQResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FConstantQResults> @ 14d8124d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstantQResults>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FConstantQResults> @ 14d8126f0

void __cdecl UE::CoreUObject::Private::Destruct<FConstantQResults>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FConstantQResults> @ 14d812810

bool __cdecl
UE::CoreUObject::Private::Copy<FConstantQResults>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar1 + 2),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSynesthesiaSpectrumResults> @ 14d814780

void __cdecl UE::CoreUObject::Private::Construct<FSynesthesiaSpectrumResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSynesthesiaSpectrumResults> @ 14d8147a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSynesthesiaSpectrumResults>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSynesthesiaSpectrumResults> @ 14d8147c0

void __cdecl UE::CoreUObject::Private::Destruct<FSynesthesiaSpectrumResults>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSynesthesiaSpectrumResults> @ 14d8147e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSynesthesiaSpectrumResults>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar1 + 2),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMeterResults> @ 14d814a90

void __cdecl UE::CoreUObject::Private::Construct<FMeterResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMeterResults> @ 14d814ab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMeterResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMeterResults> @ 14d814ad0

void __cdecl UE::CoreUObject::Private::Destruct<FMeterResults>(void *param_1)

{
  return;
}

// Copy<FMeterResults> @ 14d814ae0

bool __cdecl UE::CoreUObject::Private::Copy<FMeterResults>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLoudnessResults> @ 14d814ca0

void __cdecl UE::CoreUObject::Private::Construct<FLoudnessResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLoudnessResults> @ 14d814cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLoudnessResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLoudnessResults> @ 14d814cc0

void __cdecl UE::CoreUObject::Private::Destruct<FLoudnessResults>(void *param_1)

{
  return;
}

// Copy<FLoudnessResults> @ 14d814d10

bool __cdecl
UE::CoreUObject::Private::Copy<FLoudnessResults>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

