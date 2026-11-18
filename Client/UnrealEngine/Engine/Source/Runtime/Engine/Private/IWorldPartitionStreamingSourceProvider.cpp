// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetStreamingSource @ 1479d2520

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
IWorldPartitionStreamingSourceProvider::GetStreamingSource
          (IWorldPartitionStreamingSourceProvider *this,FWorldPartitionStreamingSource *param_1)

{
  return false;
}

// GetStreamingSourceOwner @ 1479d2830

UObject * __thiscall
IWorldPartitionStreamingSourceProvider::GetStreamingSourceOwner
          (IWorldPartitionStreamingSourceProvider *this)

{
  return (UObject *)0x0;
}

// GetStreamingSources @ 1479d2850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
IWorldPartitionStreamingSourceProvider::GetStreamingSources
          (IWorldPartitionStreamingSourceProvider *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [104];
  ForAnyElementType local_110;
  undefined8 local_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  undefined8 uStack_e0;
  ForElementType<FSetElementId> local_d0;
  int local_c8;
  undefined1 local_c0 [32];
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ForElementType<FSetElementId> local_80;
  int local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  undefined2 local_60;
  bool local_5e;
  undefined8 local_5c;
  TVector<double>_u_0 local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  local_178._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_178[0x38] = Activated;
  local_178[0x39] = false;
  local_178._32_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
  local_178._36_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
  local_178._40_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
  local_178._44_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
  local_178._64_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178._72_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_50._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_50._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_178[0x3a] = Default;
  local_38 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
  uStack_34 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
  uStack_30 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
  uStack_2c = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
  local_178._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_178._48_8_ = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_178._80_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_178[0x58] = false;
  local_178._92_4_ = 0;
  local_178[0x60] = Include;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_100._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_e0 = _UNK_150631d98;
  local_d0 = (ForElementType<FSetElementId>)0x0;
  local_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  local_c0._8_8_ = 0;
  local_a0 = (void *)0x0;
  local_98 = ___xmm_00000000ffffffff0000008000000000;
  uStack_90 = _UNK_150631d98;
  local_80 = (ForElementType<FSetElementId>)0x0;
  local_78 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60._0_1_ = false;
  local_60._1_1_ = false;
  local_5e = false;
  local_5c._0_4_ = 0;
  local_5c._4_4_ = 0;
  local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_20._0_4_ = 0.0;
  local_20._4_4_ = 0.0;
  cVar5 = (**(code **)*this)();
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_178) &&
       ((FScriptContainerElement *)local_178 < pFVar1 + (longlong)param_1->ArrayMax * 0x160)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x160,8,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar8 + 1;
    FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
              ((FWorldPartitionStreamingSource *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x160),
               (FWorldPartitionStreamingSource *)local_178);
    bVar6 = true;
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  local_78 = 0;
  if (local_80 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar8 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar4 = local_98._4_4_;
  uStack_90 = 0xffffffff;
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  local_c8 = 0;
  if (local_d0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d0);
  }
  uVar3 = local_108 >> 0x20;
  local_108 = local_108 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_110,0,(int *)((longlong)&local_108 + 4));
  }
  iVar8 = local_100.MaxBits;
  uStack_e0 = 0xffffffff;
  local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
  if (0x80 < (uint)iVar8) {
    local_100.NumBits = 0;
    local_100.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
  }
  if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return bVar6;
}

