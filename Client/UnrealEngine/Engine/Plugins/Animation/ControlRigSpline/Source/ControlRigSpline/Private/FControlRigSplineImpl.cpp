// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 8

// StaticStruct @ 14debe3a0

UScriptStruct * __cdecl FControlRigSplineImpl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigSplineImpl.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FControlRigSplineImpl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSplineImpl,(UObject *)pUVar1,
                         L"ControlRigSplineImpl");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigSplineImpl.OuterSingleton;
}

// ~FControlRigSplineImpl @ 14dec2880

void __thiscall FControlRigSplineImpl::~FControlRigSplineImpl(FControlRigSplineImpl *this)

{
  ControlRigBaseSpline *pCVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FControlRigSplineImpl__6B_;
  pCVar1 = this->Spline;
  if (pCVar1 != (ControlRigBaseSpline *)0x0) {
    (**(code **)pCVar1->_padding_)(pCVar1,1);
    this->Spline = (ControlRigBaseSpline *)0x0;
  }
  pFVar2 = (this->AccumulatedLenth).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SamplesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InitialLengths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ControlTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// GetControlPoints @ 14dec45c0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigSplineImpl::GetControlPoints(FControlRigSplineImpl *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Spline == (ControlRigBaseSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spline",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                       ,0x116,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014dec4602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->Spline->_padding_ + 0x18))();
  return pTVar3;
}

// GetControlPointsWithoutDuplicates @ 14dec48a0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigSplineImpl::GetControlPointsWithoutDuplicates
          (FControlRigSplineImpl *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Spline == (ControlRigBaseSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spline",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                       ,0x121,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)(this->Spline->_padding_ + 0x20))(this->Spline,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetControlTransforms @ 14dec4900

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigSplineImpl::GetControlTransforms(FControlRigSplineImpl *this)

{
  return &this->ControlTransforms;
}

// GetControlTransformsWithoutDuplicates @ 14dec4910

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigSplineImpl::GetControlTransformsWithoutDuplicates
          (FControlRigSplineImpl *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  ushort *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ushort *puVar14;
  undefined1 local_res8 [8];
  ushort *local_38;
  ulonglong local_30;
  
  if (this->Spline == (ControlRigBaseSpline *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spline",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                       ,0x127,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
  }
  (**(code **)(this->Spline->_padding_ + 0x28))(this->Spline,&local_38);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar10 = (int)local_30;
  if (-1 < iVar10) {
    if (0 < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar10 = (int)local_30;
    puVar2 = local_38 + iVar10;
    puVar14 = local_38;
    while( true ) {
      if ((int)local_30 != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar14 == puVar2) break;
      uVar12 = (uint)*puVar14;
      iVar8 = (this->ControlTransforms).ArrayNum;
      if (iVar8 <= (int)(uint)*puVar14) {
        uVar12 = (uint)((longlong)(ulonglong)uVar12 % (longlong)iVar8);
      }
      uVar7 = 0;
      if ((int)uVar12 < (this->ControlTransforms).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar13 = (this->ControlTransforms).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x60;
      if ((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (longlong)*piVar1 * 0x60)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1060,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar5 = *(undefined8 *)(pFVar13 + 8);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar11 = (longlong)iVar8 * 0x60;
      puVar14 = puVar14 + 1;
      *(undefined8 *)(pFVar3 + lVar11) = *(undefined8 *)pFVar13;
      *(undefined8 *)(pFVar3 + lVar11 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar13 + 0x18);
      *(undefined8 *)(pFVar3 + lVar11 + 0x10) = *(undefined8 *)(pFVar13 + 0x10);
      *(undefined8 *)(pFVar3 + lVar11 + 0x10 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar13 + 0x28);
      *(undefined8 *)(pFVar3 + lVar11 + 0x20) = *(undefined8 *)(pFVar13 + 0x20);
      *(undefined8 *)(pFVar3 + lVar11 + 0x20 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar13 + 0x38);
      *(undefined8 *)(pFVar3 + lVar11 + 0x30) = *(undefined8 *)(pFVar13 + 0x30);
      *(undefined8 *)(pFVar3 + lVar11 + 0x30 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar13 + 0x48);
      *(undefined8 *)(pFVar3 + lVar11 + 0x40) = *(undefined8 *)(pFVar13 + 0x40);
      *(undefined8 *)(pFVar3 + lVar11 + 0x40 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar13 + 0x58);
      *(undefined8 *)(pFVar3 + lVar11 + 0x50) = *(undefined8 *)(pFVar13 + 0x50);
      *(undefined8 *)(pFVar3 + lVar11 + 0x50 + 8) = uVar5;
    }
    if (local_38 != (ushort *)0x0) {
      FMemory::Free(local_38);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(local_30 & 0xffffffff);
}

// GetDegree @ 14dec4be0

uchar __thiscall FControlRigSplineImpl::GetDegree(FControlRigSplineImpl *this)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if (this->Spline != (ControlRigBaseSpline *)0x0) {
    return (uchar)this->Spline->Degree;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Spline",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                     ,0x13c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (uchar)this->Spline->Degree;
}

// NumSamples @ 14dec5940

ushort __thiscall FControlRigSplineImpl::NumSamples(FControlRigSplineImpl *this)

{
  return (ushort)(this->SamplesArray).ArrayNum;
}

