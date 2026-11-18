// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 10

// DereferenceIfNecessary<UInterchangeActorFactoryNode,UInterchangeActorFactoryNode_*_&> @ 14e525ed0

UInterchangeActorFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeActorFactoryNode,UInterchangeActorFactoryNode_*_&>
          (UInterchangeActorFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangeDecalActorFactoryNode,UInterchangeDecalActorFactoryNode_*_&> @ 14e525ef0

UInterchangeDecalActorFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeDecalActorFactoryNode,UInterchangeDecalActorFactoryNode_*_&>
          (UInterchangeDecalActorFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangeMeshFactoryNode,UInterchangeMeshFactoryNode_*_&> @ 14e525f10

UInterchangeMeshFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeMeshFactoryNode,UInterchangeMeshFactoryNode_*_&>
          (UInterchangeMeshFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangePhysicalCameraFactoryNode,UInterchangePhysicalCameraFactoryNode_*_&> @ 14e525f30

UInterchangePhysicalCameraFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangePhysicalCameraFactoryNode,UInterchangePhysicalCameraFactoryNode_*_&>
          (UInterchangePhysicalCameraFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangeSkeletalMeshFactoryNode,UInterchangeSkeletalMeshFactoryNode_*_&> @ 14e525f50

UInterchangeSkeletalMeshFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeSkeletalMeshFactoryNode,UInterchangeSkeletalMeshFactoryNode_*_&>
          (UInterchangeSkeletalMeshFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangeStandardCameraFactoryNode,UInterchangeStandardCameraFactoryNode_*_&> @ 14e525f70

UInterchangeStandardCameraFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeStandardCameraFactoryNode,UInterchangeStandardCameraFactoryNode_*_&>
          (UInterchangeStandardCameraFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangeStaticMeshFactoryNode,UInterchangeStaticMeshFactoryNode_*_&> @ 14e525f90

UInterchangeStaticMeshFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeStaticMeshFactoryNode,UInterchangeStaticMeshFactoryNode_*_&>
          (UInterchangeStaticMeshFactoryNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInterchangeTextureFactoryNode,UInterchangeTextureFactoryNode_*_&> @ 14e525fb0

UInterchangeTextureFactoryNode * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInterchangeTextureFactoryNode,UInterchangeTextureFactoryNode_*_&>
          (UInterchangeTextureFactoryNode **param_1)

{
  return *param_1;
}

// ConvertSampleRatetoFrameRate @ 14e53ba60

FFrameRate __cdecl UE::Interchange::Animation::ConvertSampleRatetoFrameRate(double param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  ulonglong uVar5;
  FFrameRate FVar6;
  FFrameRate in_RCX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  
  auVar11._8_4_ = in_XMM1._8_4_;
  auVar11._12_4_ = in_XMM1._12_4_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = in_XMM1._0_8_;
  auVar14 = roundpd(in_XMM5,auVar14,1);
  dVar13 = (in_XMM1._0_8_ - auVar14._0_8_) * __real_412e848000000000;
  auVar11._0_8_ = dVar13;
  auVar10._8_8_ = auVar11._8_8_;
  auVar10._0_8_ = dVar13 + dVar13 + __real_3fe0000000000000;
  uVar5 = (longlong)ROUND(auVar10._0_8_) >> 1;
  uVar7 = 1000000;
  do {
    uVar9 = uVar7;
    iVar8 = (int)uVar5;
    uVar1 = uVar5 & 0xffffffff;
    uVar5 = (ulonglong)uVar9;
    uVar7 = (uint)((longlong)((ulonglong)(uint)(iVar8 >> 0x1f) << 0x20 | uVar1) %
                  (longlong)(int)uVar9);
  } while (uVar7 != 0);
  dVar12 = __real_3ff0000000000000 / (double)(int)uVar9;
  iVar8 = (int)(dVar12 * __real_412e848000000000);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar13 + __real_3fe0000000000000;
  auVar11 = roundpd(auVar10,auVar3,1);
  if (iVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Denominator != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeAnimSequenceFactoryNode.cpp"
                       ,0x14,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar6 = (FFrameRate)(*pcVar2)();
      return FVar6;
    }
  }
  *(int *)in_RCX = (int)((double)iVar8 * auVar14._0_8_ + dVar12 * auVar11._0_8_);
  *(int *)((longlong)in_RCX + 4) = iVar8;
  return in_RCX;
}

// GetCommonPipelineDataUniqueID @ 14e550340

FString * __cdecl
UE::Interchange::CommonPipelineData::GetCommonPipelineDataUniqueID(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&StaticUid,L"CommonPipelineDataFactoryNode");
      atexit(`UE::Interchange::CommonPipelineData::GetCommonPipelineDataUniqueID'::__l2::
             _dynamic_atexit_destructor_for__StaticUid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = StaticUid.Data.AllocatorInstance;
  iVar2 = StaticUid.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

