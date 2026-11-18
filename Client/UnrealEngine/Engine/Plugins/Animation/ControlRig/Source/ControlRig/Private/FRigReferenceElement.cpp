// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a2c28c0

UScriptStruct * __cdecl FRigReferenceElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigReferenceElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigReferenceElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigReferenceElement,(UObject *)pUVar1,
                         L"RigReferenceElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigReferenceElement.OuterSingleton;
}

// ~FRigReferenceElement @ 14a2ded70

void __thiscall FRigReferenceElement::~FRigReferenceElement(FRigReferenceElement *this)

{
  this->_padding_ = (longlong)&___7FRigReferenceElement__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetWorldTransformDelegate);
  this->_padding_ = (longlong)&___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  return;
}

// CopyFrom @ 14a2f9100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigReferenceElement::CopyFrom(FRigReferenceElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FRigSingleParentElement::CopyFrom((FRigSingleParentElement *)this,param_1);
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigReferenceElement>(param_1);
    if (bVar2) goto LAB_14a2f914e;
  }
  param_1 = (FRigBaseElement *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Element",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                     ,0x3f1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a2f914e:
  TDelegate<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
  ::operator=(&this->GetWorldTransformDelegate,
              (TDelegate<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
               *)&param_1[3].Owner);
  return;
}

// CopyPose @ 14a2fd380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigReferenceElement::CopyPose
          (FRigReferenceElement *this,FRigBaseElement *param_1,bool param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  FRigTransformElement::CopyPose((FRigTransformElement *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar1 = FRigBaseElement::IsA<FRigReferenceElement>(param_1);
    if (bVar1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].Owner,
                 &local_28);
      if ((param_1[3].Key.Name.Number != 0) && (*(longlong **)&param_1[3].Key != (longlong *)0x0)) {
        cVar2 = (**(code **)(**(longlong **)&param_1[3].Key + 0x38))();
        if (cVar2 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          TDelegate<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
          ::operator=(&this->GetWorldTransformDelegate,
                      (TDelegate<UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
                       *)&param_1[3].Owner);
          return;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// GetElementTypeIndex @ 14a30ed70

int __thiscall FRigReferenceElement::GetElementTypeIndex(FRigReferenceElement *this)

{
  return 8;
}

// GetReferenceWorldTransform @ 14a314dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
FRigReferenceElement::GetReferenceWorldTransform
          (FRigReferenceElement *this,TTransform<double> *__return_storage_ptr__,
          FRigVMExecuteContext *param_1,bool param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetWorldTransformDelegate,&local_28);
  if (((*(int *)&(this->GetWorldTransformDelegate).field_0x10 != 0) &&
      (plVar2 = *(longlong **)&(this->GetWorldTransformDelegate).field_0x8,
      plVar2 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GetWorldTransformDelegate,&local_28);
    if (*(int *)&(this->GetWorldTransformDelegate).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->GetWorldTransformDelegate).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,param_1,&this->_padding_,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetScriptStruct @ 14a317f00

UScriptStruct * __thiscall FRigReferenceElement::GetScriptStruct(FRigReferenceElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigReferenceElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigReferenceElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigReferenceElement,(UObject *)pUVar1,
                         L"RigReferenceElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigReferenceElement.OuterSingleton;
}

// Load @ 14a32cf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigReferenceElement::Load
          (FRigReferenceElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigBaseElement *this_01;
  FRigElementKey FStack_18;
  
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigCurrentAndInitialTransform::Load
              ((FRigCurrentAndInitialTransform *)&this->_padding_,param_1,param_2,
               (FRigCurrentAndInitialDirtyState *)&this->_padding_);
  }
  if (param_2->SerializationPhase != InterElementData) {
    return;
  }
  FStack_18.Type = None;
  FStack_18.Name.ComparisonIndex.Value = 0;
  FStack_18.Name.Number = 0;
  ::operator<<(param_1,&FStack_18);
  bVar2 = ::FName::IsWithinBounds(FStack_18.Name.ComparisonIndex);
  if (!bVar2) {
    return;
  }
  if (FStack_18.Name != (FName)0x0) {
    if (FStack_18.Type == None) {
      return;
    }
    this_00 = (URigHierarchy *)this->_padding_;
    iVar3 = URigHierarchy::GetIndex(this_00,&FStack_18,true);
    this_01 = URigHierarchy::Get(this_00,iVar3);
    if ((this_01 == (FRigBaseElement *)0x0) ||
       (bVar2 = FRigBaseElement::IsA<FRigTransformElement>(this_01), !bVar2)) {
      this_01 = (FRigBaseElement *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Element",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                         ,0x3f9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->_padding_ = (longlong)this_01;
    return;
  }
  return;
}

// Save @ 14a345e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigReferenceElement::Save
          (FRigReferenceElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  longlong lVar1;
  FRigElementKey FStack_18;
  
  FRigTransformElement::Save((FRigTransformElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == InterElementData) {
    FStack_18._0_4_ = FStack_18._0_4_ & 0xffffff00;
    FStack_18.Name.ComparisonIndex.Value = 0;
    FStack_18.Name.Number = 0;
    lVar1 = this->_padding_;
    if (lVar1 != 0) {
      FStack_18._0_4_ = SUB84(*(undefined8 *)(lVar1 + 0x10),0);
      FStack_18.Name.ComparisonIndex.Value =
           (uint)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
      FStack_18.Name.Number = *(uint *)(lVar1 + 0x18);
    }
    ::operator<<(param_1,&FStack_18);
  }
  return;
}

