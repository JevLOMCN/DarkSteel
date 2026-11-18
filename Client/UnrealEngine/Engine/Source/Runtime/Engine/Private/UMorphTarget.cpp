// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 147f91480

UClass * __cdecl UMorphTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMorphTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MorphTarget",
               &Z_Registration_Info_UClass_UMorphTarget.InnerSingleton,
               StaticRegisterNativesUMorphTarget,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMorphTarget>,InternalVTableHelperCtorCaller<UMorphTarget>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMorphTarget.InnerSingleton;
}

// UMorphTarget @ 147fa6170

UMorphTarget * __thiscall UMorphTarget::UMorphTarget(UMorphTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMorphTarget__6B_;
  (this->BaseSkelMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->MorphLODModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphLODModels).ArrayNum = 0;
  (this->MorphLODModels).ArrayMax = 0;
  (this->CompressedLODModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedLODModels).ArrayNum = 0;
  (this->CompressedLODModels).ArrayMax = 0;
  return this;
}

// UMorphTarget @ 147fa61b0

UMorphTarget * __thiscall UMorphTarget::UMorphTarget(UMorphTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMorphTarget__6B_;
  (this->BaseSkelMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->MorphLODModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphLODModels).ArrayNum = 0;
  (this->MorphLODModels).ArrayMax = 0;
  (this->CompressedLODModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedLODModels).ArrayNum = 0;
  (this->CompressedLODModels).ArrayMax = 0;
  return this;
}

// ~UMorphTarget @ 147fa9780

void __thiscall UMorphTarget::~UMorphTarget(UMorphTarget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMorphTarget__6B_;
  DestructItems<FMorphTargetCompressedLODModel,int>
            ((FMorphTargetCompressedLODModel *)(this->CompressedLODModels).AllocatorInstance.Data,
             (this->CompressedLODModels).ArrayNum);
  pFVar1 = (this->CompressedLODModels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMorphTargetLODModel,int>
            ((FMorphTargetLODModel *)(this->MorphLODModels).AllocatorInstance.Data,
             (this->MorphLODModels).ArrayNum);
  pFVar1 = (this->MorphLODModels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// EmptyMorphLODModels @ 147fc68c0

void __thiscall UMorphTarget::EmptyMorphLODModels(UMorphTarget *this)

{
  int *piVar1;
  
  DestructItems<FMorphTargetLODModel,int>
            ((FMorphTargetLODModel *)(this->MorphLODModels).AllocatorInstance.Data,
             (this->MorphLODModels).ArrayNum);
  piVar1 = &(this->MorphLODModels).ArrayMax;
  (this->MorphLODModels).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->MorphLODModels).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetCustomImportedSourceFilename @ 147fd1780

FString * __thiscall UMorphTarget::GetCustomImportedSourceFilename(UMorphTarget *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FString *pFVar4;
  uint uVar5;
  
  if ((this->MorphLODModels).ArrayNum <= param_1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UMorphTarget::GetCustomImportedSourceFilename'::__l2::
               _dynamic_atexit_destructor_for__EmptyString__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &::EmptyString;
  }
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2b8))();
  uVar5 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FString *)(*plVar3 + (longlong)param_1 * 0x40 + 0x30);
}

// GetDeltaIteratorForLOD @ 147fd18e0

FMorphTargetDeltaIterator * __thiscall
UMorphTarget::GetDeltaIteratorForLOD
          (UMorphTarget *this,FMorphTargetDeltaIterator *__return_storage_ptr__,int param_1)

