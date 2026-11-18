// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 13

// StaticStruct @ 14a2c25b0

UScriptStruct * __cdecl FRigCurveElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveElement,(UObject *)pUVar1,
                         L"RigCurveElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton;
}

// ~FRigCurveElement @ 14a2dea70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigCurveElement::~FRigCurveElement(FRigCurveElement *this)

{
  this->_padding_ = (longlong)&___7FRigBaseElement__6B_;
  if ((URigHierarchy *)this->_padding_ != (URigHierarchy *)0x0) {
    URigHierarchy::RemoveAllMetadataForElement
              ((URigHierarchy *)this->_padding_,(FRigBaseElement *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CopyFrom @ 14a2f8b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigCurveElement::CopyFrom(FRigCurveElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigCurveElement>(param_1);
    if (bVar2) {
      pfVar3 = (float *)param_1[1].Owner;
      if ((URigHierarchy *)pfVar3 == (URigHierarchy *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4557919968548616148>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0x82c,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pfVar3 = &DefaultCurve;
      }
      if (this->Storage != (float *)0x0) {
        *this->Storage = *(float *)&((URigHierarchy *)pfVar3)->_padding_;
        this->bIsValueSet = true;
      }
      this->bIsValueSet = SUB81(param_1[1]._padding_,0);
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Element",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                     ,0x3f1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CopyPose @ 14a2fcd50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigCurveElement::CopyPose
          (FRigCurveElement *this,FRigBaseElement *param_1,bool param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if ((param_1 != (FRigBaseElement *)0x0) &&
     (bVar2 = FRigBaseElement::IsA<FRigCurveElement>(param_1), bVar2)) {
    pfVar3 = (float *)param_1[1].Owner;
    if ((URigHierarchy *)pfVar3 == (URigHierarchy *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548616148>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x82c,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pfVar3 = &DefaultCurve;
    }
    if (this->Storage != (float *)0x0) {
      *this->Storage = *(float *)&((URigHierarchy *)pfVar3)->_padding_;
      this->bIsValueSet = true;
    }
    this->bIsValueSet = SUB81(param_1[1]._padding_,0);
  }
  return;
}

// Get @ 14a307bc0

float * __thiscall FRigCurveElement::Get(FRigCurveElement *this)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  pfVar3 = this->Storage;
  if (pfVar3 == (float *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548616148>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x82c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
    pfVar3 = &DefaultCurve;
  }
  return pfVar3;
}

// GetElementTypeIndex @ 14a30ed50

int __thiscall FRigCurveElement::GetElementTypeIndex(FRigCurveElement *this)

{
  return 7;
}

// GetNumCurves @ 14a311ed0

int __thiscall FRigCurveElement::GetNumCurves(FRigCurveElement *this)

{
  return 1;
}

// GetScriptStruct @ 14a317e80

UScriptStruct * __thiscall FRigCurveElement::GetScriptStruct(FRigCurveElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveElement,(UObject *)pUVar1,
                         L"RigCurveElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigCurveElement.OuterSingleton;
}

// LinkStorage @ 14a32a040

void __thiscall
FRigCurveElement::LinkStorage
          (FRigCurveElement *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArrayView<bool,int> *param_2,TArrayView<float,int> *param_3)

{
  int iVar1;
  
  iVar1 = this->StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_3->ArrayNum)) {
    this->Storage = param_3->DataPtr + iVar1;
  }
  return;
}

// Load @ 14a32bf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigCurveElement::Load
          (FRigCurveElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  bool bVar1;
  longlong *plVar2;
  int iVar3;
  float local_res18 [4];
  
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if (iVar3 < 0x10) {
      this->bIsValueSet = true;
    }
    else {
      ::operator<<(param_1,&this->bIsValueSet);
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = 0.0;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
      }
    }
    else {
      local_res18[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    bVar1 = this->bIsValueSet;
    if (this->Storage != (float *)0x0) {
      *this->Storage = local_res18[0];
      this->bIsValueSet = bVar1;
    }
  }
  return;
}

// Save @ 14a345310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigCurveElement::Save
          (FRigCurveElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float local_res18 [4];
  
  if (param_2->SerializationPhase == StaticData) {
    ::operator<<(param_1,(FRigElementKey *)&this->_padding_);
  }
  if (param_2->SerializationPhase == StaticData) {
    pfVar4 = this->Storage;
    if (pfVar4 == (float *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548616148>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x82c,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar4 = &DefaultCurve;
    }
    local_res18[0] = *pfVar4;
    ::operator<<(param_1,&this->bIsValueSet);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
  }
  return;
}

// Set @ 14a349be0

void __thiscall FRigCurveElement::Set(FRigCurveElement *this,float *param_1,bool param_2)

{
  if (this->Storage != (float *)0x0) {
    *this->Storage = *param_1;
    this->bIsValueSet = param_2;
  }
  return;
}

// UnlinkStorage @ 14a35bf20

void __thiscall
FRigCurveElement::UnlinkStorage
          (FRigCurveElement *this,FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1
          ,FRigReusableElementStorage<bool> *param_2,FRigReusableElementStorage<float> *param_3)

{
  FRigReusableElementStorage<float>::Deallocate(param_3,&this->StorageIndex,&this->Storage);
  return;
}

