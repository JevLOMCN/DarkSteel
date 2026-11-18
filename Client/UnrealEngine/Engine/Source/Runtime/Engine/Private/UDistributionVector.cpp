// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 147266c60

UClass * __cdecl UDistributionVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVector",
               &Z_Registration_Info_UClass_UDistributionVector.InnerSingleton,
               StaticRegisterNativesUDistributionVector,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVector>,
               InternalVTableHelperCtorCaller<UDistributionVector>,local_res8,
               UDistribution::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVector.InnerSingleton;
}

// UDistributionVector @ 14726cfe0

UDistributionVector * __thiscall
UDistributionVector::UDistributionVector(UDistributionVector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionVector @ 14726d6d0

void __thiscall UDistributionVector::~UDistributionVector(UDistributionVector *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeBaked @ 14726e930

bool __thiscall UDistributionVector::CanBeBaked(UDistributionVector *this)

{
  return this->bCanBeBaked;
}

// GetLockFlag @ 14726ed10

uchar __thiscall UDistributionVector::GetLockFlag(UDistributionVector *this)

{
  return '\0';
}

// GetOperation @ 14726ed60

ERawDistributionOperation __thiscall UDistributionVector::GetOperation(UDistributionVector *this)

{
  return RDO_None;
}

// GetPrivateStaticClass @ 14726fde0

UClass * __cdecl UDistributionVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVector",
               &Z_Registration_Info_UClass_UDistributionVector.InnerSingleton,
               StaticRegisterNativesUDistributionVector,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVector>,
               InternalVTableHelperCtorCaller<UDistributionVector>,local_res8,
               UDistribution::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVector.InnerSingleton;
}

// Serialize @ 147270810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDistributionVector::Serialize(UDistributionVector *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUDistributionVector @ 147270ad0

void __cdecl UDistributionVector::StaticRegisterNativesUDistributionVector(void)

{
  return;
}

// GetInRange @ 147b65dc0

void __thiscall
UDistributionVector::GetInRange(UDistributionVector *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetOutRange @ 147b69bc0

void __thiscall
UDistributionVector::GetOutRange(UDistributionVector *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetRange @ 147b6cf20

void __thiscall
UDistributionVector::GetRange
          (UDistributionVector *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)uVar1;
  (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar1;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetValue @ 147b71d80

TVector<double> * __thiscall
UDistributionVector::GetValue
          (UDistributionVector *this,TVector<double> *__return_storage_ptr__,float param_1,
          UObject *param_2,int param_3,FRandomStream *param_4)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetVectorValue @ 147b729a0

TVector<double> * __thiscall
UDistributionVector::GetVectorValue
          (UDistributionVector *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  (**(code **)(this->_padding_ + 0x2d0))(this,__return_storage_ptr__,param_1,0,0,0);
  return __return_storage_ptr__;
}

// InitializeRawEntry @ 147b77570

uint __thiscall
UDistributionVector::InitializeRawEntry(UDistributionVector *this,float param_1,float *param_2)

{
  double local_28;
  double local_20;
  double local_18;
  
  (**(code **)(this->_padding_ + 0x2d0))(this,&local_28,param_1,0,0,0);
  *param_2 = (float)local_28;
  param_2[1] = (float)local_20;
  param_2[2] = (float)local_18;
  return 3;
}

// NeedsLoadForClient @ 147b7a190

bool __thiscall UDistributionVector::NeedsLoadForClient(UDistributionVector *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if (cVar1 != '\0') {
    return (bool)(~this->bBakedDataSuccesfully & 1);
  }
  return true;
}

// NeedsLoadForEditorGame @ 147b7a1e0

bool __thiscall UDistributionVector::NeedsLoadForEditorGame(UDistributionVector *this)

{
  return true;
}

// NeedsLoadForServer @ 147b7a230

bool __thiscall UDistributionVector::NeedsLoadForServer(UDistributionVector *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if (cVar1 != '\0') {
    return (bool)(~this->bBakedDataSuccesfully & 1);
  }
  return true;
}

// Serialize @ 147b88fe0

void __thiscall
UDistributionVector::Serialize(UDistributionVector *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FArchive *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  UClass *pUStackX_8;
  FSlotBase FStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  
  FStackX_10.StructuredArchive = (FStructuredArchive *)param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1648,"UObject_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0x670);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1648);
  }
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&FStackX_10);
  lStackX_20 = this->_padding_;
  pUStackX_8 = (UClass *)this->_padding_;
  lStackX_18 = this->_padding_;
  if (((uint)pUStackX_8->_padding_ >> 10 & 1) != 0) {
    (**(code **)(*(longlong *)pFVar5 + 0x1b0))(pFVar5,pUStackX_8);
    if ((((this->_padding_ & 0x10) == 0) &&
        ((pUStackX_8->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0)) &&
       (0 < (int)pUStackX_8->_padding_)) {
      (**(code **)(*(longlong *)pFVar5 + 0x1b0))
                (pFVar5,(pUStackX_8->ClassDefaultObject).field0_0x0.DebugPtr);
    }
  }
  if (((pFVar5->field_0x28 & 5) == 0) && ((pFVar5->field_0x2b & 1) == 0)) {
    pFVar1 = (FStackX_10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar1 + 0x178))(pFVar1,&lStackX_18);
    if ((pFVar5->field_0x2a & 0x10) == 0) {
      pFVar1 = (FStackX_10.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar1 + 0x168))(pFVar1,&lStackX_20);
    }
    if ((pFVar5->field_0x2a & 0x40) == 0) {
      pFVar1 = (FStackX_10.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar1 + 0x168))(pFVar1,&pUStackX_8);
    }
  }
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  if (pUStackX_8 != pUVar6) {
    if (((*(longlong *)&pFVar5->field_0x68 == 0) ||
        (*(longlong *)(*(longlong *)&pFVar5->field_0x68 + 0x10) == 0)) &&
       (((pFVar5->field_0x28 & 2) == 0 &&
        (((pFVar5->field_0x28 & 0x40) != 0 &&
         (FOverridableManager::OverridableManager == (FOverridableManager *)0x0)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverridableManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                         ,0x43,L"Expected the overridable manager to be created.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UObject::SerializeScriptProperties
              ((UObject *)this,(FStructuredArchiveSlot)FStackX_10.StructuredArchive);
  }
  FLazyObjectPtr::PossiblySerializeObjectGuid
            ((UObject *)this,(FStructuredArchiveRecord)FStackX_10.StructuredArchive);
  iVar8 = (int)*(short *)(this->_padding_ + 0x5c);
  lVar7 = (longlong)(*(int *)(this->_padding_ + 0x58) + -1 + iVar8 & -iVar8);
  (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,lVar7,lVar7);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

