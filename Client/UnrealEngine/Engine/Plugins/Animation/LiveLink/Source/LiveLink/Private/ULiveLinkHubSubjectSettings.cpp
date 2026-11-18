// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// StaticClass @ 14cff54f0

UClass * __cdecl ULiveLinkHubSubjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkHubSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkHubSubjectSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkHubSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkHubSubjectSettings>,local_res8,
               ULiveLinkSubjectSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton;
}

// ULiveLinkHubSubjectSettings @ 14d013bd0

ULiveLinkHubSubjectSettings * __thiscall
ULiveLinkHubSubjectSettings::ULiveLinkHubSubjectSettings
          (ULiveLinkHubSubjectSettings *this,FVTableHelper *param_1)

{
  ULiveLinkSubjectSettings::ULiveLinkSubjectSettings((ULiveLinkSubjectSettings *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkHubSubjectSettings__6B_;
  (this->SubjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectName).Data.ArrayNum = 0;
  (this->SubjectName).Data.ArrayMax = 0;
  (this->OutboundName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutboundName).Data.ArrayNum = 0;
  (this->OutboundName).Data.ArrayMax = 0;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  (this->TranslatorsProxy).field0_0x0.DebugPtr = (ULiveLinkFrameTranslator *)0x0;
  (this->PreviousOutboundName).ComparisonIndex = 0;
  (this->PreviousOutboundName).Number = 0;
  return this;
}

// ULiveLinkHubSubjectSettings @ 14d013c40

ULiveLinkHubSubjectSettings * __thiscall
ULiveLinkHubSubjectSettings::ULiveLinkHubSubjectSettings(ULiveLinkHubSubjectSettings *this)

{
  ULiveLinkSubjectSettings::ULiveLinkSubjectSettings((ULiveLinkSubjectSettings *)this);
  this->_padding_ = (longlong)&___7ULiveLinkHubSubjectSettings__6B_;
  (this->SubjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectName).Data.ArrayNum = 0;
  (this->SubjectName).Data.ArrayMax = 0;
  (this->OutboundName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutboundName).Data.ArrayNum = 0;
  (this->OutboundName).Data.ArrayMax = 0;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  (this->TranslatorsProxy).field0_0x0.DebugPtr = (ULiveLinkFrameTranslator *)0x0;
  (this->PreviousOutboundName).ComparisonIndex = 0;
  (this->PreviousOutboundName).Number = 0;
  return this;
}

// ~ULiveLinkHubSubjectSettings @ 14d017190

void __thiscall
ULiveLinkHubSubjectSettings::~ULiveLinkHubSubjectSettings(ULiveLinkHubSubjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkHubSubjectSettings__6B_;
  pFVar1 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutboundName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubjectName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ULiveLinkSubjectSettings::~ULiveLinkSubjectSettings((ULiveLinkSubjectSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d0524f0

UClass * __cdecl ULiveLinkHubSubjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkHubSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkHubSubjectSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkHubSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkHubSubjectSettings>,local_res8,
               ULiveLinkSubjectSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton;
}

// GetRebroadcastName @ 14d053450

FName __thiscall ULiveLinkHubSubjectSettings::GetRebroadcastName(ULiveLinkHubSubjectSettings *this)

{
  FName in_RDX;
  
  if ((this->OutboundName).Data.ArrayNum != 0) {
    ::FName::FName((FName *)in_RDX,(wchar_t *)(this->OutboundName).Data.AllocatorInstance.Data);
    return in_RDX;
  }
  ::FName::FName((FName *)in_RDX,L"");
  return in_RDX;
}

// Initialize @ 14d05b9a0

void __thiscall
ULiveLinkHubSubjectSettings::Initialize
          (ULiveLinkHubSubjectSettings *this,FLiveLinkSubjectKey *param_1)

{
  FName FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  FText *this_00;
  FString *pFVar7;
  int iVar8;
  longlong *plVar9;
  FString local_38;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  longlong *local_18 [2];
  
  if ((*(FName *)((longlong)&this->_padding_ + 4) != (param_1->SubjectName).Name) ||
     ((((uint)this->_padding_ != (param_1->Source).D ||
       *(uint *)((longlong)&this->_padding_ + 4) != (param_1->Source).C) ||
      (uint)this->_padding_ != (param_1->Source).B) ||
      (param_1->Source).A != *(uint *)((longlong)&this->_padding_ + 4))) {
    pIVar5 = IModularFeatures::Get();
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
    plVar9 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar9 = (longlong *)0x0;
    }
    ::FName::ToString(&(param_1->SubjectName).Name,&local_38);
    pFVar7 = &this->SubjectName;
    if (pFVar7 != &local_38) {
      pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar7->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (this->SubjectName).Data.ArrayNum = local_38.Data.ArrayNum;
      (this->SubjectName).Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar4 = *(undefined8 *)&(param_1->Source).C;
    FVar1 = (param_1->SubjectName).Name;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)&param_1->Source;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
    *(FName *)((longlong)&this->_padding_ + 4) = FVar1;
    iVar2 = (this->SubjectName).Data.ArrayNum;
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              (&this->OutboundName,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar8);
    local_28 = (param_1->Source).A;
    uStack_24 = (param_1->Source).B;
    uStack_20 = (param_1->Source).C;
    uStack_1c = (param_1->Source).D;
    this_00 = (FText *)(**(code **)(*plVar9 + 0x50))(plVar9,local_18,&local_28);
    pFVar7 = FText::ToString(this_00);
    ::FString::operator=(&this->Source,pFVar7);
    if (local_18[0] != (longlong *)0x0) {
      (**(code **)(*local_18[0] + 0x10))();
    }
  }
  return;
}

// StaticRegisterNativesULiveLinkHubSubjectSettings @ 14d080780

void __cdecl ULiveLinkHubSubjectSettings::StaticRegisterNativesULiveLinkHubSubjectSettings(void)

{
  return;
}

