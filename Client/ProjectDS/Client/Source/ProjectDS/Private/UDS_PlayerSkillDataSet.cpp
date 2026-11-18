// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b561110

UClass * __cdecl UDS_PlayerSkillDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillDataSet",
               &Z_Registration_Info_UClass_UDS_PlayerSkillDataSet.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerSkillDataSet>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillDataSet.InnerSingleton;
}

// UDS_PlayerSkillDataSet @ 14b564860

UDS_PlayerSkillDataSet * __thiscall
UDS_PlayerSkillDataSet::UDS_PlayerSkillDataSet(UDS_PlayerSkillDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PlayerSkillDataSet__6B_;
  return this;
}

// UDS_PlayerSkillDataSet @ 14b564890

UDS_PlayerSkillDataSet * __thiscall
UDS_PlayerSkillDataSet::UDS_PlayerSkillDataSet
          (UDS_PlayerSkillDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PlayerSkillDataSet__6B_;
  return this;
}

// ~UDS_PlayerSkillDataSet @ 14b5652c0

void __thiscall UDS_PlayerSkillDataSet::~UDS_PlayerSkillDataSet(UDS_PlayerSkillDataSet *this)

{
  *(undefined ***)this = &___7UDS_PlayerSkillDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b567b60

UClass * __cdecl UDS_PlayerSkillDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillDataSet",
               &Z_Registration_Info_UClass_UDS_PlayerSkillDataSet.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerSkillDataSet>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillDataSet @ 14b568150

void __cdecl UDS_PlayerSkillDataSet::StaticRegisterNativesUDS_PlayerSkillDataSet(void)

{
  return;
}

// OnAdded @ 14babd430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_PlayerSkillDataSet::OnAdded(UDS_PlayerSkillDataSet *this)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UEnum *pUVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  UObject *local_c0;
  undefined1 local_b8 [128];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar5 = StaticEnum<enum_EDS_PlayerSkillType>();
  if (pUVar5 == (UEnum *)0x0) {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    uVar6 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
    UDS_PlayerData::GetData((ulong64)&local_c8,uVar6,false);
    bVar3 = FWeakObjectPtr::IsValid(&local_c8);
    if (bVar3) {
      local_38 = 0x3020100;
      local_34 = 0x7060504;
      local_30 = 0xb0a0908;
      local_2c = 0xc;
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = 0xd;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xd,0,&local_d8,0xd,&local_cc);
      memcpy(local_d8.Data,&local_38,0xd);
      uVar12 = 0;
      if (0 < local_d0) {
        lVar13 = 0;
        iVar11 = local_d0;
        do {
          uVar4 = 0;
          if ((int)uVar12 < iVar11) {
            uVar4 = ~uVar12 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             iVar11 = local_d0, bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar1 = local_d8.Data[lVar13];
          if (FVar1 != (FScriptContainerElement)0x0) {
            pUVar7 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar7,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar8 = Z_Construct_UClass_UDS_PlayerSkillData_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_b8,pUVar8);
            local_b8._8_8_ = pUVar7;
            pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
            if (local_b8._64_8_ != 0) {
              plVar10 = (longlong *)(local_b8 + 0x50);
              if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                plVar10 = (longlong *)local_b8._104_8_;
              }
              (**(code **)(*plVar10 + 0x10))();
            }
            pUVar9 = FWeakObjectPtr::Get(&local_c8);
            *(undefined8 *)&pUVar7[2].field_0x8 = *(undefined8 *)&pUVar9[6].field_0x8;
            pUVar7[2].field_0x10 = FVar1;
            local_c0 = pUVar7;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar7);
            }
            UDS_DataSetBase::AddData
                      ((UDS_DataSetBase *)this,(ulonglong)(byte)FVar1,
                       (TObjectPtr<UDS_DataBase>)&local_c0);
            iVar11 = local_d0;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
        } while ((int)uVar12 < iVar11);
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
    }
  }
  return;
}

