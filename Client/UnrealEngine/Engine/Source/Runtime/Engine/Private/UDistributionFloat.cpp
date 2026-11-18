// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 147265430

UClass * __cdecl UDistributionFloat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloat",
               &Z_Registration_Info_UClass_UDistributionFloat.InnerSingleton,
               StaticRegisterNativesUDistributionFloat,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloat>,
               InternalVTableHelperCtorCaller<UDistributionFloat>,local_res8,
               UDistribution::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloat.InnerSingleton;
}

// UDistributionFloat @ 14726ce00

UDistributionFloat * __thiscall
UDistributionFloat::UDistributionFloat(UDistributionFloat *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionFloat @ 14726d570

void __thiscall UDistributionFloat::~UDistributionFloat(UDistributionFloat *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeBaked @ 14726e910

bool __thiscall UDistributionFloat::CanBeBaked(UDistributionFloat *this)

{
  return this->bCanBeBaked;
}

// GetLockFlag @ 14726ed00

uchar __thiscall UDistributionFloat::GetLockFlag(UDistributionFloat *this)

{
  return '\0';
}

// GetOperation @ 14726ed50

ERawDistributionOperation __thiscall UDistributionFloat::GetOperation(UDistributionFloat *this)

{
  return RDO_None;
}

// GetPrivateStaticClass @ 14726f8a0

UClass * __cdecl UDistributionFloat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloat",
               &Z_Registration_Info_UClass_UDistributionFloat.InnerSingleton,
               StaticRegisterNativesUDistributionFloat,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloat>,
               InternalVTableHelperCtorCaller<UDistributionFloat>,local_res8,
               UDistribution::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloat.InnerSingleton;
}

// Serialize @ 1472707a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDistributionFloat::Serialize(UDistributionFloat *this,FArchive *param_1)

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

// StaticRegisterNativesUDistributionFloat @ 147270a60

void __cdecl UDistributionFloat::StaticRegisterNativesUDistributionFloat(void)

{
  return;
}

// GetFloatValue @ 147b658e0

float __thiscall UDistributionFloat::GetFloatValue(UDistributionFloat *this,float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147b658e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2d0))(this,param_1,0,0);
  return fVar1;
}

// GetInRange @ 147b65b50

void __thiscall
UDistributionFloat::GetInRange(UDistributionFloat *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetOutRange @ 147b69ad0

void __thiscall
UDistributionFloat::GetOutRange(UDistributionFloat *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetValue @ 147b71ba0

float __thiscall
UDistributionFloat::GetValue
          (UDistributionFloat *this,float param_1,UObject *param_2,FRandomStream *param_3)

{
  return 0.0;
}

// InitializeRawEntry @ 147b774d0

uint __thiscall
UDistributionFloat::InitializeRawEntry(UDistributionFloat *this,float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2d0))(this,param_1,0,0);
  *param_2 = fVar1;
  return 1;
}

// NeedsLoadForClient @ 147b7a150

bool __thiscall UDistributionFloat::NeedsLoadForClient(UDistributionFloat *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2d8))();
  if (cVar1 != '\0') {
    return (bool)(~this->bBakedDataSuccesfully & 1);
  }
  return true;
}

// NeedsLoadForEditorGame @ 147b7a1d0

bool __thiscall UDistributionFloat::NeedsLoadForEditorGame(UDistributionFloat *this)

{
  return true;
}

// NeedsLoadForServer @ 147b7a1f0

bool __thiscall UDistributionFloat::NeedsLoadForServer(UDistributionFloat *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2d8))();
  if (cVar1 != '\0') {
    return (bool)(~this->bBakedDataSuccesfully & 1);
  }
  return true;
}

// Serialize @ 147b88fd0

void __thiscall
UDistributionFloat::Serialize(UDistributionFloat *this,FStructuredArchiveRecord param_1)

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

