// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 9

// operator() @ 141e12820

void __thiscall `FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined8 uVar4;
  IFileManager *pIVar5;
  FString *pFVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auVar9 [16];
  FWindowsSystemWideMutex local_res8;
  FString local_a8;
  FProjectEditorRecord local_98;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_80;
  FString local_70;
  TSharedPtr<FJsonObject,1> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  auVar9._8_8_ = 0;
  auVar9._0_8_ = __real_41c1e1a300400000;
  auVar9 = roundpd(auVar9,auVar9,1);
  ::FString::FString(&local_70,L"ProjectEditorRecords");
  UE::FWindowsSystemWideMutex::FWindowsSystemWideMutex
            (&local_res8,&local_70,(FTimespan)(longlong)auVar9._0_8_);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FProjectEditorRecord::Load(&local_98);
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar7 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar7 = *(longlong **)((longlong)this + 0x28);
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar1)(uVar4,&local_98);
  FProjectEditorRecord::PruneOldEntries(&local_98,&local_98.ProjectEditorJson);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_80,&local_a8,0);
  pwVar8 = L"";
  if (local_98.ProjectEditorJson.Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.ReferenceController = local_98.ProjectEditorJson.SharedReferenceCount.ReferenceController;
  if (local_98.ProjectEditorJson.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.ProjectEditorJson.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.ProjectEditorJson.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_98.ProjectEditorJson.Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60.Object = local_98.ProjectEditorJson.Object;
  local_60.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_60,local_80.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  if (bVar3) {
    pIVar5 = IFileManager::Get();
    pFVar6 = FProjectEditorRecord::GetFileLocation(&local_28);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    local_48 = local_a8.Data.AllocatorInstance.Data;
    iStack_40 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iStack_40 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iStack_40;
    local_38.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_38,pwVar8,AutoDetect,pIVar5,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.ProjectEditorJson.SharedReferenceCount.ReferenceController);
  UE::FWindowsSystemWideMutex::~FWindowsSystemWideMutex(&local_res8);
  return;
}

// FindOrAddProperty @ 141e1fcf0

TSharedPtr<FJsonObject,1> * __thiscall
FProjectEditorRecord::FindOrAddProperty
          (FProjectEditorRecord *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          FString *param_1)

{
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetFileLocation @ 141e24ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FProjectEditorRecord::GetFileLocation(FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  wchar_t *_Str;
  size_t sVar3;
  wchar_t *_Str_00;
  undefined1 auStack_b8 [32];
  FString local_98;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  wchar_t *local_48;
  undefined4 local_40;
  FScriptContainerElement *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (**(code **)(*(longlong *)ProjectEditorRecords::CVarProjectEngineLocationFile._8_8_ + 0xd8))
            (ProjectEditorRecords::CVarProjectEngineLocationFile._8_8_,__return_storage_ptr__);
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    pFVar2 = FApp::GetEpicProductIdentifier(&local_78);
    if ((pFVar2->Data).ArrayNum == 0) {
      _Str_00 = L"";
    }
    else {
      _Str_00 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    _Str = FWindowsPlatformProcess::UserSettingsDir();
    ::FString::FString(&local_88,"ProjectEditorRecords.json");
    local_50 = 0;
    local_68.Size = local_50;
    local_68.DataPtr = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      local_68.Size = (int)sVar3;
    }
    local_58 = (FScriptContainerElement *)_Str_00;
    if ((FScriptContainerElement *)_Str_00 != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(_Str_00);
      local_50 = (int)sVar3;
    }
    local_40 = 6;
    local_48 = L"Editor";
    local_38 = local_88.Data.AllocatorInstance.Data;
    local_30 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      local_30 = 0;
    }
    FPaths::CombineInternal(&local_98,&local_68,4);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (__return_storage_ptr__ != &local_98) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// Load @ 141e27bc0

FProjectEditorRecord * __cdecl
FProjectEditorRecord::Load(FProjectEditorRecord *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FString *pFVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  TJsonStringReader<wchar_t> *this;
  FSharedReferencer<1> FVar5;
  wchar_t *pwVar6;
  TJsonStringReader<wchar_t> *pTVar7;
  longlong lVar8;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  FString local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  TSharedRef<TJsonStringReader<wchar_t>,1> local_38;
  
  pTVar7 = (TJsonStringReader<wchar_t> *)0x0;
  __return_storage_ptr__->DaysToKeepRecords = 0x3c;
  (__return_storage_ptr__->ProjectEditorJson).Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->ProjectEditorJson).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar3 = GetFileLocation((FString *)&local_38);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::LoadFileToString(&local_68,pwVar6,None,0);
  if (local_38.Object != (TJsonStringReader<wchar_t> *)0x0) {
    FMemory::Free(local_38.Object);
  }
  if (bVar2) {
    this = ::operator_new(0x88);
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    if (this != (TJsonStringReader<wchar_t> *)0x0) {
      this->_padding_ = 0;
      this->_padding_ = 0;
      *(undefined4 *)&this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 1;
      *(undefined2 *)&this->_padding_ = 0;
      this->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
      (this->Content).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this->Content).Data.ArrayMax;
      lVar8 = (longlong)local_68.Data.ArrayNum;
      (this->Content).Data.ArrayNum = local_68.Data.ArrayNum;
      if (local_68.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&this->Content,
                   local_68.Data.ArrayNum,piVar1);
        memcpy((this->Content).Data.AllocatorInstance.Data,_Src.Data,lVar8 * 2);
      }
      (this->Reader).Ptr = (FBufferReader *)0x0;
      TJsonStringReader<wchar_t>::InitReader(this);
      pTVar7 = this;
    }
    local_res8.Object = pTVar7;
    TSharedRef<TJsonStringReader<wchar_t>,1>::
    TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_38,&local_res8);
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TSharedRef<TJsonReader<wchar_t>,1> *)&local_38,
                       &__return_storage_ptr__->ProjectEditorJson,None);
    if ((!bVar2) || ((__return_storage_ptr__->ProjectEditorJson).Object == (FJsonObject *)0x0)) {
      pTVar4 = MakeShared<FJsonObject,1>((TSharedRef<FJsonObject,1> *)&local_38);
      local_48._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
      local_48._0_8_ = pTVar4->Object;
      if ((TReferenceControllerBase<1> *)local_48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__ != (FProjectEditorRecord *)local_48) {
        (__return_storage_ptr__->ProjectEditorJson).Object = (FJsonObject *)local_48._0_8_;
        local_48._0_8_ = (FJsonObject *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(__return_storage_ptr__->ProjectEditorJson).SharedReferenceCount,
                   (FSharedReferencer<1> *)(local_48 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pTVar4 = MakeShared<FJsonObject,1>((TSharedRef<FJsonObject,1> *)&local_38);
    local_58._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    local_58._0_8_ = pTVar4->Object;
    if ((TReferenceControllerBase<1> *)local_58._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_58._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_58._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != (FProjectEditorRecord *)local_58) {
      (__return_storage_ptr__->ProjectEditorJson).Object = (FJsonObject *)local_58._0_8_;
      local_58._0_8_ = (FJsonObject *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->ProjectEditorJson).SharedReferenceCount,
                 (FSharedReferencer<1> *)(local_58 + 8));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._8_8_);
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeDefaultProperties @ 141e293b0

TSharedPtr<FJsonObject,1> * __cdecl
FProjectEditorRecord::MakeDefaultProperties(TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TSharedPtr<FJsonObject,1> *pTVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  FDateTime this;
  TSharedRef<FJsonObject,1> local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pTVar5 = MakeShared<FJsonObject,1>(&local_48);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  pwVar7 = FWindowsPlatformProcess::ExecutablePath();
  pFVar8 = ::FString::FString(&local_38,pwVar7);
  FJsonObject::SetStringField(pFVar2,&EngineLocationProperty,pFVar8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  pwVar7 = FWindowsPlatformProcess::BaseDir();
  pFVar8 = ::FString::FString(&local_28,pwVar7);
  FJsonObject::SetStringField(pFVar2,&BaseDirProperty,pFVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  this = FDateTime::UtcNow();
  pFVar8 = FDateTime::ToString((FDateTime *)this.Ticks,&local_18);
  FJsonObject::SetStringField(pFVar2,&TimestampProperty,pFVar8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PruneOldEntries @ 141e2ca30

void __thiscall
FProjectEditorRecord::PruneOldEntries(FProjectEditorRecord *this,TSharedPtr<FJsonObject,1> *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  FJsonObject *pFVar4;
  code *pcVar5;
  double dVar6;
  longlong *plVar7;
  FJsonObject *pFVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FDateTime FVar12;
  TSharedPtr<FJsonObject,1> *pTVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  FDateTime local_148;
  FString local_140;
  int local_130;
  longlong *local_128;
  FJsonObject *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FJsonObject *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78 [2];
  undefined4 local_4c;
  
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = param_1->Object;
  iStack_118 = 0;
  iVar11 = *(int *)&(pFVar4->Values).field_0x28;
  puVar2 = &(pFVar4->Values).field_0x10;
  uStack_114 = 1;
  local_100 = 0;
  iStack_104 = iStack_118;
  if (iVar11 != 0) {
    puVar21 = *(uint **)&(pFVar4->Values).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar2;
    }
    uVar18 = *puVar21;
    local_100 = 0;
    iStack_118 = 0;
    while (uVar18 == 0) {
      lVar14 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_141e2cb20;
      uVar18 = puVar21[lVar14 + 1];
    }
    uStack_114 = -uVar18 & uVar18;
    uVar1 = (ulonglong)uStack_114 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iStack_104 = local_100 + -1 + local_res20;
    if (iVar11 < iStack_104) {
      iStack_104 = iVar11;
    }
  }
LAB_141e2cb20:
  uVar18 = *(uint *)&(pFVar4->Values).field_0x28;
  uStack_fc = local_4c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_f8 = *(int *)&(pFVar4->Values).field_0x8 - *(int *)&(pFVar4->Values).field_0x34;
  uStack_108 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
  TStack_e8.CurrentBitIndex = iStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_e8._28_4_ = local_4c;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = pFVar4;
  local_110 = puVar2;
  local_f0 = pFVar4;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar18 < 0) || (iVar11 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_3d745c7fe3bc40b0;
  uVar3 = *(uint *)&(pFVar4->Values).field_0x28;
  if (uVar18 != uVar3) {
    puVar20 = *(undefined1 **)&(pFVar4->Values).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141e2cc30;
      uVar18 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_130 = (int)lVar14;
    uVar18 = local_130 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar18) {
      uVar18 = uVar3;
    }
  }
LAB_141e2cc30:
  do {
    pFVar8 = local_f0;
    if (*(int *)&(local_f0->Values).field_0x8 - *(int *)&(local_f0->Values).field_0x34 !=
        (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_e8.CurrentBitIndex == uVar18) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar8 == pFVar4))
    {
      iVar11 = (int)local_150;
      pFVar19 = local_158.Data + (longlong)(int)local_150 * 0x10;
      FVar16.Data = local_158.Data;
      while( true ) {
        if ((int)local_150 != iVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar16.Data == pFVar19) break;
        if (((this->ProjectEditorJson).Object == (FJsonObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_a8 = *(wchar_t **)FVar16.Data;
        iStack_a0 = *(int *)(FVar16.Data + 8) + -1;
        if (*(int *)(FVar16.Data + 8) == 0) {
          iStack_a0 = 0;
        }
        local_78[0]._12_4_ = uStack_9c;
        local_78[0].Size = iStack_a0;
        local_78[0].DataPtr = local_a8;
        FJsonObject::RemoveField((this->ProjectEditorJson).Object,local_78);
        FVar16.Data = FVar16.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_158.Data,(int)local_150);
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      return;
    }
    lVar14 = *(longlong *)&pFVar8->Values;
    pFVar19 = (FScriptContainerElement *)(lVar14 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
    if ((*(longlong *)(lVar14 + 0x10 + (longlong)TStack_e8.CurrentBitIndex * 0x28) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(*(longlong *)(pFVar19 + 0x10) + 8) == 6) {
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      local_148.Ticks = 0;
      if ((*(longlong *)(pFVar19 + 0x10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      cVar10 = (**(code **)(**(longlong **)(pFVar19 + 0x10) + 0x80))
                         (*(longlong **)(pFVar19 + 0x10),&local_128);
      plVar7 = local_128;
      if (cVar10 == '\0') {
LAB_141e2cdf8:
        if (((local_158.Data <= pFVar19) &&
            (pFVar19 < local_158.Data + (longlong)local_150._4_4_ * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (int)local_150;
        if ((int)local_150 == local_150._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_158,(int *)((longlong)&local_150 + 4));
        }
        local_150 = CONCAT44(local_150._4_4_,iVar11 + 1);
        ::FString::FString((FString *)(local_158.Data + (longlong)iVar11 * 0x10),(FString *)pFVar19)
        ;
      }
      else {
        if ((*local_128 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_b8 = TimestampProperty.Data.AllocatorInstance.Data;
        iStack_b0 = TimestampProperty.Data.ArrayNum + -1;
        if (TimestampProperty.Data.ArrayNum == 0) {
          iStack_b0 = 0;
        }
        local_88._12_4_ = uStack_ac;
        local_88.Size = iStack_b0;
        local_88.DataPtr = (wchar_t *)TimestampProperty.Data.AllocatorInstance.Data;
        bVar9 = FJsonObject::TryGetStringField((FJsonObject *)*plVar7,&local_88,&local_140);
        if (((!bVar9) || (bVar9 = FDateTime::Parse(&local_140,&local_148), !bVar9)) ||
           (FVar12 = FDateTime::UtcNow(),
           (double)this->DaysToKeepRecords <
           (double)(local_148.Ticks - *(longlong *)FVar12.Ticks) * dVar6)) goto LAB_141e2cdf8;
        if ((*(longlong *)(pFVar19 + 0x10) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar13 = (TSharedPtr<FJsonObject,1> *)(**(code **)**(undefined8 **)(pFVar19 + 0x10))();
        PruneOldEntries(this,pTVar13);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
}

// QueueUpdate @ 141e2d260

void __cdecl
FProjectEditorRecord::QueueUpdate(TUniqueFunction<void___cdecl(FProjectEditorRecord_&)> *param_1)

{
  return;
}

// Save @ 141e369c0

bool __thiscall FProjectEditorRecord::Save(FProjectEditorRecord *this)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_68;
  TSharedPtr<FJsonObject,1> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  PruneOldEntries(this,&this->ProjectEditorJson);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_38,&local_68,0);
  pwVar8 = L"";
  if ((this->ProjectEditorJson).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->ProjectEditorJson).Object;
  pTVar2 = (this->ProjectEditorJson).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar1;
  local_58.SharedReferenceCount.ReferenceController = pTVar2;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_58,local_38.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar4) {
    pIVar6 = IFileManager::Get();
    pFVar7 = GetFileLocation(&local_18);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    local_48 = local_68.Data.AllocatorInstance.Data;
    iStack_40 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iStack_40 = 0;
    }
    local_28._12_4_ = uStack_3c;
    local_28.Size = iStack_40;
    local_28.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    bVar4 = FFileHelper::SaveStringToFile(&local_28,pwVar8,AutoDetect,pIVar6,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_141e36b19;
    }
  }
  bVar4 = false;
LAB_141e36b19:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// TearDown @ 141e37db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FProjectEditorRecord::TearDown(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  bool bVar5;
  FTaskGraphInterface *pFVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  undefined1 auStackY_88 [32];
  TRefCountPtr<FBaseGraphTask> local_48;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_40;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (AsyncUpdateTask.Reference != (FBaseGraphTask *)0x0) {
    bVar5 = FTaskGraphInterface::IsRunning();
    if (bVar5) {
      pFVar6 = FTaskGraphInterface::Get();
      pcVar3 = *(code **)((longlong)*pFVar6 + 0x60);
      local_48.Reference = AsyncUpdateTask.Reference;
      if (AsyncUpdateTask.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(AsyncUpdateTask.Reference)->field_0x30 =
             *(int *)&(AsyncUpdateTask.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_40.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_18 = 1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_40,1,&local_14);
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
      if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar7 = local_40.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar7,&local_48,1);
      (*pcVar3)(pFVar6,&local_40,0xff);
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
      if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar7 = local_40.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_18);
      if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_40.SecondaryData);
      }
      if (local_48.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_48.Reference)->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)local_48.Reference)(local_48.Reference,1);
        }
      }
    }
    TVar4.Reference = AsyncUpdateTask.Reference;
    if (AsyncUpdateTask.Reference != (FBaseGraphTask *)0x0) {
      AsyncUpdateTask.Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &(TVar4.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
      }
    }
  }
  return;
}

