// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4ac570

UClass * __cdecl UDS_NpcFunctionBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionBuilder",
               &Z_Registration_Info_UClass_UDS_NpcFunctionBuilder.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionBuilder,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionBuilder>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionBuilder>,local_res8,
               UDS_HistoryBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionBuilder.InnerSingleton;
}

// UDS_NpcFunctionBuilder @ 14b4b2f30

UDS_NpcFunctionBuilder * __thiscall
UDS_NpcFunctionBuilder::UDS_NpcFunctionBuilder(UDS_NpcFunctionBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FDS_HistoryData::FDS_HistoryData((FDS_HistoryData *)&this->field_0x28);
  *(undefined ***)this = &___7UDS_NpcFunctionBuilder__6B_;
  return this;
}

// UDS_NpcFunctionBuilder @ 14b4b2f60

UDS_NpcFunctionBuilder * __thiscall
UDS_NpcFunctionBuilder::UDS_NpcFunctionBuilder
          (UDS_NpcFunctionBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FDS_HistoryData::FDS_HistoryData((FDS_HistoryData *)&this->field_0x28);
  *(undefined ***)this = &___7UDS_NpcFunctionBuilder__6B_;
  return this;
}

// ~UDS_NpcFunctionBuilder @ 14b4b3d60

void __thiscall UDS_NpcFunctionBuilder::~UDS_NpcFunctionBuilder(UDS_NpcFunctionBuilder *this)

{
  *(undefined ***)this = &___7UDS_HistoryBuilder__6B_;
  FDS_HistoryData::~FDS_HistoryData((FDS_HistoryData *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7fb0

UClass * __cdecl UDS_NpcFunctionBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionBuilder",
               &Z_Registration_Info_UClass_UDS_NpcFunctionBuilder.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionBuilder,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionBuilder>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionBuilder>,local_res8,
               UDS_HistoryBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionBuilder.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionBuilder @ 14b4b86c0

void __cdecl UDS_NpcFunctionBuilder::StaticRegisterNativesUDS_NpcFunctionBuilder(void)

{
  return;
}

// Create @ 14bafb790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NpcFunctionBuilder * __cdecl
UDS_NpcFunctionBuilder::Create(EDS_InteractionFunctionType *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_NpcFunctionBuilder *pUVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_b4 [4];
  FName *local_b0;
  uint *local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_NpcFunctionBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = pUVar5;
  pUVar7 = (UDS_NpcFunctionBuilder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar7->field_0x28 = 3;
  FVar2 = NPCFUNCTION_BUILDER_KEY;
  local_b8 = (uint)*param_1;
  uVar3 = ::GetTypeHash(NPCFUNCTION_BUILDER_KEY.ComparisonIndex.Value);
  if (*(int *)&pUVar7->field_0xd8 != *(int *)&pUVar7->field_0x104) {
    puVar9 = *(undefined1 **)&pUVar7->field_0x110;
    if (*(undefined1 **)&pUVar7->field_0x110 == (undefined1 *)0x0) {
      puVar9 = &pUVar7->field_0x108;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)(*(int *)&pUVar7->field_0x118 - 1U & FVar2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&pUVar7->field_0xd0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar4 * 0x14) == FVar2) {
          return pUVar7;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  local_b0 = &NPCFUNCTION_BUILDER_KEY;
  local_a8 = &local_b8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&pUVar7->field_0xd0,(TPairInitializer<FName_const_&,int_const_&> *)local_b4,
             (bool *)(local_b4 + 4));
  return pUVar7;
}

