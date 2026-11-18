// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 12

// StaticClass @ 14e5160a0

UClass * __cdecl UInterchangeGroomFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeGroomFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeGroomFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomFactoryNode,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGroomFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeGroomFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomFactoryNode.InnerSingleton;
}

// UInterchangeGroomFactoryNode @ 14e5304d0

UInterchangeGroomFactoryNode * __thiscall
UInterchangeGroomFactoryNode::UInterchangeGroomFactoryNode
          (UInterchangeGroomFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeGroomFactoryNode__6B_;
  (this->Macro_CustomCurveDecimationKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomCurveDecimationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomCurveDecimationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomCurveDecimationKey).Key,L"CurveDecimation");
  (this->Macro_CustomVertexDecimationKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexDecimationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexDecimationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexDecimationKey).Key,L"VertexDecimation");
  (this->Macro_CustomGuideTypeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomGuideTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGuideTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGuideTypeKey).Key,L"GuideType");
  (this->Macro_CustomHairToGuideDensityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHairToGuideDensityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHairToGuideDensityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHairToGuideDensityKey).Key,L"HairToGuideDensity");
  (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRiggedGuideNumCurvesKey).Key,L"RiggedGuideNumCurves");
  (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRiggedGuideNumPointsKey).Key,L"RiggedGuideNumPoints");
  (this->Macro_CustomInterpolationQualityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInterpolationQualityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInterpolationQualityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInterpolationQualityKey).Key,L"InterpolationQuality");
  (this->Macro_CustomInterpolationDistanceKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInterpolationDistanceKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInterpolationDistanceKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInterpolationDistanceKey).Key,L"InterpolationDistance");
  (this->Macro_CustombRandomizeGuideKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombRandomizeGuideKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombRandomizeGuideKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustombRandomizeGuideKey).Key,L"bRandomizeGuide");
  (this->Macro_CustombUseUniqueGuideKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombUseUniqueGuideKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombUseUniqueGuideKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustombUseUniqueGuideKey).Key,L"bUseUniqueGuide");
  return this;
}

// UInterchangeGroomFactoryNode @ 14e530610

UInterchangeGroomFactoryNode * __thiscall
UInterchangeGroomFactoryNode::UInterchangeGroomFactoryNode(UInterchangeGroomFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeGroomFactoryNode__6B_;
  (this->Macro_CustomCurveDecimationKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomCurveDecimationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomCurveDecimationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomCurveDecimationKey).Key,L"CurveDecimation");
  (this->Macro_CustomVertexDecimationKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexDecimationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexDecimationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexDecimationKey).Key,L"VertexDecimation");
  (this->Macro_CustomGuideTypeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomGuideTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGuideTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGuideTypeKey).Key,L"GuideType");
  (this->Macro_CustomHairToGuideDensityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHairToGuideDensityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHairToGuideDensityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHairToGuideDensityKey).Key,L"HairToGuideDensity");
  (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRiggedGuideNumCurvesKey).Key,L"RiggedGuideNumCurves");
  (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRiggedGuideNumPointsKey).Key,L"RiggedGuideNumPoints");
  (this->Macro_CustomInterpolationQualityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInterpolationQualityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInterpolationQualityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInterpolationQualityKey).Key,L"InterpolationQuality");
  (this->Macro_CustomInterpolationDistanceKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInterpolationDistanceKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInterpolationDistanceKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInterpolationDistanceKey).Key,L"InterpolationDistance");
  (this->Macro_CustombRandomizeGuideKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombRandomizeGuideKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombRandomizeGuideKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustombRandomizeGuideKey).Key,L"bRandomizeGuide");
  (this->Macro_CustombUseUniqueGuideKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombUseUniqueGuideKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombUseUniqueGuideKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustombUseUniqueGuideKey).Key,L"bUseUniqueGuide");
  return this;
}

// ~UInterchangeGroomFactoryNode @ 14e535740

