// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dcf8030

UClass * __cdecl UMovieGraphExecuteScriptNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphExecuteScriptNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphExecuteScriptNode",
               &Z_Registration_Info_UClass_UMovieGraphExecuteScriptNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphExecuteScriptNode,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphExecuteScriptNode>,
               InternalVTableHelperCtorCaller<UMovieGraphExecuteScriptNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphExecuteScriptNode.InnerSingleton;
}

// UMovieGraphExecuteScriptNode @ 14dd0a2b0

UMovieGraphExecuteScriptNode * __thiscall
UMovieGraphExecuteScriptNode::UMovieGraphExecuteScriptNode
          (UMovieGraphExecuteScriptNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphExecuteScriptNode__6B_;
  *(undefined8 *)&this->Script = 0;
  *(undefined8 *)&(this->Script).field_0x8 = 0;
  *(undefined8 *)&(this->Script).field_0x10 = 0;
  *(undefined8 *)&(this->Script).field_0x18 = 0;
  return this;
}

// ~UMovieGraphExecuteScriptNode @ 14dd0d8e0

void __thiscall
UMovieGraphExecuteScriptNode::~UMovieGraphExecuteScriptNode(UMovieGraphExecuteScriptNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphExecuteScriptNode__6B_;
  pvVar1 = *(void **)&(this->Script).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// AllocateScriptInstance @ 14dd134d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphScriptBase * __thiscall
UMovieGraphExecuteScriptNode::AllocateScriptInstance(UMovieGraphExecuteScriptNode *this)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStackY_f8 [32];
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (*(longlong *)&(this->Script).field_0x0 == 0) {
    return (UMovieGraphScriptBase *)0x0;
  }
  local_b8.DataPtr = (wchar_t *)0x0;
  iVar8 = 0;
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  pFVar1 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->Script,&local_a8);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_c8.DataPtr = L"";
  }
  else {
    local_c8.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_c8.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14dd1353c;
  }
  sVar2 = wcslen(local_c8.DataPtr);
  iVar8 = (int)sVar2;
LAB_14dd1353c:
  local_c8.Size = iVar8;
  pUVar3 = UMovieGraphScriptBase::StaticClass();
  pUVar3 = StaticLoadClass(pUVar3,(UObject *)0x0,&local_c8,&local_b8,0,(UPackageMap *)0x0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (pUVar3 == (UClass *)0x0) {
    return (UMovieGraphScriptBase *)0x0;
  }
  local_c8.DataPtr = (wchar_t *)0x0;
  pUVar4 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UMovieGraphScriptBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar5,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
    return (UMovieGraphScriptBase *)pUVar6;
  }
  return (UMovieGraphScriptBase *)pUVar6;
}

// GetBranchRestriction @ 14dd23e90

EMovieGraphBranchRestriction __thiscall
UMovieGraphExecuteScriptNode::GetBranchRestriction(UMovieGraphExecuteScriptNode *this)

{
  return Globals;
}

// GetPrivateStaticClass @ 14dd2c510

UClass * __cdecl UMovieGraphExecuteScriptNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphExecuteScriptNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphExecuteScriptNode",
               &Z_Registration_Info_UClass_UMovieGraphExecuteScriptNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphExecuteScriptNode,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphExecuteScriptNode>,
               InternalVTableHelperCtorCaller<UMovieGraphExecuteScriptNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphExecuteScriptNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphExecuteScriptNode @ 14dd451b0

void __cdecl UMovieGraphExecuteScriptNode::StaticRegisterNativesUMovieGraphExecuteScriptNode(void)

{
  return;
}

// UpdateTelemetry @ 14dd4b6a0

void __thiscall
UMovieGraphExecuteScriptNode::UpdateTelemetry
          (UMovieGraphExecuteScriptNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesScripting = true;
  return;
}

