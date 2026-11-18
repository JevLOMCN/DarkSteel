// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 2

// FAnalyticsSessionSummarySender @ 1431938f0

FAnalyticsSessionSummarySender * __thiscall
FAnalyticsSessionSummarySender::FAnalyticsSessionSummarySender
          (FAnalyticsSessionSummarySender *this,IAnalyticsProviderET *param_1,
          TFunction<bool___cdecl(FAnalyticsEventAttribute_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->AnalyticsProvider = param_1;
  this->_padding_ = (longlong)&___7FAnalyticsSessionSummarySender__6B_;
  *(undefined8 *)&this->ShouldEmitPropFunc = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ShouldEmitPropFunc).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->ShouldEmitPropFunc).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->ShouldEmitPropFunc).field_0x14 = uVar1;
  *(undefined4 *)&(this->ShouldEmitPropFunc).field_0x18 = uVar2;
  *(undefined4 *)&(this->ShouldEmitPropFunc).field_0x1c = uVar3;
  *(undefined8 *)&(this->ShouldEmitPropFunc).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->ShouldEmitPropFunc != 0) {
    *(undefined8 *)param_2 = 0;
    return this;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// SendSessionSummary @ 1431a2960

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnalyticsSessionSummarySender::SendSessionSummary
          (FAnalyticsSessionSummarySender *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  IAnalyticsProviderET *pIVar3;
  FName FVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  FEngineVersion *this_00;
  undefined8 uVar13;
  size_t sVar14;
  FName *pFVar15;
  FModuleManager *this_01;
  IModuleInterface *pIVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  FAnalyticsEventAttribute *pFVar19;
  FScriptContainerElement *this_02;
  undefined1 local_res8 [8];
  FString *local_res10;
  FString *local_res18;
  FString *local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  FGuid local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FName local_e8;
  FString local_e0;
  void *local_d0 [2];
  void *local_c0 [2];
  void *local_b0 [2];
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pFVar10 = (FString *)(**(code **)(this->AnalyticsProvider->_padding_ + 0x148))();
  iVar9 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  pFVar19 = (FAnalyticsEventAttribute *)(local_178.Data + (longlong)iVar9 * 0x30);
  local_170._0_4_ = iVar9 + 1;
  pFVar11 = ::FString::FString(&local_a0,L"SummarySenderAppId");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>(pFVar19,pFVar11,pFVar10);
  lVar12 = (**(code **)(this->AnalyticsProvider->_padding_ + 0x148))();
  if ((int)local_170 == local_170._4_4_) {
    local_170._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  pFVar19 = (FAnalyticsEventAttribute *)(local_178.Data + (longlong)(int)local_170 * 0x30);
  local_170._0_4_ = (int)local_170 + 1;
  pFVar10 = ::FString::FString(&local_90,L"SummarySenderAppVersion");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
            (pFVar19,pFVar10,(FString *)(lVar12 + 0x50));
  this_00 = FEngineVersion::Current();
  pFVar10 = FEngineVersion::ToString(this_00,&local_e0,Changelist);
  if ((int)local_170 == local_170._4_4_) {
    local_170._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  lVar12 = (longlong)(int)local_170;
  local_170 = CONCAT44(local_170._4_4_,(int)local_170 + 1);
  pFVar19 = (FAnalyticsEventAttribute *)(local_178.Data + lVar12 * 0x30);
  pFVar11 = ::FString::FString(&local_80,L"SummarySenderEngineVersion");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar19,pFVar11,pFVar10);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar10 = (FString *)
            (**(code **)(this->AnalyticsProvider->_padding_ + 0x30))
                      (this->AnalyticsProvider,local_d0);
  iVar9 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  local_170 = CONCAT44(local_170._4_4_,iVar9 + 1);
  pFVar19 = (FAnalyticsEventAttribute *)(local_178.Data + (longlong)iVar9 * 0x30);
  pFVar11 = ::FString::FString(&local_70,L"SummarySenderUserId");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar19,pFVar11,pFVar10);
  if (local_d0[0] != (void *)0x0) {
    FMemory::Free(local_d0[0]);
  }
  pFVar10 = (FString *)
            (**(code **)(this->AnalyticsProvider->_padding_ + 0x10))
                      (this->AnalyticsProvider,local_c0);
  iVar9 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  local_170 = CONCAT44(local_170._4_4_,iVar9 + 1);
  pFVar19 = (FAnalyticsEventAttribute *)(local_178.Data + (longlong)iVar9 * 0x30);
  pFVar11 = ::FString::FString(local_60,L"SummarySenderSessionId");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar19,pFVar11,pFVar10);
  if (local_c0[0] != (void *)0x0) {
    FMemory::Free(local_c0[0]);
  }
  plVar5 = (longlong *)CONCAT71(param_5._1_7_,param_5._0_1_);
  lVar12 = plVar5[1];
  pFVar10 = (FString *)*plVar5;
  pFVar11 = pFVar10 + (longlong)(int)lVar12 * 3;
  while( true ) {
    if ((int)plVar5[1] != (int)lVar12) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&param_5);
    }
    if (pFVar10 == pFVar11) break;
    if (*(void **)&this->ShouldEmitPropFunc == (void *)0x0) {
LAB_1431a2c25:
      iVar9 = (int)local_170;
      if ((int)local_170 == local_170._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_178,(int *)((longlong)&local_170 + 4));
      }
      local_170 = CONCAT44(local_170._4_4_,iVar9 + 1);
      this_02 = local_178.Data + (longlong)iVar9 * 0x30;
      ::FString::FString((FString *)this_02,pFVar10);
      ::FString::FString((FString *)(this_02 + 0x10),pFVar10 + 1);
      *(FScriptContainerElement **)(this_02 + 0x20) = pFVar10[2].Data.AllocatorInstance.Data;
      this_02[0x28] = *(FScriptContainerElement *)&pFVar10[2].Data.ArrayNum;
      *(int *)(this_02 + 0x2c) = pFVar10[2].Data.ArrayMax;
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldEmitPropFunc);
      plVar1 = *(longlong **)&(this->ShouldEmitPropFunc).field_0x28;
      pcVar2 = *(code **)&this->ShouldEmitPropFunc;
      plVar17 = (longlong *)&(this->ShouldEmitPropFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar17 = plVar1;
      }
      uVar13 = (**(code **)(*plVar17 + 8))();
      cVar6 = (*pcVar2)(uVar13,pFVar10);
      if (cVar6 != '\0') goto LAB_1431a2c25;
    }
    pFVar10 = pFVar10 + 3;
  }
  AlgoImpl::
  IntroSortInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TDereferenceWrapper<FAnalyticsEventAttribute,_FAnalyticsSessionSummarySender::SendSessionSummary_::__l2::<lambda_1>_>_>
            ((FAnalyticsEventAttribute *)local_178.Data,(int)local_170,param_4._0_1_,
             (<lambda_1> *)local_res8);
  pFVar10 = (FString *)
            (**(code **)(this->AnalyticsProvider->_padding_ + 0x10))
                      (this->AnalyticsProvider,local_b0);
  if ((param_4->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar18 == (FScriptContainerElement *)0x0) {
      iVar9 = -1;
      goto LAB_1431a2d1e;
    }
  }
  sVar14 = wcslen(pwVar18);
  iVar9 = ::FString::Find(pFVar10,pwVar18,(int)sVar14,IgnoreCase,FromStart,-1);
