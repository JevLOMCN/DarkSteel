// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 33

// Construct<FWN_VolumeMinMax> @ 14a024e00

void __cdecl UE::CoreUObject::Private::Construct<FWN_VolumeMinMax>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FWN_VolumeMinMax> @ 14a024e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_VolumeMinMax>(void *param_1)

{
  return;
}

// Construct<FWN_BGMSoundInfo> @ 14a0251b0

void __cdecl UE::CoreUObject::Private::Construct<FWN_BGMSoundInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_BGMSoundInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FWN_BGMSoundInfo> @ 14a025200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_BGMSoundInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_BGMSoundInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FWN_BGMSoundInfo> @ 14a025250

void __cdecl UE::CoreUObject::Private::Destruct<FWN_BGMSoundInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FWN_BGMSoundInfo> @ 14a025270

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_BGMSoundInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    FUtf8String::operator=
              ((FUtf8String *)((longlong)pvVar2 + 0x20),
               (FUtf8String *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x34) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x38) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x40);
  }
  return true;
}

// Construct<FWN_PhasingVolumeInfo> @ 14a025810

void __cdecl UE::CoreUObject::Private::Construct<FWN_PhasingVolumeInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined ***)param_1 = &___7FWN_PhasingVolumeInfo__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FWN_PhasingVolumeInfo> @ 14a025860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_PhasingVolumeInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FWN_PhasingVolumeInfo__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FWN_PhasingVolumeInfo> @ 14a025960

void __cdecl UE::CoreUObject::Private::Destruct<FWN_PhasingVolumeInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_PhasingVolumeInfo> @ 14a025980

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_PhasingVolumeInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x28) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x30);
  }
  return true;
}

// Construct<FWN_IslandInfo> @ 14a025ad0

void __cdecl UE::CoreUObject::Private::Construct<FWN_IslandInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_IslandInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FWN_IslandInfo> @ 14a025b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_IslandInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_IslandInfo__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xffefffffffffffff;
  return;
}

// Destruct<FWN_IslandInfo> @ 14a025b90

void __cdecl UE::CoreUObject::Private::Destruct<FWN_IslandInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_IslandInfo> @ 14a025bc0

bool __cdecl UE::CoreUObject::Private::Copy<FWN_IslandInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x38);
  }
  return true;
}

// Construct<FWN_ZoneInfo> @ 14a025d20

void __cdecl UE::CoreUObject::Private::Construct<FWN_ZoneInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined ***)param_1 = &___7FWN_ZoneInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWN_ZoneInfo> @ 14a025d50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ZoneInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_ZoneInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWN_ZoneInfo> @ 14a025d70

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ZoneInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_ZoneInfo> @ 14a025d90

bool __cdecl UE::CoreUObject::Private::Copy<FWN_ZoneInfo>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x19) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x19 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FWN_DistrictInfo> @ 14a025eb0

void __cdecl UE::CoreUObject::Private::Construct<FWN_DistrictInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined ***)param_1 = &___7FWN_DistrictInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FWN_DistrictInfo> @ 14a025ee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_DistrictInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_DistrictInfo__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FWN_DistrictInfo> @ 14a025f10

void __cdecl UE::CoreUObject::Private::Destruct<FWN_DistrictInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_DistrictInfo> @ 14a025f40

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_DistrictInfo>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x18),
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FWN_PropertyInfo> @ 14a026210

void __cdecl UE::CoreUObject::Private::Construct<FWN_PropertyInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FWN_PropertyInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_PropertyInfo> @ 14a026230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_PropertyInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_PropertyInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWN_PropertyInfo> @ 14a026250

void __cdecl UE::CoreUObject::Private::Destruct<FWN_PropertyInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_PropertyInfo> @ 14a026270

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_PropertyInfo>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// DereferenceIfNecessary<AWN_OcclusionVolume,AWN_OcclusionVolume_*_&> @ 14a026d70

AWN_OcclusionVolume * __cdecl
UE::Core::Private::DereferenceIfNecessary<AWN_OcclusionVolume,AWN_OcclusionVolume_*_&>
          (AWN_OcclusionVolume **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULocalFogVolumeComponent_*>_> @ 14a02b430

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULocalFogVolumeComponent_*>_>
          (ushort param_1,ForElementType<ULocalFogVolumeComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<ULocalFogVolumeComponent_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkyAtmosphereComponent_*>_> @ 14a02b500

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkyAtmosphereComponent_*>_>
          (ushort param_1,ForElementType<USkyAtmosphereComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<USkyAtmosphereComponent_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UVolumetricCloudComponent_*>_> @ 14a02b5d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UVolumetricCloudComponent_*>_>
          (ushort param_1,ForElementType<UVolumetricCloudComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UVolumetricCloudComponent_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULocalFogVolumeComponent_*>_> @ 14a02b6a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULocalFogVolumeComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<ULocalFogVolumeComponent_*> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<ULocalFogVolumeComponent_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkyAtmosphereComponent_*>_> @ 14a02b720

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkyAtmosphereComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<USkyAtmosphereComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<USkyAtmosphereComponent_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UVolumetricCloudComponent_*>_> @ 14a02b7a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UVolumetricCloudComponent_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UVolumetricCloudComponent_*> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UVolumetricCloudComponent_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

