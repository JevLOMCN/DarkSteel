// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a2ca930

UScriptStruct * __cdecl FRigSingleParentElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSingleParentElement,(UObject *)pUVar1,
                         L"RigSingleParentElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton;
}

// ~FRigSingleParentElement @ 14a2dedb0

void __thiscall FRigSingleParentElement::~FRigSingleParentElement(FRigSingleParentElement *this)

{
  this->_padding_ = (longlong)&___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  return;
}

// CopyFrom @ 14a2f9180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSingleParentElement::CopyFrom(FRigSingleParentElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigTransformElement *this_00;
  
  FRigTransformElement::CopyFrom((FRigTransformElement *)this,param_1);
  if (param_1 == (FRigBaseElement *)0x0) {
LAB_14a2f91a6:
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
  }
  else {
    bVar2 = FRigBaseElement::IsA<FRigSingleParentElement>(param_1);
    if (!bVar2) goto LAB_14a2f91a6;
  }
  if (param_1[3]._padding_ == 0) {
    this->ParentElement = (FRigTransformElement *)0x0;
    return;
  }
  this_00 = (FRigTransformElement *)
            URigHierarchy::Get((URigHierarchy *)this->_padding_,
                               *(int *)(param_1[3]._padding_ + 0x1c));
  if (this_00 != (FRigTransformElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigTransformElement>((FRigBaseElement *)this_00);
    if (bVar2) goto LAB_14a2f922b;
  }
  this_00 = (FRigTransformElement *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Element",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                     ,0x3f9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a2f922b:
  this->ParentElement = this_00;
  if ((((FRigElementKey *)&this_00->_padding_)->Name != *(FName *)(param_1[3]._padding_ + 0x14)) ||
     (((FRigElementKey *)&this_00->_padding_)->Type !=
      *(ERigElementType *)(param_1[3]._padding_ + 0x10))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentElement->GetKey() == Source->ParentElement->GetKey()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x48b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetElementTypeIndex @ 14a30ed80

int __thiscall FRigSingleParentElement::GetElementTypeIndex(FRigSingleParentElement *this)

{
  return 2;
}

// GetScriptStruct @ 14a317f40

UScriptStruct * __thiscall FRigSingleParentElement::GetScriptStruct(FRigSingleParentElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSingleParentElement,(UObject *)pUVar1,
                         L"RigSingleParentElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton;
}

// Load @ 14a32cf50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSingleParentElement::Load
          (FRigSingleParentElement *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigTransformElement *this_01;
  FRigElementKey local_18;
  
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigCurrentAndInitialTransform::Load
              ((FRigCurrentAndInitialTransform *)&this->_padding_,param_1,param_2,
               (FRigCurrentAndInitialDirtyState *)&this->_padding_);
  }
  if (param_2->SerializationPhase != InterElementData) {
    return;
  }
  local_18.Type = None;
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  ::operator<<(param_1,&local_18);
  bVar2 = ::FName::IsWithinBounds(local_18.Name.ComparisonIndex);
  if (!bVar2) {
    return;
  }
  if (local_18.Name != (FName)0x0) {
    if (local_18.Type == None) {
      return;
    }
    this_00 = (URigHierarchy *)this->_padding_;
    iVar3 = URigHierarchy::GetIndex(this_00,&local_18,true);
    this_01 = (FRigTransformElement *)URigHierarchy::Get(this_00,iVar3);
    if ((this_01 == (FRigTransformElement *)0x0) ||
       (bVar2 = FRigBaseElement::IsA<FRigTransformElement>((FRigBaseElement *)this_01), !bVar2)) {
      this_01 = (FRigTransformElement *)0x0;
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
    this->ParentElement = this_01;
    return;
  }
  return;
}

// Save @ 14a345ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSingleParentElement::Save
          (FRigSingleParentElement *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2)

{
  FRigTransformElement *pFVar1;
  FRigElementKey local_18;
  
  FRigTransformElement::Save((FRigTransformElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == InterElementData) {
    local_18._0_4_ = local_18._0_4_ & 0xffffff00;
    local_18.Name.ComparisonIndex.Value = 0;
    local_18.Name.Number = 0;
    pFVar1 = this->ParentElement;
    if (pFVar1 != (FRigTransformElement *)0x0) {
      local_18._0_4_ = SUB84(pFVar1->_padding_,0);
      local_18.Name.ComparisonIndex.Value = (uint)((ulonglong)pFVar1->_padding_ >> 0x20);
      local_18.Name.Number = (uint)pFVar1->_padding_;
    }
    ::operator<<(param_1,&local_18);
  }
  return;
}

