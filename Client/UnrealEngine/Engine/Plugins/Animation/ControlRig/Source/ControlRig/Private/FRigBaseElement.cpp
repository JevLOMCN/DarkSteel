// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 41

// IsA<FRigReferenceElement> @ 14a21a320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigReferenceElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  pUVar3 = FRigReferenceElement::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// CopyPose @ 14a2498b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigBaseElement::CopyPose
          (FRigBaseElement *this,FRigBaseElement *param_1,bool param_2,bool param_3,bool param_4)

{
  return;
}

// GetDisplayName @ 14a262250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall FRigBaseElement::GetDisplayName(FRigBaseElement *this)

{
  return &(this->Key).Name;
}

// GetElementTypeIndex @ 14a263460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigBaseElement::GetElementTypeIndex(FRigBaseElement *this)

{
  return ElementTypeIndex;
}

// GetNumCurves @ 14a266380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigBaseElement::GetNumCurves(FRigBaseElement *this)

{
  return 0;
}

// GetNumTransforms @ 14a2663a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigBaseElement::GetNumTransforms(FRigBaseElement *this)

{
  return 0;
}

// GetScriptStruct @ 14a26a840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigBaseElement::GetScriptStruct(FRigBaseElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseElement,(UObject *)pUVar1,
                         L"RigBaseElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigBaseElement.OuterSingleton;
}

// LinkStorage @ 14a275a70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigBaseElement::LinkStorage
          (FRigBaseElement *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArrayView<bool,int> *param_2,TArrayView<float,int> *param_3)

{
  return;
}

// UnlinkStorage @ 14a2a1880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigBaseElement::UnlinkStorage
          (FRigBaseElement *this,FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1,
          FRigReusableElementStorage<bool> *param_2,FRigReusableElementStorage<float> *param_3)

{
  return;
}

// StaticStruct @ 14a2c89e0

UScriptStruct * __cdecl FRigBaseElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseElement,(UObject *)pUVar1,
                         L"RigBaseElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigBaseElement.OuterSingleton;
}

