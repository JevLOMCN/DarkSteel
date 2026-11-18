// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 21

// StaticClass @ 14e475650

UClass * __cdecl UInterchangeSceneComponentNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneComponentNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSceneComponentNode",
               &Z_Registration_Info_UClass_UInterchangeSceneComponentNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneComponentNode,0x120,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneComponentNode>,
               InternalVTableHelperCtorCaller<UInterchangeSceneComponentNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneComponentNode.InnerSingleton;
}

// UInterchangeSceneComponentNode @ 14e487760

UInterchangeSceneComponentNode * __thiscall
UInterchangeSceneComponentNode::UInterchangeSceneComponentNode
          (UInterchangeSceneComponentNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentNode__6B_;
  (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLocalTransformKey).Key,L"LocalTransform");
  (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomComponentVisibilityKey).Key,L"ComponentVisibility");
  (this->ComponentUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ComponentUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayMax = 0;
  (this->CacheSceneNodeTransform).bIsSet = false;
  (this->CacheParentSceneNode).bIsSet = false;
  return this;
}

// UInterchangeSceneComponentNode @ 14e4877f0

UInterchangeSceneComponentNode * __thiscall
UInterchangeSceneComponentNode::UInterchangeSceneComponentNode(UInterchangeSceneComponentNode *this)

{
  FString local_18;
  
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentNode__6B_;
  (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLocalTransformKey).Key,L"LocalTransform");
  (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomComponentVisibilityKey).Key,L"ComponentVisibility");
  (this->ComponentUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ComponentUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayMax = 0;
  (this->CacheSceneNodeTransform).bIsSet = false;
  (this->CacheParentSceneNode).bIsSet = false;
  ::FString::FString(&local_18,L"__ComponentUids__Key");
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->ComponentUids,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeSceneComponentNode @ 14e48b130

void __thiscall
UInterchangeSceneComponentNode::~UInterchangeSceneComponentNode
          (UInterchangeSceneComponentNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->ComponentUids);
  pFVar1 = (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// AddComponentUid @ 14e48d7a0

bool __thiscall
UInterchangeSceneComponentNode::AddComponentUid
          (UInterchangeSceneComponentNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->ComponentUids,param_1);
  return bVar1;
}

// GetComponentUids @ 14e490280

void __thiscall
UInterchangeSceneComponentNode::GetComponentUids
          (UInterchangeSceneComponentNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          )

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->ComponentUids,param_1);
  return;
}

// GetCustomComponentVisibility @ 14e491270