void __thiscall
UInterchangeGroomFactoryNode::~UInterchangeGroomFactoryNode(UInterchangeGroomFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGroomFactoryNode__6B_;
  pFVar1 = (this->Macro_CustombUseUniqueGuideKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustombRandomizeGuideKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomInterpolationDistanceKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomInterpolationQualityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRiggedGuideNumPointsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRiggedGuideNumCurvesKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomHairToGuideDensityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGuideTypeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomVertexDecimationKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomCurveDecimationKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetCustomGroupInterpolationSettings @ 14e553250

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings
          (UInterchangeGroomFactoryNode *this,FHairGroupsInterpolation *param_1)

{
  code *pcVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  FAttributeStorage *pFVar8;
  ulonglong uVar9;
  int *piVar10;
  TAttributeHandle<unsigned_char,void> local_1b8;
  TAttributeHandle<unsigned_char,void> local_1a0;
  TAttributeHandle<unsigned_char,void> local_188;
  void *local_170 [2];
  void *local_160 [2];
  void *local_150 [2];
  FString local_140;
  void *local_130 [2];
  void *local_120 [2];
  void *local_110 [2];
  void *local_100 [2];
  FString local_f0;
  void *local_e0 [2];
  FString local_d0;
  void *local_c0 [2];
  void *local_b0 [2];
  TAttributeHandle<unsigned_char,void> local_a0;
  TAttributeHandle<unsigned_char,void> local_88;
  TAttributeHandle<unsigned_char,void> local_70;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar2 = _tls_index;
  uVar9 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_170);
    ::FString::ConcatFC(&CurveDecimationOperationName,pFVar5,L".GetCurveDecimation");
    if (local_170[0] != (void *)0x0) {
      FMemory::Free(local_170[0]);
    }
    atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
           _dynamic_atexit_destructor_for__CurveDecimationOperationName__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomCurveDecimationKey,
                     &CurveDecimationOperationName,(float *)param_1);
  if (bVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS1
        ) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_160);
      ::FString::ConcatFC(&VertexDecimationOperationName,pFVar5,L".GetVertexDecimation");
      if (local_160[0] != (void *)0x0) {
        FMemory::Free(local_160[0]);
      }
      atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
             _dynamic_atexit_destructor_for__VertexDecimationOperationName__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                      ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexDecimationKey,
                       &VertexDecimationOperationName,
                       &(param_1->DecimationSettings).VertexDecimation);
    if (bVar3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar2 * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_150);
        ::FString::ConcatFC(&GuideTypeOperationName,pFVar5,L".GetGuideType");
        if (local_150[0] != (void *)0x0) {
          FMemory::Free(local_150[0]);
        }
        atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
               _dynamic_atexit_destructor_for__GuideTypeOperationName__);
        _Init_thread_footer(&::_TSS2);
      }
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar8 = (FAttributeStorage *)this->_padding_;
      bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (pFVar8,&this->Macro_CustomGuideTypeKey);
      if (bVar3) {
        pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                           (pFVar8,&local_a0,&this->Macro_CustomGuideTypeKey);
        UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
        TAttributeHandle<unsigned_char,void>(&local_1b8,&pTVar6->Key,pTVar6->AttributeStorage);
        if (local_a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                          (&local_1b8);
        if (bVar3) {
          EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                            (&local_1b8,&(param_1->InterpolationSettings).GuideType);
          if ((EVar7 & Operation_Success) == None) {
            ::FString::FString(&local_140,&(this->Macro_CustomGuideTypeKey).Key);
            pFVar5 = ::FString::FString(&local_58,&GuideTypeOperationName);
            UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_140);
          }
          else {
            if (local_1b8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Key.Key.Data.AllocatorInstance.Data);
            }
            piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) +
                             0x9d4c);
            if ((*piVar10 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
              pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_130);
              ::FString::ConcatFC(&HairToGuideDensityOperationName,pFVar5,L".GetHairToGuideDensity")
              ;
              if (local_130[0] != (void *)0x0) {
                FMemory::Free(local_130[0]);
              }
              atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
                     _dynamic_atexit_destructor_for__HairToGuideDensityOperationName__);
              _Init_thread_footer(&::_TSS3);
            }
            pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                     operator*<UE::Interchange::FAttributeStorage>
                               ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_
                               );
            bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                              (pFVar8,&this->Macro_CustomHairToGuideDensityKey,
                               &HairToGuideDensityOperationName,
                               &(param_1->InterpolationSettings).HairToGuideDensity);
            if (!bVar3) {
              return false;
            }
            if ((*piVar10 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
              pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_120);
              ::FString::ConcatFC(&RiggedGuideNumCurvesOperationName,pFVar5,
                                  L".GetRiggedGuideNumCurves");
              if (local_120[0] != (void *)0x0) {
                FMemory::Free(local_120[0]);
              }
              atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
                     _dynamic_atexit_destructor_for__RiggedGuideNumCurvesOperationName__);
              _Init_thread_footer(&::_TSS4);
            }
            pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                     operator*<UE::Interchange::FAttributeStorage>
                               ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_
                               );
            bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                              (pFVar8,&this->Macro_CustomRiggedGuideNumCurvesKey,
                               &RiggedGuideNumCurvesOperationName,
                               &(param_1->InterpolationSettings).RiggedGuideNumCurves);
            if (!bVar3) {
              return false;
            }
            if ((*piVar10 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
              pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_110);
              ::FString::ConcatFC(&RiggedGuideNumPointsOperationName,pFVar5,
                                  L".GetRiggedGuideNumPoints");
              if (local_110[0] != (void *)0x0) {
                FMemory::Free(local_110[0]);
              }
              atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
                     _dynamic_atexit_destructor_for__RiggedGuideNumPointsOperationName__);
              _Init_thread_footer(&::_TSS5);
            }
            pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                     operator*<UE::Interchange::FAttributeStorage>
                               ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_
                               );
            bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                              (pFVar8,&this->Macro_CustomRiggedGuideNumPointsKey,
                               &RiggedGuideNumPointsOperationName,
                               &(param_1->InterpolationSettings).RiggedGuideNumPoints);
            if (!bVar3) {
              return false;
            }
            if ((*piVar10 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
              pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_100);
              ::FString::ConcatFC(&InterpolationQualityOperationName,pFVar5,
                                  L".GetInterpolationQuality");
              if (local_100[0] != (void *)0x0) {
                FMemory::Free(local_100[0]);
              }
              atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
                     _dynamic_atexit_destructor_for__InterpolationQualityOperationName__);
              _Init_thread_footer(&::_TSS6);
            }
            pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                     operator*<UE::Interchange::FAttributeStorage>
                               ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_
                               );
            bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                              (pFVar8,&this->Macro_CustomInterpolationQualityKey);
            if (!bVar3) {
              return false;
            }
            pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                               (pFVar8,&local_88,&this->Macro_CustomInterpolationQualityKey);
            UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
            TAttributeHandle<unsigned_char,void>(&local_1a0,&pTVar6->Key,pTVar6->AttributeStorage);
            if (local_88.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Key.Key.Data.AllocatorInstance.Data);
            }
            bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
                    IsValid(&local_1a0);
            local_1b8.Key.Key.Data.AllocatorInstance.Data =
                 local_1a0.Key.Key.Data.AllocatorInstance.Data;
            if (bVar3) {
              EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                                (&local_1a0,&(param_1->InterpolationSettings).InterpolationQuality);
              if ((EVar7 & Operation_Success) == None) {
                ::FString::FString(&local_f0,&(this->Macro_CustomInterpolationQualityKey).Key);
                pFVar5 = ::FString::FString(&local_48,&InterpolationQualityOperationName);
                UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_f0);
                local_1b8.Key.Key.Data.AllocatorInstance.Data =
                     local_1a0.Key.Key.Data.AllocatorInstance.Data;
              }
              else {
                if (local_1a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_1a0.Key.Key.Data.AllocatorInstance.Data);
                }
                if ((*piVar10 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
                  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_e0);
                  ::FString::ConcatFC(&InterpolationDistanceOperationName,pFVar5,
                                      L".GetInterpolationDistance");
                  if (local_e0[0] != (void *)0x0) {
                    FMemory::Free(local_e0[0]);
                  }
                  atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::__l2::
                         _dynamic_atexit_destructor_for__InterpolationDistanceOperationName__);
                  _Init_thread_footer(&::_TSS7);
                }
                pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                         operator*<UE::Interchange::FAttributeStorage>
                                   ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)
                                    &this->_padding_);
                bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                                  (pFVar8,&this->Macro_CustomInterpolationDistanceKey);
                if (!bVar3) {
                  return false;
                }
                pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                                   (pFVar8,&local_70,&this->Macro_CustomInterpolationDistanceKey);
                UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
                TAttributeHandle<unsigned_char,void>
                          (&local_188,&pTVar6->Key,pTVar6->AttributeStorage);
                if (local_70.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_70.Key.Key.Data.AllocatorInstance.Data);
                }
                bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
                        IsValid(&local_188);
                local_1b8.Key.Key.Data.AllocatorInstance.Data =
                     local_188.Key.Key.Data.AllocatorInstance.Data;
                if (bVar3) {
                  EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
                          Get(&local_188,&(param_1->InterpolationSettings).InterpolationDistance);
                  if ((EVar7 & Operation_Success) != None) {
                    if (local_188.Key.Key.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_188.Key.Key.Data.AllocatorInstance.Data);
                    }
                    if ((*piVar10 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
                      pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_c0);
                      ::FString::ConcatFC(&bRandomizeGuideOperationName,pFVar5,
                                          L".GetbRandomizeGuide");
                      if (local_c0[0] != (void *)0x0) {
                        FMemory::Free(local_c0[0]);
                      }
                      atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::
                             __l2::_dynamic_atexit_destructor_for__bRandomizeGuideOperationName__);
                      _Init_thread_footer(&::_TSS8);
                    }
                    pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                             operator*<UE::Interchange::FAttributeStorage>
                                       ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)
                                        &this->_padding_);
                    bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                                      (pFVar8,&this->Macro_CustombRandomizeGuideKey,
                                       &bRandomizeGuideOperationName,
                                       &(param_1->InterpolationSettings).bRandomizeGuide);
                    if (!bVar3) {
                      return false;
                    }
                    if ((*piVar10 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
                      pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_b0);
                      ::FString::ConcatFC(&bUseUniqueGuideOperationName,pFVar5,
                                          L".GetbUseUniqueGuide");
                      if (local_b0[0] != (void *)0x0) {
                        FMemory::Free(local_b0[0]);
                      }
                      atexit(`UInterchangeGroomFactoryNode::GetCustomGroupInterpolationSettings'::
                             __l2::_dynamic_atexit_destructor_for__bUseUniqueGuideOperationName__);
                      _Init_thread_footer(&::_TSS9);
                    }
                    pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                             operator*<UE::Interchange::FAttributeStorage>
                                       ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)
                                        &this->_padding_);
                    bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                                      (pFVar8,&this->Macro_CustombUseUniqueGuideKey,
                                       &bUseUniqueGuideOperationName,
                                       &(param_1->InterpolationSettings).bUseUniqueGuide);
                    return bVar3;
                  }
                  ::FString::FString(&local_d0,&(this->Macro_CustomInterpolationDistanceKey).Key);
                  pFVar5 = ::FString::FString(&local_38,&InterpolationDistanceOperationName);
                  UE::Interchange::LogAttributeStorageErrors
                            (EVar7,pFVar5,(FAttributeKey *)&local_d0);
                  local_1b8.Key.Key.Data.AllocatorInstance.Data =
                       local_188.Key.Key.Data.AllocatorInstance.Data;
                }
              }
            }
          }
        }
        if (local_1b8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Key.Key.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// GetObjectClass @ 14e558ea0

UClass * __thiscall UInterchangeGroomFactoryNode::GetObjectClass(UInterchangeGroomFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGroomAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomAsset",
               &Z_Registration_Info_UClass_UGroomAsset.InnerSingleton,
               UGroomAsset::StaticRegisterNativesUGroomAsset,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomAsset>,
               InternalVTableHelperCtorCaller<UGroomAsset>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomAsset.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55a490

UClass * __cdecl UInterchangeGroomFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeGroomFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeGroomFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomFactoryNode,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGroomFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeGroomFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d5c0

FString * __thiscall
UInterchangeGroomFactoryNode::GetTypeName
          (UInterchangeGroomFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GroomFactoryNode");
  return __return_storage_ptr__;
}

// SetCustomGroupInterpolationSettings @ 14e56d500

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings
          (UInterchangeGroomFactoryNode *this,FHairGroupsInterpolation *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  FAttributeStorage *pFVar8;
  FString *pFVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  void *local_128 [2];
  FString local_118;
  void *local_108 [2];
  FString local_f8;
  void *local_e8 [2];
  FString local_d8;
  void *local_c8 [2];
  FString local_b8;
  void *local_a8 [2];
  void *local_98 [2];
  void *local_88 [2];
  FString local_78;
  void *local_68 [2];
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  
  uVar3 = _tls_index;
  uVar11 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_128);
    ::FString::ConcatFC(&CurveDecimationOperationName,pFVar6,L".SetCurveDecimation");
    if (local_128[0] != (void *)0x0) {
      FMemory::Free(local_128[0]);
    }
    atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
           _dynamic_atexit_destructor_for__CurveDecimationOperationName__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomCurveDecimationKey,
                     (float *)param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_118,&(this->Macro_CustomCurveDecimationKey).Key);
    FVar2 = CurveDecimationOperationName.Data.AllocatorInstance;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = CurveDecimationOperationName.Data.ArrayNum;
    local_188.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_188.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_188,iVar10,&local_188.Data.ArrayMax);
      memcpy(local_188.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar10 * 2);
    }
    pFVar6 = &local_118;
    pFVar9 = &local_188;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_108);
      ::FString::ConcatFC(&VertexDecimationOperationName,pFVar6,L".SetVertexDecimation");
      if (local_108[0] != (void *)0x0) {
        FMemory::Free(local_108[0]);
      }
      atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
             _dynamic_atexit_destructor_for__VertexDecimationOperationName__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                      ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexDecimationKey,
                       &(param_1->DecimationSettings).VertexDecimation,None);
    if ((EVar7 & Operation_Success) == None) {
      ::FString::FString(&local_f8,&(this->Macro_CustomVertexDecimationKey).Key);
      FVar2 = VertexDecimationOperationName.Data.AllocatorInstance;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = VertexDecimationOperationName.Data.ArrayNum;
      local_178.Data.ArrayNum = iVar10;
      if (iVar10 == 0) {
        local_178.Data.ArrayMax = 0;
        pFVar6 = &local_f8;
        pFVar9 = &local_178;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar10,0,(ForAnyElementType *)&local_178,iVar10,&local_178.Data.ArrayMax);
        memcpy(local_178.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar10 * 2);
        pFVar6 = &local_f8;
        pFVar9 = &local_178;
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_e8);
        ::FString::ConcatFC(&GuideTypeOperationName,pFVar6,L".SetGuideType");
        if (local_e8[0] != (void *)0x0) {
          FMemory::Free(local_e8[0]);
        }
        atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
               _dynamic_atexit_destructor_for__GuideTypeOperationName__);
        _Init_thread_footer(&::_TSS2);
      }
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                        ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGuideTypeKey,
                         &(param_1->InterpolationSettings).GuideType,None);
      if ((EVar7 & Operation_Success) == None) {
        ::FString::FString(&local_d8,&(this->Macro_CustomGuideTypeKey).Key);
        FVar2 = GuideTypeOperationName.Data.AllocatorInstance;
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar10 = GuideTypeOperationName.Data.ArrayNum;
        local_168.Data.ArrayNum = iVar10;
        if (iVar10 == 0) {
          local_168.Data.ArrayMax = 0;
          pFVar6 = &local_d8;
          pFVar9 = &local_168;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,0,(ForAnyElementType *)&local_168,iVar10,&local_168.Data.ArrayMax);
          memcpy(local_168.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar10 * 2);
          pFVar6 = &local_d8;
          pFVar9 = &local_168;
        }
      }
      else {
        piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c);
        if ((*piVar12 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
          pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_c8);
          ::FString::ConcatFC(&HairToGuideDensityOperationName,pFVar6,L".SetHairToGuideDensity");
          if (local_c8[0] != (void *)0x0) {
            FMemory::Free(local_c8[0]);
          }
          atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                 _dynamic_atexit_destructor_for__HairToGuideDensityOperationName__);
          _Init_thread_footer(&::_TSS3);
        }
        pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                 operator*<UE::Interchange::FAttributeStorage>
                           ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_);
        EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                          (pFVar8,&this->Macro_CustomHairToGuideDensityKey,
                           &(param_1->InterpolationSettings).HairToGuideDensity,None);
        if ((EVar7 & Operation_Success) == None) {
          ::FString::FString(&local_b8,&(this->Macro_CustomHairToGuideDensityKey).Key);
          FVar2 = HairToGuideDensityOperationName.Data.AllocatorInstance;
          local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar10 = HairToGuideDensityOperationName.Data.ArrayNum;
          local_158.Data.ArrayNum = iVar10;
          if (iVar10 == 0) {
            local_158.Data.ArrayMax = 0;
            pFVar6 = &local_b8;
            pFVar9 = &local_158;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar10,0,(ForAnyElementType *)&local_158,iVar10,&local_158.Data.ArrayMax)
            ;
            memcpy(local_158.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar10 * 2);
            pFVar6 = &local_b8;
            pFVar9 = &local_158;
          }
        }
        else {
          if ((*piVar12 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
            pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_a8);
            ::FString::ConcatFC(&RiggedGuideNumCurvesOperationName,pFVar6,
                                L".SetRiggedGuideNumCurves");
            if (local_a8[0] != (void *)0x0) {
              FMemory::Free(local_a8[0]);
            }
            atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                   _dynamic_atexit_destructor_for__RiggedGuideNumCurvesOperationName__);
            _Init_thread_footer(&::_TSS4);
          }
          pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                   operator*<UE::Interchange::FAttributeStorage>
                             ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_);
          bVar4 = InterchangePrivateNodeBase::SetCustomAttribute<int>
                            (pFVar8,&this->Macro_CustomRiggedGuideNumCurvesKey,
                             &RiggedGuideNumCurvesOperationName,
                             &(param_1->InterpolationSettings).RiggedGuideNumCurves);
          if (!bVar4) {
            return false;
          }
          if ((*piVar12 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
            pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_98);
            ::FString::ConcatFC(&RiggedGuideNumPointsOperationName,pFVar6,
                                L".SetRiggedGuideNumPoints");
            if (local_98[0] != (void *)0x0) {
              FMemory::Free(local_98[0]);
            }
            atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                   _dynamic_atexit_destructor_for__RiggedGuideNumPointsOperationName__);
            _Init_thread_footer(&::_TSS5);
          }
          pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                   operator*<UE::Interchange::FAttributeStorage>
                             ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_);
          bVar4 = InterchangePrivateNodeBase::SetCustomAttribute<int>
                            (pFVar8,&this->Macro_CustomRiggedGuideNumPointsKey,
                             &RiggedGuideNumPointsOperationName,
                             &(param_1->InterpolationSettings).RiggedGuideNumPoints);
          if (!bVar4) {
            return false;
          }
          if ((*piVar12 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
            pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_88);
            ::FString::ConcatFC(&InterpolationQualityOperationName,pFVar6,
                                L".SetInterpolationQuality");
            if (local_88[0] != (void *)0x0) {
              FMemory::Free(local_88[0]);
            }
            atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                   _dynamic_atexit_destructor_for__InterpolationQualityOperationName__);
            _Init_thread_footer(&::_TSS6);
          }
          pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                   operator*<UE::Interchange::FAttributeStorage>
                             ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_);
          EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                            (pFVar8,&this->Macro_CustomInterpolationQualityKey,
                             &(param_1->InterpolationSettings).InterpolationQuality,None);
          if ((EVar7 & Operation_Success) == None) {
            ::FString::FString(&local_78,&(this->Macro_CustomInterpolationQualityKey).Key);
            FVar2 = InterpolationQualityOperationName.Data.AllocatorInstance;
            local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar10 = InterpolationQualityOperationName.Data.ArrayNum;
            local_148.Data.ArrayNum = iVar10;
            if (iVar10 == 0) {
              local_148.Data.ArrayMax = 0;
              pFVar6 = &local_78;
              pFVar9 = &local_148;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar10,0,(ForAnyElementType *)&local_148,iVar10,
                         &local_148.Data.ArrayMax);
              memcpy(local_148.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar10 * 2);
              pFVar6 = &local_78;
              pFVar9 = &local_148;
            }
          }
          else {
            if ((*piVar12 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
              pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_68);
              ::FString::ConcatFC(&InterpolationDistanceOperationName,pFVar6,
                                  L".SetInterpolationDistance");
              if (local_68[0] != (void *)0x0) {
                FMemory::Free(local_68[0]);
              }
              atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                     _dynamic_atexit_destructor_for__InterpolationDistanceOperationName__);
              _Init_thread_footer(&::_TSS7);
            }
            pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                     operator*<UE::Interchange::FAttributeStorage>
                               ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_
                               );
            EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                              (pFVar8,&this->Macro_CustomInterpolationDistanceKey,
                               &(param_1->InterpolationSettings).InterpolationDistance,None);
            if ((EVar7 & Operation_Success) != None) {
              if ((*piVar12 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
                pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
                ::FString::ConcatFC(&bRandomizeGuideOperationName,pFVar6,L".SetbRandomizeGuide");
                if (local_48[0] != (void *)0x0) {
                  FMemory::Free(local_48[0]);
                }
                atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                       _dynamic_atexit_destructor_for__bRandomizeGuideOperationName__);
                _Init_thread_footer(&::_TSS8);
              }
              pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                       operator*<UE::Interchange::FAttributeStorage>
                                 ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)
                                  &this->_padding_);
              bVar4 = InterchangePrivateNodeBase::SetCustomAttribute<bool>
                                (pFVar8,&this->Macro_CustombRandomizeGuideKey,
                                 &bRandomizeGuideOperationName,
                                 &(param_1->InterpolationSettings).bRandomizeGuide);
              if (!bVar4) {
                return false;
              }
              if ((*piVar12 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
                pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_38);
                ::FString::ConcatFC(&bUseUniqueGuideOperationName,pFVar6,L".SetbUseUniqueGuide");
                if (local_38[0] != (void *)0x0) {
                  FMemory::Free(local_38[0]);
                }
                atexit(`UInterchangeGroomFactoryNode::SetCustomGroupInterpolationSettings'::__l2::
                       _dynamic_atexit_destructor_for__bUseUniqueGuideOperationName__);
                _Init_thread_footer(&::_TSS9);
              }
              pFVar8 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                       operator*<UE::Interchange::FAttributeStorage>
                                 ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)
                                  &this->_padding_);
              bVar4 = InterchangePrivateNodeBase::SetCustomAttribute<bool>
                                (pFVar8,&this->Macro_CustombUseUniqueGuideKey,
                                 &bUseUniqueGuideOperationName,
                                 &(param_1->InterpolationSettings).bUseUniqueGuide);
              return bVar4;
            }
            ::FString::FString(&local_58,&(this->Macro_CustomInterpolationDistanceKey).Key);
            FVar2 = InterpolationDistanceOperationName.Data.AllocatorInstance;
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar10 = InterpolationDistanceOperationName.Data.ArrayNum;
            local_138.Data.ArrayNum = iVar10;
            if (iVar10 == 0) {
              local_138.Data.ArrayMax = 0;
              pFVar6 = &local_58;
              pFVar9 = &local_138;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar10,0,(ForAnyElementType *)&local_138,iVar10,
                         &local_138.Data.ArrayMax);
              memcpy(local_138.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar10 * 2);
              pFVar6 = &local_58;
              pFVar9 = &local_138;
            }
          }
        }
      }
    }
  }
  UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar9,(FAttributeKey *)pFVar6);
  return false;
}

