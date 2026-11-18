// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a2be2d0

UScriptStruct * __cdecl FRigBoneElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneElement,(UObject *)pUVar1,
                         L"RigBoneElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton;
}

// ~FRigBoneElement @ 14a2de8d0

void __thiscall FRigBoneElement::~FRigBoneElement(FRigBoneElement *this)

{
  this->_padding_ = (longlong)&___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  return;
}

// CopyFrom @ 14a2f88c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBoneElement::CopyFrom(FRigBoneElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FRigSingleParentElement::CopyFrom((FRigSingleParentElement *)this,param_1);
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigBoneElement>(param_1);
    if (bVar2) goto LAB_14a2f890e;
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
LAB_14a2f890e:
  this->BoneType = *(ERigBoneType *)&param_1[3].Owner;
  return;
}

// GetElementTypeIndex @ 14a30ed30

int __thiscall FRigBoneElement::GetElementTypeIndex(FRigBoneElement *this)

{
  return 4;
}

// GetScriptStruct @ 14a317d60

UScriptStruct * __thiscall FRigBoneElement::GetScriptStruct(FRigBoneElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneElement,(UObject *)pUVar1,
                         L"RigBoneElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigBoneElement.OuterSingleton;
}

// Load @ 14a32a3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigBoneElement::Load
          (FRigBoneElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  long64 lVar1;
  UPackage *pUVar2;
  FName local_res18 [2];
  
  FRigSingleParentElement::Load((FRigSingleParentElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton == (UEnum *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_ControlRig();
          Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigBoneType,(UObject *)pUVar2,
                             L"ERigBoneType");
        }
        BoneTypeEnum = Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton;
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_res18[0].ComparisonIndex.Value = 0;
    local_res18[0].Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res18);
    lVar1 = UEnum::GetValueByName(BoneTypeEnum,local_res18[0],None);
    this->BoneType = (ERigBoneType)lVar1;
  }
  return;
}

// Save @ 14a344430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigBoneElement::Save
          (FRigBoneElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  UPackage *pUVar1;
  undefined1 local_res18 [16];
  
  FRigSingleParentElement::Save((FRigSingleParentElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton == (UEnum *)0x0) {
          pUVar1 = Z_Construct_UPackage__Script_ControlRig();
          Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigBoneType,(UObject *)pUVar1,
                             L"ERigBoneType");
        }
        BoneTypeEnum = Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton;
        _Init_thread_footer(&::_TSS0);
      }
    }
    UEnum::GetNameByValue(BoneTypeEnum,(long64)local_res18);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res18);
  }
  return;
}