LAB_1431a2d1e:
  if (local_b0[0] != (void *)0x0) {
    FMemory::Free(local_b0[0]);
  }
  if (iVar9 == -1) {
    pFVar15 = ::FName::FName(&local_e8,"AnalyticsET");
    FVar4 = *pFVar15;
    this_01 = FModuleManager::Get();
    pIVar16 = FModuleManager::LoadModuleChecked(this_01,FVar4);
    pcVar2 = *(code **)((longlong)*pIVar16 + 0x48);
    uVar13 = (**(code **)(this->AnalyticsProvider->_padding_ + 0x148))();
    (*pcVar2)(pIVar16,&local_168,uVar13);
    local_158.A = 0;
    local_158.B = 0;
    local_158.C = 0;
    local_158.D = 0;
    if ((param_4->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    FGuid::Parse(pwVar18,&local_158);
    if ((local_168 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    plVar5 = local_168;
    pcVar2 = *(code **)(*local_168 + 0x28);
    if ((local_res10->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(local_res10->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_128,pwVar18);
    (*pcVar2)(plVar5,&local_128);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if ((local_168 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    plVar5 = local_168;
    pcVar2 = *(code **)(*local_168 + 0x108);
    if ((local_res18->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(local_res18->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_118,pwVar18);
    (*pcVar2)(plVar5,&local_118);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if ((local_168 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    plVar5 = local_168;
    pcVar2 = *(code **)(*local_168 + 0x110);
    if ((local_res20->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(local_res20->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_108,pwVar18);
    (*pcVar2)(plVar5,&local_108);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if ((local_168 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    plVar5 = local_168;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    pcVar2 = *(code **)(*local_168 + 0x18);
    FGuid::AppendString(&local_158,&local_148,DigitsWithHyphensInBraces);
    (*pcVar2)(plVar5,&local_148);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if ((local_168 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    plVar5 = local_168;
    pcVar2 = *(code **)(*local_168 + 0x100);
    ::FString::FString(&local_f8,L"SessionSummary");
    (*pcVar2)(plVar5,&local_f8,&local_178);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if ((local_168 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    (**(code **)(*local_168 + 0x140))(local_168,__real_40000000);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  }
  else {
    pIVar3 = this->AnalyticsProvider;
    pcVar2 = *(code **)(pIVar3->_padding_ + 0x100);
    ::FString::FString(&local_138,L"SessionSummary");
    (*pcVar2)(pIVar3,&local_138,&local_178);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogAnalyticsSessionSummarySender._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogAnalyticsSessionSummarySender);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_178.Data,(int)local_170);
  if ((FAnalyticsEventAttribute *)local_178.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return true;
}