{
  FMorphTargetDelta *pFVar1;
  FMorphTargetCompressedLODModel *pFVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FMorphTargetDelta *pFVar8;
  ulonglong uVar9;
  FDeltaBatchHeader *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  FMorphTargetDeltaIterator *pFVar16;
  longlong *plVar17;
  uint uVar18;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_4c;
  TArrayView<unsigned_int_const_,int> local_48;
  TArrayView<UE::MorphTargetVertexCodec::FDeltaBatchHeader_const_,int> local_38 [3];
  
  lVar15 = (**(code **)(this->_padding_ + 0x2b8))();
  if ((param_1 < 0) || (*(int *)(lVar15 + 8) <= param_1)) {
    *(undefined8 *)&(__return_storage_ptr__->RawDeltas).ArrayNum = 0;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0 = 0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0 + 8)
         = 0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0 + 4)
         = 0;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).SourceIdx = 0;
    __return_storage_ptr__->Token = 0xffffffffffffffff;
    (__return_storage_ptr__->RawDeltas).DataPtr = (FMorphTargetDelta *)0x0;
    __return_storage_ptr__->CompressedDelta = (FMorphTargetCompressedLODModel *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (__return_storage_ptr__->CurrentDelta).SourceIdx = 0xffffffff;
  }
  else if (param_1 < (this->CompressedLODModels).ArrayNum) {
    uVar14 = 0;
    if (param_1 < (this->CompressedLODModels).ArrayNum) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      pFVar16 = (FMorphTargetDeltaIterator *)(*pcVar11)();
      return pFVar16;
    }
    pFVar7 = (this->CompressedLODModels).AllocatorInstance.Data;
    __return_storage_ptr__->Token = 0;
    (__return_storage_ptr__->RawDeltas).DataPtr = (FMorphTargetDelta *)0x0;
    (__return_storage_ptr__->RawDeltas).ArrayNum = 0;
    pFVar2 = (FMorphTargetCompressedLODModel *)(pFVar7 + (longlong)param_1 * 0x28);
    __return_storage_ptr__->CompressedDelta = pFVar2;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (__return_storage_ptr__->CurrentDelta).SourceIdx = 0xffffffff;
    if (((pFVar2->PackedDeltaHeaders).ArrayNum == 0) || ((pFVar2->PackedDeltaData).ArrayNum == 0)) {
      __return_storage_ptr__->Token = 0xffffffffffffffff;
      __return_storage_ptr__->CompressedDelta = (FMorphTargetCompressedLODModel *)0x0;
      (__return_storage_ptr__->RawDeltas).DataPtr = (FMorphTargetDelta *)0x0;
      *(ulonglong *)&(__return_storage_ptr__->RawDeltas).ArrayNum = (ulonglong)uStack_6c << 0x20;
    }
    else {
      FMorphTargetDeltaIterator::Advance(__return_storage_ptr__);
    }
  }
  else {
    plVar17 = (longlong *)(**(code **)(this->_padding_ + 0x2b8))(this);
    uVar14 = 0;
    if (param_1 < (int)plVar17[1]) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      pFVar16 = (FMorphTargetDeltaIterator *)(*pcVar11)();
      return pFVar16;
    }
    lVar15 = (longlong)param_1 * 0x40;
    pFVar8 = *(FMorphTargetDelta **)(lVar15 + *plVar17);
    iVar5 = *(int *)(lVar15 + 8 + *plVar17);
    if ((iVar5 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pFVar16 = (FMorphTargetDeltaIterator *)(*pcVar11)();
      return pFVar16;
    }
    __return_storage_ptr__->Token = 0;
    pFVar1 = &__return_storage_ptr__->CurrentDelta;
    __return_storage_ptr__->CompressedDelta = (FMorphTargetCompressedLODModel *)0x0;
    (__return_storage_ptr__->RawDeltas).DataPtr = pFVar8;
    *(ulonglong *)&(__return_storage_ptr__->RawDeltas).ArrayNum = CONCAT44(uStack_6c,iVar5);
    *(undefined8 *)&(pFVar1->PositionDelta).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (__return_storage_ptr__->CurrentDelta).SourceIdx = 0xffffffff;
    iVar5 = (__return_storage_ptr__->RawDeltas).ArrayNum;
    if (iVar5 == 0) {
      pFVar2 = __return_storage_ptr__->CompressedDelta;
      if (pFVar2 != (FMorphTargetCompressedLODModel *)0x0) {
        pFVar7 = (pFVar2->PackedDeltaData).AllocatorInstance.Data;
        iVar5 = (pFVar2->PackedDeltaData).ArrayNum;
        fVar3 = pFVar2->TangentPrecision;
        fVar4 = pFVar2->PositionPrecision;
        if ((iVar5 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          pFVar16 = (FMorphTargetDeltaIterator *)(*pcVar11)();
          return pFVar16;
        }
        pFVar10 = (FDeltaBatchHeader *)
                  (__return_storage_ptr__->CompressedDelta->PackedDeltaHeaders).AllocatorInstance.
                  Data;
        iVar6 = (__return_storage_ptr__->CompressedDelta->PackedDeltaHeaders).ArrayNum;
        if ((iVar6 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          pFVar16 = (FMorphTargetDeltaIterator *)(*pcVar11)();
          return pFVar16;
        }
        local_48._12_4_ = uStack_5c;
        local_48.ArrayNum = iVar5;
        local_38[0]._12_4_ = uStack_4c;
        local_38[0].ArrayNum = iVar6;
        local_48.DataPtr = (uint *)pFVar7;
        local_38[0].DataPtr = pFVar10;
        bVar13 = UE::MorphTargetVertexCodec::IterativeDecode
                           (&__return_storage_ptr__->Token,local_38,&local_48,fVar4,fVar3,pFVar1);
        if (bVar13) {
          return __return_storage_ptr__;
        }
      }
    }
    else {
      uVar9 = __return_storage_ptr__->Token;
      uStack_4c = uStack_6c;
      if (uVar9 < (ulonglong)(longlong)iVar5) {
        __return_storage_ptr__->Token = uVar9 + 1;
        uVar18 = (uint)uVar9;
        uVar14 = 0;
        if ((int)uVar18 < iVar5) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          pFVar16 = (FMorphTargetDeltaIterator *)(*pcVar11)();
          return pFVar16;
        }
        pFVar8 = (__return_storage_ptr__->RawDeltas).DataPtr;
        uVar12 = *(undefined8 *)((longlong)&pFVar8[(int)uVar18].PositionDelta.field0_0x0 + 8);
        *(undefined8 *)&(pFVar1->PositionDelta).field0_0x0 =
             *(undefined8 *)&pFVar8[(int)uVar18].PositionDelta.field0_0x0;
        *(undefined8 *)
         ((longlong)&(__return_storage_ptr__->CurrentDelta).PositionDelta.field0_0x0 + 8) = uVar12;
        *(undefined8 *)
         ((longlong)&(__return_storage_ptr__->CurrentDelta).TangentZDelta.field0_0x0 + 4) =
             *(undefined8 *)((longlong)&pFVar8[(int)uVar18].TangentZDelta.field0_0x0 + 4);
        (__return_storage_ptr__->CurrentDelta).SourceIdx = pFVar8[(int)uVar18].SourceIdx;
        return __return_storage_ptr__;
      }
    }
    __return_storage_ptr__->CompressedDelta = (FMorphTargetCompressedLODModel *)0x0;
    *(undefined4 *)&(__return_storage_ptr__->RawDeltas).DataPtr = 0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->RawDeltas).DataPtr + 4) = 0;
    (__return_storage_ptr__->RawDeltas).ArrayNum = 0;
    *(uint *)&(__return_storage_ptr__->RawDeltas).field_0xc = uStack_4c;
    __return_storage_ptr__->Token = 0xffffffffffffffff;
  }
  return __return_storage_ptr__;
}