bool __thiscall
UInterchangeSceneComponentNode::GetCustomComponentVisibility
          (UInterchangeSceneComponentNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetComponentVisibility");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomComponentVisibilityKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomLocalTransform @ 14e493450

bool __thiscall
UInterchangeSceneComponentNode::GetCustomLocalTransform
          (UInterchangeSceneComponentNode *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetLocalTransform");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TTransform<double>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLocalTransformKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetParentSceneNodeAndTransform @ 14e496e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

UInterchangeSceneNode * __thiscall
UInterchangeSceneComponentNode::GetParentSceneNodeAndTransform
          (UInterchangeSceneComponentNode *this,UInterchangeBaseNodeContainer *param_1,
          TTransform<double> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UInterchangeSceneNode *pUVar5;
  UClass *pUVar6;
  UInterchangeSceneNode *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  undefined8 local_178;
  undefined8 local_170;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_3) {
    if ((this->CacheSceneNodeTransform).bIsSet != false) {
      (this->CacheSceneNodeTransform).bIsSet = false;
    }
    if ((this->CacheParentSceneNode).bIsSet != false) {
      (this->CacheParentSceneNode).bIsSet = false;
    }
  }
  if ((this->CacheSceneNodeTransform).bIsSet != false) goto LAB_14e497260;
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar4 = GetCustomLocalTransform(this,&local_168);
  if (!bVar4) {
    if (&this->CacheSceneNodeTransform !=
        (TOptional<UE::Math::TTransform<double>_> *)&UE::Math::TTransform<double>::Identity) {
      *&(this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      (this->CacheSceneNodeTransform).bIsSet = true;
    }
    goto LAB_14e497260;
  }
  UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this,&local_188);
  if (local_188.Data.ArrayNum < 2) {
    if ((TOptional<UE::Math::TTransform<double>_> *)&local_168 != &this->CacheSceneNodeTransform) {
      (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           local_168.Rotation.XY.m128d_f64[0];
      (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[1] =
           local_168.Rotation.XY.m128d_f64[1];
      (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           local_168.Rotation.ZW.m128d_f64[0];
      (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[1] =
           local_168.Rotation.ZW.m128d_f64[1];
      (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[0] =
           local_168.Translation.XY.m128d_f64[0];
      (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[1] =
           local_168.Translation.XY.m128d_f64[1];
      (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           local_168.Translation.ZW.m128d_f64[0];
      (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[1] =
           local_168.Translation.ZW.m128d_f64[1];
      (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           local_168.Scale3D.XY.m128d_f64[0];
      (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[1] =
           local_168.Scale3D.XY.m128d_f64[1];
      (this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           local_168.Scale3D.ZW.m128d_f64[0];
      (this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64[1] =
           local_168.Scale3D.ZW.m128d_f64[1];
      (this->CacheSceneNodeTransform).bIsSet = true;
    }
    if (local_188.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (UInterchangeSceneNode *)0x0;
    }
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
    return (UInterchangeSceneNode *)0x0;
  }
  pUVar5 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(param_1,&local_188);
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar16 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar17 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar18 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar19 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar12;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar14;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar17,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar16;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar19,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar18;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar21,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar20;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar22;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
  if (pUVar5 == (UInterchangeSceneNode *)0x0) {
LAB_14e497045:
    if (pUVar5 != (UInterchangeSceneNode *)0x0) goto LAB_14e49704e;
  }
  else {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      fVar12 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar13 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar14 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar15 = GlobalVectorConstants::Float0001.m128_f32[3];
      fVar16 = GlobalVectorConstants::FloatZero.m128_f32[0];
      fVar17 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar18 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar19 = GlobalVectorConstants::FloatZero.m128_f32[3];
      fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
      goto LAB_14e497045;
    }
    pUVar7 = GetParentSceneNodeAndTransform
                       ((UInterchangeSceneComponentNode *)pUVar5,param_1,&local_a8,param_3);
    if ((TOptional<UInterchangeSceneNode_const_*> *)&local_178 != &this->CacheParentSceneNode) {
      (this->CacheParentSceneNode).TypedValue = pUVar7;
      (this->CacheParentSceneNode).bIsSet = true;
    }
LAB_14e49704e:
    pUVar6 = UInterchangeSceneNode::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      if ((TOptional<UInterchangeSceneNode_const_*> *)&local_170 != &this->CacheParentSceneNode) {
        (this->CacheParentSceneNode).TypedValue = pUVar5;
        (this->CacheParentSceneNode).bIsSet = true;
      }
      if ((TOptional<UE::Math::TTransform<double>_> *)&local_168 != &this->CacheSceneNodeTransform)
      {
        (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[0] =
             local_168.Rotation.XY.m128d_f64[0];
        (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[1] =
             local_168.Rotation.XY.m128d_f64[1];
        (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
             local_168.Rotation.ZW.m128d_f64[0];
        (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[1] =
             local_168.Rotation.ZW.m128d_f64[1];
        (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[0] =
             local_168.Translation.XY.m128d_f64[0];
        (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[1] =
             local_168.Translation.XY.m128d_f64[1];
        (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[0] =
             local_168.Translation.ZW.m128d_f64[0];
        (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[1] =
             local_168.Translation.ZW.m128d_f64[1];
        (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
             local_168.Scale3D.XY.m128d_f64[0];
        (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[1] =
             local_168.Scale3D.XY.m128d_f64[1];
        (this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
             local_168.Scale3D.ZW.m128d_f64[0];
        (this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64[1] =
             local_168.Scale3D.ZW.m128d_f64[1];
        (this->CacheSceneNodeTransform).bIsSet = true;
      }
    }
    fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
    fVar16 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar17 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar18 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar19 = GlobalVectorConstants::FloatZero.m128_f32[3];
    fVar12 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar13 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar14 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar15 = GlobalVectorConstants::Float0001.m128_f32[3];
  }
  local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_108.Rotation.XY.m128d_f64[0] = (double)fVar12;
  local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_108.Rotation.ZW.m128d_f64[0] = (double)fVar14;
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar17,0);
  local_108.Translation.XY.m128d_f64[0] = (double)fVar16;
  local_108.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar19,0);
  local_108.Translation.ZW.m128d_f64[0] = (double)fVar18;
  local_108.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar21,0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)fVar20;
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)fVar22;
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_108,&local_168,&local_a8);
  if ((TOptional<UE::Math::TTransform<double>_> *)&local_108 != &this->CacheSceneNodeTransform) {
    (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         local_108.Rotation.XY.m128d_f64[0];
    (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[1] =
         local_108.Rotation.XY.m128d_f64[1];
    (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         local_108.Rotation.ZW.m128d_f64[0];
    (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[1] =
         local_108.Rotation.ZW.m128d_f64[1];
    (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[0] =
         local_108.Translation.XY.m128d_f64[0];
    (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[1] =
         local_108.Translation.XY.m128d_f64[1];
    (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         local_108.Translation.ZW.m128d_f64[0];
    (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[1] =
         local_108.Translation.ZW.m128d_f64[1];
    (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         local_108.Scale3D.XY.m128d_f64[0];
    (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[1] =
         local_108.Scale3D.XY.m128d_f64[1];
    (this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         local_108.Scale3D.ZW.m128d_f64[0];
    (this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64[1] =
         local_108.Scale3D.ZW.m128d_f64[1];
    (this->CacheSceneNodeTransform).bIsSet = true;
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
LAB_14e497260:
  if ((this->CacheSceneNodeTransform).bIsSet == false) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4220703385852051360>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Nodes\\Private\\InterchangeSceneComponentNodes.cpp"
                       ,0x60,"CacheSceneNodeTransform.IsSet()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UInterchangeSceneNode *)(*pcVar2)();
      return pUVar5;
    }
    *&(param_2->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_2->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    uVar8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar10 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    dVar3 = (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] =
         (this->CacheSceneNodeTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar3;
    dVar3 = (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] =
         (this->CacheSceneNodeTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = dVar3;
    dVar3 = (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] =
         (this->CacheSceneNodeTransform).TypedValue.Translation.XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = dVar3;
    dVar3 = (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] =
         (this->CacheSceneNodeTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = dVar3;
    dVar3 = (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] =
         (this->CacheSceneNodeTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = dVar3;
    uVar8 = *(undefined4 *)(this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64;
    uVar9 = *(undefined4 *)
             ((longlong)(this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64 + 4);
    uVar10 = *(undefined4 *)((this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64 + 1);
    uVar11 = *(undefined4 *)
              ((longlong)(this->CacheSceneNodeTransform).TypedValue.Scale3D.ZW.m128d_f64 + 0xc);
  }
  *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64 = uVar8;
  *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4) = uVar9;
  *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1) = uVar10;
  *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc) = uVar11;
  if ((this->CacheParentSceneNode).bIsSet == false) {
    return (UInterchangeSceneNode *)0x0;
  }
  return (this->CacheParentSceneNode).TypedValue;
}

// GetPrivateStaticClass @ 14e498cb0

UClass * __cdecl UInterchangeSceneComponentNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneComponentNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSceneComponentNode",
               &Z_Registration_Info_UClass_UInterchangeSceneComponentNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneComponentNode,0x120,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneComponentNode>,
               InternalVTableHelperCtorCaller<UInterchangeSceneComponentNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneComponentNode.InnerSingleton;
}

// GetTypeName @ 14e49ab20

FString * __thiscall
UInterchangeSceneComponentNode::GetTypeName
          (UInterchangeSceneComponentNode *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::TypeName,L"SceneComponentNode");
      atexit(`UInterchangeSceneComponentNode::GetTypeName'::__l2::
             _dynamic_atexit_destructor_for__TypeName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = ::TypeName.Data.AllocatorInstance;
  iVar2 = ::TypeName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// SetCustomComponentVisibility @ 14e4a0a60

bool __thiscall
UInterchangeSceneComponentNode::SetCustomComponentVisibility
          (UInterchangeSceneComponentNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetComponentVisibility");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomComponentVisibilityKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomComponentVisibilityKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomLocalTransform @ 14e4a3f30

bool __thiscall
UInterchangeSceneComponentNode::SetCustomLocalTransform
          (UInterchangeSceneComponentNode *this,TTransform<double> *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetLocalTransform");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLocalTransformKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomLocalTransformKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeSceneComponentNode @ 14e4a8840

void __cdecl
UInterchangeSceneComponentNode::StaticRegisterNativesUInterchangeSceneComponentNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSceneComponentNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddComponentUid @ 14e4abbe0

void __cdecl
UInterchangeSceneComponentNode::execAddComponentUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[3].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetComponentUids @ 14e4ada20

void __cdecl
UInterchangeSceneComponentNode::execGetComponentUids(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[3].field_0x8,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomComponentVisibility @ 14e4af7d0

void __cdecl
UInterchangeSceneComponentNode::execGetCustomComponentVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetComponentVisibility");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomLocalTransform @ 14e4b3e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSceneComponentNode::execGetCustomLocalTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  TTransform<double> *pTVar15;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Rotation.XY.m128d_f64[1] = (double)fVar5;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar15 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar14 = GetCustomLocalTransform((UInterchangeSceneComponentNode *)param_1,pTVar15);
  *(bool *)param_3 = bVar14;
  return;
}

// execGetParentSceneNodeAndTransform @ 14e4b8e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSceneComponentNode::execGetParentSceneNodeAndTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UInterchangeSceneNode *pUVar12;
  TTransform<double> *pTVar13;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  UInterchangeBaseNodeContainer *local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a0 = (UInterchangeBaseNodeContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8[0] = 0;
  pTVar13 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar13 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar12 = GetParentSceneNodeAndTransform
                      ((UInterchangeSceneComponentNode *)param_1,local_a0,pTVar13,local_a8[0] != 0);
  *(UInterchangeSceneNode **)param_3 = pUVar12;
  return;
}

// execSetCustomComponentVisibility @ 14e4be240

void __cdecl
UInterchangeSceneComponentNode::execSetCustomComponentVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetComponentVisibility");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x20);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomLocalTransform @ 14e4c37a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSceneComponentNode::execSetCustomLocalTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ForAnyElementType _Src;
  bool bVar15;
  FString *pFVar16;
  EAttributeStorageResult EVar17;
  undefined1 uVar18;
  TTransform<double> *pTVar19;
  undefined1 auStackY_118 [32];
  FString local_d8;
  FString local_c8;
  void *local_b8 [2];
  FString local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_98.Rotation.XY.m128d_f64[1] = (double)fVar6;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar10;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar13;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar4;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar14;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar19 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar19 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar16 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_b8);
  ::FString::ConcatFC(&local_c8,pFVar16,L".SetLocalTransform");
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar17 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                     (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                      pTVar19,None);
  if ((EVar17 & Operation_Success) == None) {
    ::FString::FString(&local_a8,(FString *)&param_1[2].field_0x10);
    _Src.Data = local_c8.Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_c8.Data.ArrayNum == 0) {
      local_d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_c8.Data.ArrayNum,
                 &local_d8.Data.ArrayMax);
      memcpy(local_d8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_c8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar17,&local_d8,(FAttributeKey *)&local_a8);
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar18;
  return;
}

