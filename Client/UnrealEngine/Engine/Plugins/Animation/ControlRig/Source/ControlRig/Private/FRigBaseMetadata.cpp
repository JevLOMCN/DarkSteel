// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// SetValueData @ 14a295b50

bool __thiscall FRigBaseMetadata::SetValueData(FRigBaseMetadata *this,void *param_1,int param_2)

{
  undefined1 uVar1;
  UScriptStruct *this_00;
  FName *pFVar2;
  FProperty *pFVar3;
  FName local_res10;
  
  if (param_1 != (void *)0x0) {
    pFVar3 = this->ValueProperty;
    if (pFVar3 == (FProperty *)0x0) {
      this_00 = GetMetadataStruct(this);
      pFVar2 = ::FName::FName(&local_res10,L"Value");
      pFVar3 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar2);
      this->ValueProperty = pFVar3;
    }
    if (param_2 == pFVar3->ElementSize) {
                    /* WARNING: Could not recover jumptable at 0x00014a295bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(this->_padding_ + 0x10))(this,param_1);
      return (bool)uVar1;
    }
  }
  return false;
}

// StaticStruct @ 14a2bf520

UScriptStruct * __cdecl FRigBaseMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseMetadata,(UObject *)pUVar1,
                         L"RigBaseMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigBaseMetadata.OuterSingleton;
}

// Serialize @ 14a2bf560

void __thiscall FRigBaseMetadata::Serialize(FRigBaseMetadata *this,FArchive *param_1)

{
  ERigMetadataType *pEVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  pEVar1 = (ERigMetadataType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar1 + 1 <= (ERigMetadataType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a2bf5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
  return;
}

// SetValueDataImpl @ 14a2bf720

bool __thiscall FRigBaseMetadata::SetValueDataImpl(FRigBaseMetadata *this,void *param_1)

{
  code *pcVar1;
  char cVar2;
  UScriptStruct *this_00;
  FName *pFVar3;
  FProperty *pFVar4;
  void *pvVar5;
  ERigMetadataType local_res8 [8];
  FName local_res18 [2];
  
  pFVar4 = this->ValueProperty;
  if (pFVar4 == (FProperty *)0x0) {
    local_res8[0] = this->Type;
    this_00 = GetMetadataStruct(local_res8);
    pFVar3 = ::FName::FName(local_res18,L"Value");
    pFVar4 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar3);
    this->ValueProperty = pFVar4;
  }
  pcVar1 = *(code **)(pFVar4->_padding_ + 0xb8);
  pvVar5 = GetValueData(this);
  cVar2 = (*pcVar1)(pFVar4,pvVar5,param_1,0);
  if (cVar2 == '\0') {
    pvVar5 = GetValueData(this);
    if (pvVar5 != param_1) {
      if (((uint)(int)pFVar4->PropertyFlags >> 0x1e & 1) != 0) {
        memcpy(pvVar5,param_1,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
        return true;
      }
      (**(code **)(pFVar4->_padding_ + 0xf0))(pFVar4,pvVar5,param_1,pFVar4->ArrayDim);
    }
    return true;
  }
  return false;
}

// ~FRigBaseMetadata @ 14a2de880

void __thiscall FRigBaseMetadata::~FRigBaseMetadata(FRigBaseMetadata *this)

{
  return;
}

// DestroyMetadata @ 14a300830

void __cdecl FRigBaseMetadata::DestroyMetadata(FRigBaseMetadata **param_1)

{
  FRigBaseMetadata *pFVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  ERigMetadataType local_res8 [32];
  
  if (param_1 == (FRigBaseMetadata **)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyMetadata.cpp"
                       ,0x7f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = *param_1;
  if (pFVar1 == (FRigBaseMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Md",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyMetadata.cpp"
                       ,0x81,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8[0] = pFVar1->Type;
  pUVar4 = GetMetadataStruct(local_res8);
  if (pUVar4 != (UScriptStruct *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,pFVar1,1);
  }
  FMemory::Free(pFVar1);
  return;
}

// GetMetadataStruct @ 14a310520

UScriptStruct * __cdecl FRigBaseMetadata::GetMetadataStruct(ERigMetadataType *param_1)

{
  UPackage *pUVar1;
  UScriptStruct *pUVar2;
  
  switch(*param_1) {
  case Bool:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigBoolMetadata,(UObject *)pUVar1,
                           L"RigBoolMetadata");
      return Z_Registration_Info_UScriptStruct_FRigBoolMetadata.OuterSingleton;
    }
    break;
  case BoolArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigBoolArrayMetadata,(UObject *)pUVar1,
                           L"RigBoolArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigBoolArrayMetadata.OuterSingleton;
    }
    break;
  case Float:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigFloatMetadata,(UObject *)pUVar1,
                           L"RigFloatMetadata");
      return Z_Registration_Info_UScriptStruct_FRigFloatMetadata.OuterSingleton;
    }
    break;
  case FloatArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigFloatArrayMetadata,(UObject *)pUVar1,
                           L"RigFloatArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigFloatArrayMetadata.OuterSingleton;
    }
    break;
  case Int32:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigInt32Metadata,(UObject *)pUVar1,
                           L"RigInt32Metadata");
      return Z_Registration_Info_UScriptStruct_FRigInt32Metadata.OuterSingleton;
    }
    break;
  case Int32Array:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigInt32ArrayMetadata,(UObject *)pUVar1,
                           L"RigInt32ArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigInt32ArrayMetadata.OuterSingleton;
    }
    break;
  case Name:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigNameMetadata,(UObject *)pUVar1,
                           L"RigNameMetadata");
      return Z_Registration_Info_UScriptStruct_FRigNameMetadata.OuterSingleton;
    }
    break;
  case NameArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigNameArrayMetadata,(UObject *)pUVar1,
                           L"RigNameArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigNameArrayMetadata.OuterSingleton;
    }
    break;
  case Vector:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigVectorMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigVectorMetadata.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigVectorMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigVectorMetadata,(UObject *)pUVar1,
                           L"RigVectorMetadata");
      return Z_Registration_Info_UScriptStruct_FRigVectorMetadata.OuterSingleton;
    }
    break;
  case VectorArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigVectorArrayMetadata,(UObject *)pUVar1,
                           L"RigVectorArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigVectorArrayMetadata.OuterSingleton;
    }
    break;
  case Rotator:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigRotatorMetadata,(UObject *)pUVar1,
                           L"RigRotatorMetadata");
      return Z_Registration_Info_UScriptStruct_FRigRotatorMetadata.OuterSingleton;
    }
    break;
  case RotatorArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigRotatorArrayMetadata,(UObject *)pUVar1,
                           L"RigRotatorArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigRotatorArrayMetadata.OuterSingleton;
    }
    break;
  case Quat:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigQuatMetadata,(UObject *)pUVar1,
                           L"RigQuatMetadata");
      return Z_Registration_Info_UScriptStruct_FRigQuatMetadata.OuterSingleton;
    }
    break;
  case QuatArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigQuatArrayMetadata,(UObject *)pUVar1,
                           L"RigQuatArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigQuatArrayMetadata.OuterSingleton;
    }
    break;
  case Transform:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformMetadata,(UObject *)pUVar1,
                           L"RigTransformMetadata");
      return Z_Registration_Info_UScriptStruct_FRigTransformMetadata.OuterSingleton;
    }
    break;
  case TransformArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformArrayMetadata,(UObject *)pUVar1,
                           L"RigTransformArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigTransformArrayMetadata.OuterSingleton;
    }
    break;
  case LinearColor:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigLinearColorMetadata,(UObject *)pUVar1,
                           L"RigLinearColorMetadata");
      return Z_Registration_Info_UScriptStruct_FRigLinearColorMetadata.OuterSingleton;
    }
    break;
  case LinearColorArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata,(UObject *)pUVar1,
                           L"RigLinearColorArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigLinearColorArrayMetadata.OuterSingleton;
    }
    break;
  case RigElementKey:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyMetadata,(UObject *)pUVar1,
                           L"RigElementKeyMetadata");
      return Z_Registration_Info_UScriptStruct_FRigElementKeyMetadata.OuterSingleton;
    }
    break;
  case RigElementKeyArray:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata,(UObject *)pUVar1,
                           L"RigElementKeyArrayMetadata");
      return Z_Registration_Info_UScriptStruct_FRigElementKeyArrayMetadata.OuterSingleton;
    }
    break;
  default:
    pUVar2 = Z_Registration_Info_UScriptStruct_FRigBaseMetadata.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FRigBaseMetadata.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ControlRig();
      pUVar2 = GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseMetadata,(UObject *)pUVar1,
                               L"RigBaseMetadata");
      Z_Registration_Info_UScriptStruct_FRigBaseMetadata.OuterSingleton = pUVar2;
    }
  }
  return pUVar2;
}

// GetMetadataStruct @ 14a310a20

UScriptStruct * __thiscall FRigBaseMetadata::GetMetadataStruct(FRigBaseMetadata *this)

{
  UScriptStruct *pUVar1;
  ERigMetadataType local_res8 [32];
  
  local_res8[0] = this->Type;
  pUVar1 = GetMetadataStruct(local_res8);
  return pUVar1;
}

// GetValueData @ 14a31bf10

void * __thiscall FRigBaseMetadata::GetValueData(FRigBaseMetadata *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *this_00;
  FName *pFVar3;
  FProperty *pFVar4;
  void *pvVar5;
  ERigMetadataType local_res8 [8];
  FName local_res10;
  
  pFVar4 = this->ValueProperty;
  if (pFVar4 == (FProperty *)0x0) {
    local_res8[0] = this->Type;
    this_00 = GetMetadataStruct(local_res8);
    pFVar3 = ::FName::FName(&local_res10,L"Value");
    pFVar4 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar3);
    this->ValueProperty = pFVar4;
  }
  if (pFVar4->ArrayDim < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  return (void *)((longlong)&this->_padding_ + (longlong)pFVar4->Offset_Internal);
}

// GetValueData @ 14a31bfb0

void * __thiscall FRigBaseMetadata::GetValueData(FRigBaseMetadata *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *this_00;
  FName *pFVar3;
  FProperty *pFVar4;
  void *pvVar5;
  ERigMetadataType local_res8 [8];
  FName local_res10;
  
  pFVar4 = this->ValueProperty;
  if (pFVar4 == (FProperty *)0x0) {
    local_res8[0] = this->Type;
    this_00 = GetMetadataStruct(local_res8);
    pFVar3 = ::FName::FName(&local_res10,L"Value");
    pFVar4 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar3);
    this->ValueProperty = pFVar4;
  }
  if (pFVar4->ArrayDim < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  return (void *)((longlong)&this->_padding_ + (longlong)pFVar4->Offset_Internal);
}

// GetValueSize @ 14a31c050

int __thiscall FRigBaseMetadata::GetValueSize(FRigBaseMetadata *this)

{
  UScriptStruct *this_00;
  FName *pFVar1;
  FProperty *pFVar2;
  ERigMetadataType local_res8 [8];
  FName local_res10;
  
  pFVar2 = this->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
    local_res8[0] = this->Type;
    this_00 = GetMetadataStruct(local_res8);
    pFVar1 = ::FName::FName(&local_res10,L"Value");
    pFVar2 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar1);
    this->ValueProperty = pFVar2;
  }
  return pFVar2->ElementSize;
}

// MakeMetadata @ 14a331340

FRigBaseMetadata * __cdecl FRigBaseMetadata::MakeMetadata(FName *param_1,ERigMetadataType param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FRigBaseMetadata *pFVar4;
  UScriptStruct *pUVar5;
  int iVar6;
  ERigMetadataType local_res10 [8];
  
  local_res10[0] = param_2;
  if (param_2 == Invalid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType != ERigMetadataType::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyMetadata.cpp"
                       ,0x70,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRigBaseMetadata *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar5 = GetMetadataStruct(local_res10);
  if (pUVar5 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyMetadata.cpp"
                       ,0x73,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRigBaseMetadata *)(*pcVar2)();
      return pFVar4;
    }
  }
  iVar6 = (int)*(short *)((longlong)&pUVar5->_padding_ + 4);
  pFVar4 = FMemory::Malloc((longlong)((int)pUVar5->_padding_ + -1 + iVar6 & -iVar6),0);
  (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5,pFVar4,1);
  FVar1 = *param_1;
  pFVar4->Type = param_2;
  pFVar4->Name = FVar1;
  return pFVar4;
}