// StaticRegisterNativesUInterchangeGroomFactoryNode @ 14e57f330

void __cdecl UInterchangeGroomFactoryNode::StaticRegisterNativesUInterchangeGroomFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeGroomFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomGroupInterpolationSettings @ 14e58fac0

void __cdecl
UInterchangeGroomFactoryNode::execGetCustomGroupInterpolationSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FHairGroupsInterpolation *pFVar3;
  FHairGroupsInterpolation local_38;
  
  FHairGroupsInterpolation::FHairGroupsInterpolation(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FHairGroupsInterpolation *)param_2->MostRecentPropertyAddress !=
      (FHairGroupsInterpolation *)0x0) {
    pFVar3 = (FHairGroupsInterpolation *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomGroupInterpolationSettings((UInterchangeGroomFactoryNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomGroupInterpolationSettings @ 14e5a8510

void __cdecl
UInterchangeGroomFactoryNode::execSetCustomGroupInterpolationSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FHairGroupsInterpolation *pFVar3;
  FHairGroupsInterpolation local_38;
  
  FHairGroupsInterpolation::FHairGroupsInterpolation(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FHairGroupsInterpolation *)param_2->MostRecentPropertyAddress !=
      (FHairGroupsInterpolation *)0x0) {
    pFVar3 = (FHairGroupsInterpolation *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomGroupInterpolationSettings((UInterchangeGroomFactoryNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