// GetMorphLODModels @ 147fd3970

TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> * __thiscall
UMorphTarget::GetMorphLODModels(UMorphTarget *this)

{
  return &this->MorphLODModels;
}

// GetMorphLODModels @ 147fd3980

TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> * __thiscall
UMorphTarget::GetMorphLODModels(UMorphTarget *this)

{
  return &this->MorphLODModels;
}

// GetNumDeltasForLOD @ 147fd40c0

int __thiscall UMorphTarget::GetNumDeltasForLOD(UMorphTarget *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  lVar4 = (**(code **)(this->_padding_ + 0x2b8))();
  if ((-1 < param_1) && (param_1 < *(int *)(lVar4 + 8))) {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2b8))();
    uVar6 = 0;
    if (param_1 < (int)plVar5[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((longlong)param_1 * 0x40 + 0x10 + *plVar5);
  }
  return 0;
}

// GetPrivateStaticClass @ 147fd6380

UClass * __cdecl UMorphTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMorphTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MorphTarget",
               &Z_Registration_Info_UClass_UMorphTarget.InnerSingleton,
               StaticRegisterNativesUMorphTarget,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMorphTarget>,InternalVTableHelperCtorCaller<UMorphTarget>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMorphTarget.InnerSingleton;
}

// HasDataForLOD @ 147fdde30

bool __thiscall UMorphTarget::HasDataForLOD(UMorphTarget *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x2c8))();
  return iVar1 != 0;
}

// HasDataForSection @ 147fdde50