// IsA<FRigBoneElement> @ 14a2d3e50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigBoneElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneElement,(UObject *)pUVar3,
                         L"RigBoneElement");
    if (Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton == (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigConnectorElement> @ 14a2d3ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigConnectorElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorElement,(UObject *)pUVar3,
                         L"RigConnectorElement");
    if (Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigControlElement> @ 14a2d3f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigControlElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElement,(UObject *)pUVar3,
                         L"RigControlElement");
    if (Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton == (UScriptStruct *)0x0)
    {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigCurveElement> @ 14a2d3fd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigCurveElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveElement,(UObject *)pUVar3,
                         L"RigCurveElement");
    if (Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton == (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigMultiParentElement> @ 14a2d4050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigMultiParentElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigMultiParentElement,(UObject *)pUVar3,
                         L"RigMultiParentElement");
    if (Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigNullElement> @ 14a2d40d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigNullElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigNullElement,(UObject *)pUVar3,
                         L"RigNullElement");
    if (Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton == (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigSingleParentElement> @ 14a2d4150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigSingleParentElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSingleParentElement,(UObject *)pUVar3,
                         L"RigSingleParentElement");
    if (Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton)->_padding_
  ;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigSingleParentElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigSocketElement> @ 14a2d41d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigSocketElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSocketElement,(UObject *)pUVar3,
                         L"RigSocketElement");
    if (Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton == (UScriptStruct *)0x0)
    {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// IsA<FRigTransformElement> @ 14a2d4250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::IsA<FRigTransformElement>(FRigBaseElement *this)

{
  int iVar1;
  longlong lVar2;
  UPackage *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformElement,(UObject *)pUVar3,
                         L"RigTransformElement");
    if (Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton)->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

// ~FRigBaseElement @ 14a2de820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBaseElement::~FRigBaseElement(FRigBaseElement *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigBaseElement__6B_;
  if (this->Owner != (URigHierarchy *)0x0) {
    URigHierarchy::RemoveAllMetadataForElement(this->Owner,this);
  }
  pFVar1 = (this->CachedNameString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CopyFrom @ 14a2f88b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBaseElement::CopyFrom(FRigBaseElement *this,FRigBaseElement *param_1)

{
  return;
}

// FindComponent @ 14a304f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall FRigBaseElement::FindComponent(FRigBaseElement *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  URigHierarchy *this_00;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FRigBaseComponent *this_01;
  FString *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FName *local_res10;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  iVar2 = (this->ComponentIndices).ArrayNum;
  if ((iVar2 != 0) && (this_00 = this->Owner, this_00 != (URigHierarchy *)0x0)) {
    pFVar8 = (this->ComponentIndices).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    local_res10 = param_1;
    while( true ) {
      if ((this->ComponentIndices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      this_01 = URigHierarchy::GetComponent(this_00,*(int *)pFVar8);
      if (this_01 != (FRigBaseComponent *)0x0) {
        pFVar6 = FRigBaseComponent::GetName(this_01);
        pFVar6 = ::FString::FString(&local_48,pFVar6);
        local_58.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        iVar3 = (pFVar6->Data).ArrayNum;
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar7 = 0;
        }
        local_58._12_4_ = uStack_5c;
        local_58.Size = iVar7;
        bVar5 = ::FName::Equals(*param_1,&local_58);
        pFVar4 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        param_1 = local_res10;
        if (bVar5) {
          return this_01;
        }
      }
      pFVar8 = pFVar8 + 4;
    }
  }
  return (FRigBaseComponent *)0x0;
}

// FindComponent @ 14a305020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall FRigBaseElement::FindComponent(FRigBaseElement *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  URigHierarchy *this_00;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FRigBaseComponent *this_01;
  FString *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FName *local_res10;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  iVar2 = (this->ComponentIndices).ArrayNum;
  if ((iVar2 != 0) && (this_00 = this->Owner, this_00 != (URigHierarchy *)0x0)) {
    pFVar8 = (this->ComponentIndices).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    local_res10 = param_1;
    while( true ) {
      if ((this->ComponentIndices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      this_01 = URigHierarchy::GetComponent(this_00,*(int *)pFVar8);
      if (this_01 != (FRigBaseComponent *)0x0) {
        pFVar6 = FRigBaseComponent::GetName(this_01);
        pFVar6 = ::FString::FString(&local_48,pFVar6);
        local_58.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        iVar3 = (pFVar6->Data).ArrayNum;
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar7 = 0;
        }
        local_58._12_4_ = uStack_5c;
        local_58.Size = iVar7;
        bVar5 = ::FName::Equals(*param_1,&local_58);
        pFVar4 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        param_1 = local_res10;
        if (bVar5) {
          return this_01;
        }
      }
      pFVar8 = pFVar8 + 4;
    }
  }
  return (FRigBaseComponent *)0x0;
}

// GetComponent @ 14a30a6b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall FRigBaseElement::GetComponent(FRigBaseElement *this,int param_1)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigBaseComponent *pFVar4;
  
  if (((-1 < param_1) && (param_1 < (this->ComponentIndices).ArrayNum)) &&
     (this_00 = this->Owner, this_00 != (URigHierarchy *)0x0)) {
    uVar3 = 0;
    if (param_1 < (this->ComponentIndices).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRigBaseComponent *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = URigHierarchy::GetComponent
                       (this_00,*(int *)((this->ComponentIndices).AllocatorInstance.Data +
                                        (longlong)param_1 * 4));
    return pFVar4;
  }
  return (FRigBaseComponent *)0x0;
}

// GetComponent @ 14a30a760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall FRigBaseElement::GetComponent(FRigBaseElement *this,int param_1)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigBaseComponent *pFVar4;
  
  if (((-1 < param_1) && (param_1 < (this->ComponentIndices).ArrayNum)) &&
     (this_00 = this->Owner, this_00 != (URigHierarchy *)0x0)) {
    uVar3 = 0;
    if (param_1 < (this->ComponentIndices).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRigBaseComponent *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = URigHierarchy::GetComponent
                       (this_00,*(int *)((this->ComponentIndices).AllocatorInstance.Data +
                                        (longlong)param_1 * 4));
    return pFVar4;
  }
  return (FRigBaseComponent *)0x0;
}

// GetComponentKeys @ 14a30ae00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> * __thiscall
FRigBaseElement::GetComponentKeys
          (FRigBaseElement *this,
          TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FRigComponentKey *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FRigBaseComponent *pFVar10;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  
  iVar12 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->ComponentIndices).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if (0 < (this->ComponentIndices).ArrayNum) {
    do {
      pFVar10 = GetComponent(this,iVar12);
      if (pFVar10 == (FRigBaseComponent *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4557919968548617999>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0xf1,"Component");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
      }
      else {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar2 = &pFVar10->Key;
        if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x414,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        uVar7 = *(undefined8 *)&(pFVar10->Key).ElementKey.Name.Number;
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar9 * 0x14;
        *(undefined8 *)pFVar4 = *(undefined8 *)&pFVar2->ElementKey;
        *(undefined8 *)(pFVar4 + 8) = uVar7;
        *(uint *)(pFVar5 + (longlong)iVar9 * 0x14 + 0x10) = (pFVar10->Key).Name.Number;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (this->ComponentIndices).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetFirstComponent @ 14a30ede0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall
FRigBaseElement::GetFirstComponent(FRigBaseElement *this,UScriptStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  URigHierarchy *this_00;
  bool bVar4;
  FRigBaseComponent *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ComponentIndices).ArrayNum;
  if ((iVar2 != 0) && (this_00 = this->Owner, this_00 != (URigHierarchy *)0x0)) {
    pFVar7 = (this->ComponentIndices).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ComponentIndices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      pFVar5 = URigHierarchy::GetComponent(this_00,*(int *)pFVar7);
      if ((pFVar5 != (FRigBaseComponent *)0x0) &&
         (lVar6 = (**(code **)(pFVar5->_padding_ + 0x48))(pFVar5), param_1 != (UScriptStruct *)0x0))
      {
        iVar3 = (int)param_1->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
            &param_1->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          return pFVar5;
        }
      }
      pFVar7 = pFVar7 + 4;
    }
  }
  return (FRigBaseComponent *)0x0;
}

// GetFirstComponent @ 14a30eea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall
FRigBaseElement::GetFirstComponent(FRigBaseElement *this,UScriptStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  URigHierarchy *this_00;
  bool bVar4;
  FRigBaseComponent *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ComponentIndices).ArrayNum;
  if ((iVar2 != 0) && (this_00 = this->Owner, this_00 != (URigHierarchy *)0x0)) {
    pFVar7 = (this->ComponentIndices).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ComponentIndices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      pFVar5 = URigHierarchy::GetComponent(this_00,*(int *)pFVar7);
      if ((pFVar5 != (FRigBaseComponent *)0x0) &&
         (lVar6 = (**(code **)(pFVar5->_padding_ + 0x48))(pFVar5), param_1 != (UScriptStruct *)0x0))
      {
        iVar3 = (int)param_1->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
            &param_1->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          return pFVar5;
        }
      }
      pFVar7 = pFVar7 + 4;
    }
  }
  return (FRigBaseComponent *)0x0;
}

// GetMetadata @ 14a310240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __thiscall
FRigBaseElement::GetMetadata(FRigBaseElement *this,FName *param_1,ERigMetadataType param_2)

{
  FRigBaseMetadata *pFVar1;
  
  if (this->Owner == (URigHierarchy *)0x0) {
    return (FRigBaseMetadata *)0x0;
  }
  pFVar1 = URigHierarchy::FindMetadataForElement(this->Owner,this,param_1,param_2);
  return pFVar1;
}

// GetMetadata @ 14a310270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __thiscall
FRigBaseElement::GetMetadata(FRigBaseElement *this,FName *param_1,ERigMetadataType param_2)

{
  FRigBaseMetadata *pFVar1;
  
  if (this->Owner == (URigHierarchy *)0x0) {
    return (FRigBaseMetadata *)0x0;
  }
  pFVar1 = URigHierarchy::FindMetadataForElement(this->Owner,this,param_1,param_2);
  return pFVar1;
}

// GetName @ 14a311590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall FRigBaseElement::GetName(FRigBaseElement *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FName *this_00;
  FString local_18;
  
  pFVar1 = &this->CachedNameString;
  if (((this->CachedNameString).Data.ArrayNum < 2) &&
     (this_00 = &(this->Key).Name, *this_00 != (FName)0x0)) {
    pFVar3 = ::FName::ToString(this_00,&local_18);
    if (pFVar1 != pFVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->CachedNameString).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->CachedNameString).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// InitializeFrom @ 14a324cb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBaseElement::InitializeFrom(FRigBaseElement *this,FRigBaseElement *param_1)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  
  uVar1 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar2.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (this->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(this->Key).field_0x1 = uVar1;
  (this->Key).Name.ComparisonIndex = (FNameEntryId)FVar2.Value;
  (this->Key).Name.Number = (param_1->Key).Name.Number;
  this->Index = param_1->Index;
  this->SubIndex = param_1->SubIndex;
  this->CreatedAtInstructionIndex = param_1->CreatedAtInstructionIndex;
  this->SpawnIndex = param_1->SpawnIndex;
  this->bSelected = false;
  return;
}

// Load @ 14a32a1b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigBaseElement::Load
          (FRigBaseElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long64 lVar5;
  FRigBaseMetadata *pFVar6;
  int iVar7;
  uint local_res8 [2];
  FName local_res18;
  FName local_res20;
  FRigElementKey local_28;
  
  if ((this->Owner == (URigHierarchy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x33,L"Loading should not happen on a rig element without an owner"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2->SerializationPhase == StaticData) {
    iVar7 = 0;
    local_28._0_4_ = local_28._0_4_ & 0xffffff00;
    local_28.Name.ComparisonIndex.Value = 0;
    local_28.Name.Number = 0;
    ::operator<<(param_1,&local_28);
    if ((local_28.Type != (this->Key).Type) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4557919968548618181>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0x3b,"LoadedKey.Type == Key.Type"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->Key).Type = local_28.Type;
    *(int3 *)&(this->Key).field_0x1 = local_28._1_3_;
    (this->Key).Name.ComparisonIndex = (FNameEntryId)local_28.Name.ComparisonIndex.Value;
    (this->Key).Name.Number = local_28.Name.Number;
    this->ChildCacheIndex = -1;
    ::FString::Reset(&this->CachedNameString,0);
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if ((0x13 < iVar4) &&
       (iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID),
       iVar4 < 0x1c)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        MetadataTypeEnum = StaticEnum<enum_ERigMetadataType>();
        _Init_thread_footer(&::_TSS0);
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      if (0 < (int)local_res8[0]) {
        do {
          local_res20.ComparisonIndex.Value = 0;
          local_res20.Number = 0;
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res18);
          lVar5 = UEnum::GetValueByName(MetadataTypeEnum,local_res18,None);
          pFVar6 = URigHierarchy::GetMetadataForElement
                             (this->Owner,this,&local_res20,(ERigMetadataType)lVar5,false);
          (**(code **)(pFVar6->_padding_ + 8))(pFVar6,param_1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)local_res8[0]);
      }
    }
  }
  return;
}

// NotifyMetadataTagChanged @ 14a333320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigBaseElement::NotifyMetadataTagChanged(FRigBaseElement *this,FName *param_1,bool param_2)

{
  undefined1 *puVar1;
  URigHierarchy *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TMulticastDelegate<void___cdecl(FRigElementKey_const_&,FName_const_&,bool),FDefaultDelegateUserPolicy>
  *this_00;
  FDestructionSentinel local_48;
  
  pUVar2 = this->Owner;
  if ((pUVar2 != (URigHierarchy *)0x0) &&
     (pUVar2->MetadataTagVersion = pUVar2->MetadataTagVersion + 1,
     pUVar2->bSuspendMetadataNotifications == false)) {
    this_00 = &pUVar2->MetadataTagChangedDelegate;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      puVar1 = &(pUVar2->MetadataTagChangedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar10 = *(int *)&(pUVar2->MetadataTagChangedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar10 < *(int *)&(pUVar2->MetadataTagChangedDelegate).field_0x10) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(pUVar2->MetadataTagChangedDelegate).field_0x8;
          if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,&this->Key,param_1,param_2),
             cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar2->MetadataTagChangedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
  }
  return;
}

// NumComponents @ 14a333530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigBaseElement::NumComponents(FRigBaseElement *this)

{
  return (this->ComponentIndices).ArrayNum;
}

// RemoveAllMetadata @ 14a338ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::RemoveAllMetadata(FRigBaseElement *this)

{
  bool bVar1;
  
  if (this->Owner == (URigHierarchy *)0x0) {
    return false;
  }
  bVar1 = URigHierarchy::RemoveAllMetadataForElement(this->Owner,this);
  return bVar1;
}

// RemoveMetadata @ 14a33b0e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseElement::RemoveMetadata(FRigBaseElement *this,FName *param_1)

{
  bool bVar1;
  
  if (this->Owner == (URigHierarchy *)0x0) {
    return false;
  }
  bVar1 = URigHierarchy::RemoveMetadataForElement(this->Owner,this,param_1);
  return bVar1;
}

// Save @ 14a344410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigBaseElement::Save
          (FRigBaseElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  if (param_2->SerializationPhase == StaticData) {
    ::operator<<(param_1,&this->Key);
    return;
  }
  return;
}

// Serialize @ 14a349160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigBaseElement::Serialize
          (FRigBaseElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a3491ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a3491bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,param_1,param_2);
  return;
}

// SetMetadata @ 14a34e830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigBaseElement::SetMetadata
          (FRigBaseElement *this,FName *param_1,ERigMetadataType param_2,void *param_3,int param_4)

{
  int iVar1;
  FRigBaseMetadata *this_00;
  
  if (this->Owner != (URigHierarchy *)0x0) {
    this_00 = URigHierarchy::GetMetadataForElement(this->Owner,this,param_1,param_2,true);
    if (this_00 != (FRigBaseMetadata *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar1 = FRigBaseMetadata::GetValueSize(this_00);
        if (param_4 == iVar1) {
          (**(code **)(this_00->_padding_ + 0x10))(this_00,param_3);
        }
      }
      return true;
    }
  }
  return false;
}

// SetupValidMetadata @ 14a3532e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __thiscall
FRigBaseElement::SetupValidMetadata(FRigBaseElement *this,FName *param_1,ERigMetadataType param_2)

{
  FRigBaseMetadata *pFVar1;
  
  if (this->Owner == (URigHierarchy *)0x0) {
    return (FRigBaseMetadata *)0x0;
  }
  pFVar1 = URigHierarchy::GetMetadataForElement(this->Owner,this,param_1,param_2,true);
  return pFVar1;
}