bool __thiscall UMorphTarget::HasDataForSection(UMorphTarget *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  
  cVar4 = (**(code **)(this->_padding_ + 0x2d0))(this,param_1);
  if (cVar4 != '\0') {
    uVar7 = 0;
    if (param_1 < (this->MorphLODModels).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar2 = (this->MorphLODModels).AllocatorInstance.Data;
    piVar8 = *(int **)(pFVar2 + (longlong)param_1 * 0x40 + 0x18);
    piVar1 = piVar8 + *(int *)(pFVar2 + (longlong)param_1 * 0x40 + 0x20);
    for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      if (*piVar8 == param_2) {
        return true;
      }
    }
  }
  return false;
}

// HasValidData @ 147fde050

bool __thiscall UMorphTarget::HasValidData(UMorphTarget *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MorphLODModels).ArrayNum;
  pFVar2 = (this->MorphLODModels).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->MorphLODModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMorphTargetLODModel_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((0 < *(int *)(pFVar2 + 8)) || (0 < *(int *)(pFVar2 + 0x10))) {
      return true;
    }
    pFVar2 = pFVar2 + 0x40;
  }
  return false;
}

// IsCustomImported @ 147fe2500

bool __thiscall UMorphTarget::IsCustomImported(UMorphTarget *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((this->MorphLODModels).ArrayNum <= param_1) {
    return false;
  }
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2b8))();
  uVar5 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 1 < *(int *)((longlong)param_1 * 0x40 + 0x38 + *plVar4);
}

// IsGeneratedByEngine @ 147fe2800

bool __thiscall UMorphTarget::IsGeneratedByEngine(UMorphTarget *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (param_1 < (this->MorphLODModels).ArrayNum) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2b8))();
    uVar5 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)((longlong)param_1 * 0x40 + 0x38 + *plVar4) < 2) {
      return (bool)*(undefined1 *)((longlong)param_1 * 0x40 + 0x28 + *plVar4);
    }
  }
  return false;
}

// PostLoad @ 147fe6280

void __thiscall UMorphTarget::PostLoad(UMorphTarget *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMorphTarget **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 147ff2a40

void __thiscall UMorphTarget::Serialize(UMorphTarget *this,FArchive *param_1)

{
  int *piVar1;
  TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  FMorphTargetCompressedLODModel *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint local_res10 [2];
  FStripDataFlags local_res18 [4];
  FLLMScope local_res20 [2];
  uint local_68;
  uint local_64;
  FMemScope local_60;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_> local_48;
  
  FLLMScope::FLLMScope(local_res20,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_60,Animation,true);
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  FStripDataFlags::FStripDataFlags(local_res18,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if ((local_res18[0].GlobalStripFlags & 2) == 0) {
    if (((*(longlong *)&param_1->field_0x68 == 0) ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) ||
       ((param_1->field_0x29 & 1) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar8);
    if (((param_1->field_0x28 & 1) == 0) ||
       (iVar9 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
       0xd2 < iVar9)) {
      ::operator<<(param_1,(bool *)local_res10);
      cVar11 = local_res10[0]._0_1_;
    }
    else {
      cVar11 = '\0';
    }
    TArrayPrivateFriend::Serialize<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>
              (param_1,&this->MorphLODModels);
    if (cVar11 != '\0') {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (plVar4 = *(longlong **)(*(longlong *)&param_1->field_0x68 + 8), plVar4 == (longlong *)0x0)
         ) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar4 + 200))(plVar4,0xd);
      }
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar8);
      ::operator<<(param_1,(bool *)local_res10);
      if (local_res10[0]._0_1_ != false) {
        plVar4 = *(longlong **)&param_1->field_0x8;
        iVar9 = 0;
        local_res10[0] = 0;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res10);
          }
        }
        else {
          local_res10[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        uVar7 = local_res10[0];
        if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
        }
        pFVar5 = (FMorphTargetCompressedLODModel *)
                 (this->CompressedLODModels).AllocatorInstance.Data;
        iVar10 = (this->CompressedLODModels).ArrayNum;
        piVar1 = &(this->CompressedLODModels).ArrayMax;
        if (*piVar1 < (int)local_res10[0]) {
          DestructItems<FMorphTargetCompressedLODModel,int>(pFVar5,iVar10);
          (this->CompressedLODModels).ArrayNum = 0;
          if (*piVar1 != uVar7) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,uVar7,&(this->CompressedLODModels).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FMorphTargetCompressedLODModel,int>(pFVar5,iVar10);
          (this->CompressedLODModels).ArrayNum = 0;
        }
        if (0 < (int)local_res10[0]) {
          do {
            local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.ArrayNum = 0;
            local_48.ArrayMax = 0;
            local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.ArrayNum = 0;
            local_58.ArrayMax = 0;
            local_68 = 0;
            local_64 = 0;
            TArrayPrivateFriend::
            Serialize<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_>
                      (param_1,&local_48);
            TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
                      (param_1,&local_58);
            plVar4 = *(longlong **)&param_1->field_0x8;
            if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_68);
              }
            }
            else {
              local_68 = *(uint *)*plVar4;
              *plVar4 = *plVar4 + 4;
            }
            plVar4 = *(longlong **)&param_1->field_0x8;
            if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_64);
              }
            }
            else {
              local_64 = *(uint *)*plVar4;
              *plVar4 = *plVar4 + 4;
            }
            iVar10 = (this->CompressedLODModels).ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&(this->CompressedLODModels).AllocatorInstance,piVar1);
            }
            (this->CompressedLODModels).ArrayNum = iVar10 + 1;
            pTVar3 = (TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_>
                      *)((this->CompressedLODModels).AllocatorInstance.Data +
                        (longlong)iVar10 * 0x28);
            DefaultConstructItems<FMorphTargetCompressedLODModel,int>(pTVar3,1);
            if (pTVar3 != &local_48) {
              pFVar6 = (pTVar3->AllocatorInstance).Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              (pTVar3->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
              local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pTVar3->ArrayNum = local_48.ArrayNum;
              pTVar3->ArrayMax = local_48.ArrayMax;
              local_48.ArrayNum = 0;
              local_48.ArrayMax = 0;
            }
            pTVar2 = pTVar3 + 1;
            if (pTVar2 != (TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_>
                           *)&local_58) {
              pFVar6 = (pTVar2->AllocatorInstance).Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              (pTVar2->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
              local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pTVar3[1].ArrayNum = local_58.ArrayNum;
              pTVar3[1].ArrayMax = local_58.ArrayMax;
              local_58.ArrayNum = 0;
              local_58.ArrayMax = 0;
            }
            *(uint *)&pTVar3[2].AllocatorInstance.Data = local_68;
            *(uint *)((longlong)&pTVar3[2].AllocatorInstance.Data + 4) = local_64;
            if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.AllocatorInstance.Data);
            }
            if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.AllocatorInstance.Data);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)local_res10[0]);
        }
      }
    }
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Serialize @ 147ff2e10

void __thiscall UMorphTarget::Serialize(UMorphTarget *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeMemoryArchive @ 147ff3d90

void __thiscall UMorphTarget::SerializeMemoryArchive(UMorphTarget *this,FMemoryArchive *param_1)

{
  longlong local_res8;
  
  local_res8 = this->_padding_;
  (**(code **)(param_1->_padding_ + 0x178))(param_1,&local_res8);
  ::`anonymous_namespace'::SerializeMorphLODModels(param_1,&this->MorphLODModels);
  return;
}

// SetCustomImportedSourceFilename @ 147ff4f00

void __thiscall
UMorphTarget::SetCustomImportedSourceFilename(UMorphTarget *this,int param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_1 < (this->MorphLODModels).ArrayNum) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2b0))();
    uVar4 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar5 = (longlong)param_1 * 0x40 + *plVar3;
    ::FString::operator=((FString *)(lVar5 + 0x30),param_2);
    *(undefined1 *)(lVar5 + 0x28) = 0;
  }
  return;
}

// SetGeneratedByEngine @ 147ff5aa0

void __thiscall UMorphTarget::SetGeneratedByEngine(UMorphTarget *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_1 < (this->MorphLODModels).ArrayNum) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2b0))();
    uVar4 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar5 = (longlong)param_1 * 0x40 + *plVar3;
    ::FString::Empty((FString *)(lVar5 + 0x30));
    *(bool *)(lVar5 + 0x28) = param_2;
  }
  return;
}

// StaticRegisterNativesUMorphTarget @ 147ff8850

void __cdecl UMorphTarget::StaticRegisterNativesUMorphTarget(void)

{
  return;
}

// UsesBuiltinMorphTargetCompression @ 148000600

bool __thiscall UMorphTarget::UsesBuiltinMorphTargetCompression(UMorphTarget *this)

{
  return true;
}

