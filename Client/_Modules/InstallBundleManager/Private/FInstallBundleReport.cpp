// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 6

// ~FInstallBundleReport @ 148bc3d90

void __thiscall FInstallBundleReport::~FInstallBundleReport(FInstallBundleReport *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  if ((this->State).bIsSet != false) {
    uVar4 = (ulonglong)(this->State).TypedValue.TypeIndex;
    if (3 < uVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&this->State);
  }
  if ((*(int *)((longlong)&(this->SourceVersion).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->SourceVersion).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// AddDiscrepancy @ 148bc5c40

void __thiscall FInstallBundleReport::AddDiscrepancy(FInstallBundleReport *this,ulong64 param_1)

{
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *this_00;
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
  *pTVar5;
  longlong lVar6;
  float fVar7;
  
  if ((param_1 == 0) || ((this->State).bIsSet == false)) {
    return;
  }
  this_00 = &this->State;
  pTVar5 = &this_00->TypedValue;
  if ((this->State).TypedValue.TypeIndex != '\0') {
    pTVar5 = (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
              *)0x0;
  }
  if (pTVar5 == (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                 *)0x0) {
    pTVar5 = TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
             ::operator->(this_00);
    if (pTVar5->TypeIndex == '\x01') {
      uVar2 = pTVar5->_padding_;
      uVar1 = uVar2 + param_1;
      pTVar5->_padding_ = uVar1;
      fVar7 = (float)uVar2 * *(float *)((longlong)&pTVar5->_padding_ + 4) + (float)param_1;
      lVar6 = 0;
      if ((__real_5f000000 <= fVar7) && (fVar7 = fVar7 - __real_5f000000, fVar7 < __real_5f000000))
      {
        lVar6 = -0x8000000000000000;
      }
      if ((longlong)uVar1 < 0) {
        *(float *)((longlong)&pTVar5->_padding_ + 4) =
             (float)(ulonglong)((longlong)fVar7 + lVar6) / (float)uVar1;
        return;
      }
      *(float *)((longlong)&pTVar5->_padding_ + 4) =
           (float)(ulonglong)((longlong)fVar7 + lVar6) / (float)(longlong)uVar1;
      return;
    }
    pTVar5 = TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
             ::operator->(this_00);
    if ((pTVar5->TypeIndex != '\x02') &&
       (pTVar5 = TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                 ::operator->(this_00), pTVar5->TypeIndex != '\x03')) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleManagerReporting.cpp"
                         ,0x66,L"Unsupported state type in DownloadedBytes()");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5->_padding_ = pTVar5->_padding_ + param_1;
  return;
}

// DownloadedBytes @ 148bc8230

ulong64 __thiscall FInstallBundleReport::DownloadedBytes(FInstallBundleReport *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar4;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar5;
  ulonglong uVar6;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar7;
  double dVar8;
  
  if ((this->State).bIsSet != false) {
    uVar6 = (ulonglong)(this->State).TypedValue.TypeIndex;
    if ((3 < uVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6 + 4) == '\0') {
      pTVar7 = &this->State;
      if (((this->State).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      pTVar5 = (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                *)0x0;
      pTVar4 = pTVar7;
      if ((this->State).TypedValue.TypeIndex != '\x01') {
        pTVar4 = pTVar5;
      }
      if (pTVar4 != (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                     *)0x0) {
        dVar8 = (double)((float)(ulonglong)(pTVar4->TypedValue)._padding_ *
                        *(float *)((longlong)&(pTVar4->TypedValue)._padding_ + 4));
        return (longlong)ROUND(dVar8 + dVar8 + __real_3fe0000000000000) >> 1;
      }
      if (((this->State).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      pTVar4 = pTVar7;
      if ((this->State).TypedValue.TypeIndex != '\x02') {
        pTVar4 = pTVar5;
      }
      if (pTVar4 != (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                     *)0x0) {
        return (pTVar4->TypedValue)._padding_;
      }
      if (((this->State).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      if ((this->State).TypedValue.TypeIndex != '\x03') {
        pTVar7 = pTVar5;
      }
      if (pTVar7 != (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                     *)0x0) {
        return (pTVar7->TypedValue)._padding_;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleManagerReporting.cpp"
                         ,0x35,L"Unsupported state type in DownloadedBytes()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
  }
  return 0;
}

// InstallationProgress @ 148bcf010

float __thiscall FInstallBundleReport::InstallationProgress(FInstallBundleReport *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar4;
  float fVar5;
  
  if ((this->State).bIsSet != false) {
    uVar3 = (ulonglong)(this->State).TypedValue.TypeIndex;
    if (3 < uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') {
      if ((this->State).bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar5 = (float)(*pcVar1)();
          return fVar5;
        }
      }
      uVar3 = (ulonglong)(this->State).TypedValue.TypeIndex;
      if (3 < uVar3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar5 = (float)(*pcVar1)();
          return fVar5;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar3) == '\0') {
        if ((this->State).bIsSet == false) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            fVar5 = (float)(*pcVar1)();
            return fVar5;
          }
        }
        pTVar4 = &this->State;
        if ((this->State).TypedValue.TypeIndex != '\x02') {
          pTVar4 = (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                    *)0x0;
        }
        if (pTVar4 != (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                       *)0x0) {
          fVar5 = *(float *)&(pTVar4->TypedValue)._padding_;
          if ((fVar5 < 0.0) || (__real_3f800000 < fVar5)) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("StateInstalling->InstallProgress >= 0 && StateInstalling->InstallProgress <= 1.f"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleManagerReporting.cpp"
                               ,0x41,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              fVar5 = (float)(*pcVar1)();
              return fVar5;
            }
          }
          return *(float *)&(pTVar4->TypedValue)._padding_;
        }
        if ((this->State).bIsSet == false) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            fVar5 = (float)(*pcVar1)();
            return fVar5;
          }
        }
        bVar2 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                ::IsType<FInstallBundleReport::FStateUpdated>(&(this->State).TypedValue);
        if (bVar2) {
          return __real_3f800000;
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleManagerReporting.cpp"
                           ,0x48,L"Unsupported state type in DownloadedBytes()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar5 = (float)(*pcVar1)();
          return fVar5;
        }
      }
    }
  }
  return 0.0;
}

// Serialize @ 148bd4d80

/* WARNING: Removing unreachable block (ram,0x000148bd56a2) */

void __thiscall
FInstallBundleReport::Serialize
          (FInstallBundleReport *this,FJsonSerializerBase *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  longlong *plVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<FJsonObject,1> *pTVar13;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar14;
  FString *pFVar15;
  FStateUpdatable *pFVar16;
  FStateUpdating *pFVar17;
  FStateInstalling *pFVar18;
  FStateUpdated *pFVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar22;
  FJsonObject *pFVar23;
  TSharedPtr<FJsonObject,1> *local_res8;
  FName local_res10;
  char local_res18;
  undefined4 uStack_22c;
  FString local_228;
  FJsonObject *local_218;
  undefined8 uStack_210;
  FScriptContainerElement *local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  undefined1 local_1d8 [8];
  TReferenceControllerBase<1> *local_1d0;
  undefined1 local_1c8 [8];
  TReferenceControllerBase<1> *local_1c0;
  FJsonObject *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  FJsonObject *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FJsonObject *local_198;
  TReferenceControllerBase<1> *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  TStringView<wchar_t> local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *local_100;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res18 = param_2;
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  cVar5 = (**(code **)*param_1)();
  if (cVar5 == '\0') {
    ::FName::ToString(&this->BundleName,&local_1e8);
    local_178 = 0x50641bc8;
    uStack_174 = 1;
    uStack_170 = 4;
    (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_178,&local_1e8);
  }
  else {
    local_208 = (FScriptContainerElement *)0x0;
    local_200 = 0;
    local_188 = 0x50641bc8;
    uStack_184 = 1;
    uStack_180 = 4;
    (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_188,&local_208);
    pFVar20 = (FScriptContainerElement *)L"";
    if ((int)local_200 != 0) {
      pFVar20 = local_208;
    }
    pFVar9 = ::FName::FName(&local_res10,(wchar_t *)pFVar20);
    this->BundleName = *pFVar9;
    local_1e8.Data.AllocatorInstance.Data = local_208;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    if (*(int *)((longlong)&(this->SourceVersion).field0_0x0 + 0xc) != -1) {
      local_1f8 = L"SourceVersion";
      uStack_1f0 = 0xd;
      local_148 = 0x51c7bcd8;
      uStack_144 = 1;
      uStack_140 = 0xd;
      uStack_13c = uStack_1ec;
      (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_148,&this->SourceVersion);
    }
  }
  else {
    plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_1f8);
    if ((*plVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar14 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar10;
    local_168._12_4_ = uStack_22c;
    local_168.Size = 0xd;
    local_168.DataPtr = L"SourceVersion";
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"SourceVersion");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar14,uVar7,&local_168);
    if ((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1ec,uStack_1f0));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1ec,uStack_1f0));
      pFVar20 = (this->SourceVersion).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      pcVar3 = *(code **)((longlong)*param_1 + 0x70);
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      local_158 = 0x51c7bcd8;
      uStack_154 = 1;
      uStack_150 = 0xd;
      (this->SourceVersion).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)((longlong)&(this->SourceVersion).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(this->SourceVersion).field0_0x0 + 0xc) = 0;
      (*pcVar3)(param_1,&local_158,&this->SourceVersion);
    }
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 != '\0') {
    plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_1d8);
    if ((*plVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar14 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar10;
    local_138._12_4_ = uStack_22c;
    local_138.Size = 5;
    local_138.DataPtr = L"State";
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"State");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar14,uVar7,&local_138);
    if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
       (pTVar11->Object->Type != Object)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0)
      ;
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0)
      ;
      if ((this->State).bIsSet != false) {
        uVar21 = (ulonglong)(this->State).TypedValue.TypeIndex;
        if ((3 < uVar21) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])(&this->State);
      }
      (this->State).TypedValue._padding_ = 0;
      (this->State).TypedValue._padding_ = (longlong)&___7FStateUpdatable_FInstallBundleReport__6B_;
      (this->State).TypedValue.TypeIndex = '\0';
      (this->State).bIsSet = true;
    }
  }
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  if (((this->State).bIsSet == false) ||
     (this_00 = &this->State,
     this_00 ==
     (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
      *)0x0)) goto LAB_148bd59fe;
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    local_c8 = 0x506e3558;
    uStack_c4 = 1;
    uStack_c0 = 5;
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_c8);
LAB_148bd5376:
    pFVar23 = (FJsonObject *)0x0;
  }
  else {
    local_128.DataPtr._0_4_ = 0x506e3558;
    local_128.DataPtr._4_4_ = 1;
    local_128.Size = 5;
    pTVar13 = (TSharedPtr<FJsonObject,1> *)
              (**(code **)((longlong)*param_1 + 0xf8))(param_1,local_1c8);
    pTVar14 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)TSharedPtr<FJsonObject,1>::operator->(pTVar13);
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"State");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar14,uVar7,&local_128);
    if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
       (pTVar11->Object->Type != Object)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0)
      ;
      pTVar22 = pTVar12;
      goto LAB_148bd5376;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0);
    plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_108);
    if ((*plVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_118._12_4_ = uStack_22c;
    local_118.Size = 5;
    local_118.DataPtr = L"State";
    pTVar13 = FJsonObject::GetObjectField((FJsonObject *)*plVar10,&local_118);
    pTVar12 = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar23 = pTVar13->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
    pTVar22 = pTVar12;
    if (pFVar23 == (FJsonObject *)0x0) goto LAB_148bd5376;
    local_f8._12_4_ = uStack_22c;
    local_f8.Size = 4;
    local_f8.DataPtr = L"Type";
    pFVar15 = FJsonObject::GetStringField(pFVar23,&local_e8,&local_f8);
    if (&local_228 != pFVar15) {
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      local_228.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      local_228.Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    local_d8._12_4_ = uStack_22c;
    local_d8.Size = 5;
    local_d8.DataPtr = L"Value";
    local_res8 = (TSharedPtr<FJsonObject,1> *)0x0;
    FJsonObject::TryGetObjectField(pFVar23,&local_d8,&local_res8);
    if (local_res8 == (TSharedPtr<FJsonObject,1> *)0x0) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar12->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar12->_padding_)();
          LOCK();
          paVar1 = &pTVar12->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
          }
        }
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        param_2 = (bool)local_res18;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar22 = pTVar12;
      goto LAB_148bd5376;
    }
    pFVar23 = local_res8->Object;
    pTVar22 = (local_res8->SharedReferenceCount).ReferenceController;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    bVar6 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
            ::IsType<FInstallBundleReport::FStateUpdatable>(&this_00->TypedValue);
    if (bVar6) {
      ::FString::AssignRange(&local_228,L"StateUpdatable",0xe);
      local_b8 = 0x506ed7d0;
      uStack_b4 = 1;
      uStack_b0 = 4;
      (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_b8,&local_228);
      local_a8 = 0x5069d088;
      uStack_a4 = 1;
      uStack_a0 = 5;
      (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_a8);
      pFVar16 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                ::Get<FInstallBundleReport::FStateUpdatable>(&this_00->TypedValue);
      (**(code **)(pFVar16->_padding_ + 0x50))(pFVar16,param_1,1);
      (**(code **)((longlong)*param_1 + 0x20))(param_1);
    }
  }
  else if (pFVar23 != (FJsonObject *)0x0) {
    iVar8 = local_228.Data.ArrayNum + -1;
    if (local_228.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((iVar8 == 0xe) &&
       (iVar8 = FGenericPlatformStricmp::Strnicmp
                          (L"StateUpdatable",(wchar_t *)local_228.Data.AllocatorInstance.Data,0xe),
       iVar8 == 0)) {
      uVar21 = (ulonglong)(this->State).TypedValue.TypeIndex;
      if ((3 < uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateUpdated>::Destruct) {
        FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this_00);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])();
      }
      (this->State).TypedValue._padding_ = 0;
      (this_00->TypedValue)._padding_ = (longlong)&___7FStateUpdatable_FInstallBundleReport__6B_;
      (this->State).TypedValue.TypeIndex = '\0';
      puVar4 = PTR_FromJson_151c7ba60;
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b8 = pFVar23;
      local_1b0 = pTVar22;
      (*(code *)puVar4)(this_00,&local_1b8);
    }
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    bVar6 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
            ::IsType<FInstallBundleReport::FStateUpdating>(&this_00->TypedValue);
    if (bVar6) {
      ::FString::AssignRange(&local_228,L"StateUpdating",0xd);
      local_98 = 0x506ed7d0;
      uStack_94 = 1;
      uStack_90 = 4;
      (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_98,&local_228);
      local_88 = 0x5069d088;
      uStack_84 = 1;
      uStack_80 = 5;
      (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_88);
      pFVar17 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                ::Get<FInstallBundleReport::FStateUpdating>(&this_00->TypedValue);
      (**(code **)(pFVar17->_padding_ + 0x50))(pFVar17,param_1,1);
      (**(code **)((longlong)*param_1 + 0x20))(param_1);
    }
  }
  else if (pFVar23 != (FJsonObject *)0x0) {
    iVar8 = local_228.Data.ArrayNum + -1;
    if (local_228.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((iVar8 == 0xd) &&
       (iVar8 = FGenericPlatformStricmp::Strnicmp
                          (L"StateUpdating",(wchar_t *)local_228.Data.AllocatorInstance.Data,0xd),
       iVar8 == 0)) {
      uVar21 = (ulonglong)(this->State).TypedValue.TypeIndex;
      if ((3 < uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(this_00);
      (this_00->TypedValue)._padding_ = 0;
      (this->State).TypedValue._padding_ = 0;
      (this->State).TypedValue._padding_ = 0;
      (this->State).TypedValue._padding_ = 0;
      (this_00->TypedValue)._padding_ = (longlong)&___7FStateUpdating_FInstallBundleReport__6B_;
      *(undefined4 *)((longlong)&(this->State).TypedValue._padding_ + 4) = 0;
      (this->State).TypedValue.TypeIndex = '\x01';
      puVar4 = PTR_FromJson_151c7bab8;
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1a8 = pFVar23;
      local_1a0 = pTVar22;
      (*(code *)puVar4)(this_00,&local_1a8);
    }
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    bVar6 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
            ::IsType<FInstallBundleReport::FStateInstalling>(&this_00->TypedValue);
    if (bVar6) {
      ::FString::AssignRange(&local_228,L"StateInstalling",0xf);
      local_78 = 0x506ed7d0;
      uStack_74 = 1;
      uStack_70 = 4;
      (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_78,&local_228);
      local_68 = 0x5069d088;
      uStack_64 = 1;
      uStack_60 = 5;
      (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_68);
      pFVar18 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                ::Get<FInstallBundleReport::FStateInstalling>(&this_00->TypedValue);
      (**(code **)(pFVar18->_padding_ + 0x50))(pFVar18,param_1,1);
      (**(code **)((longlong)*param_1 + 0x20))(param_1);
    }
  }
  else if (pFVar23 != (FJsonObject *)0x0) {
    iVar8 = local_228.Data.ArrayNum + -1;
    if (local_228.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((iVar8 == 0xf) &&
       (iVar8 = FGenericPlatformStricmp::Strnicmp
                          (L"StateInstalling",(wchar_t *)local_228.Data.AllocatorInstance.Data,0xf),
       iVar8 == 0)) {
      uVar21 = (ulonglong)(this->State).TypedValue.TypeIndex;
      if ((3 < uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateUpdatable>::Destruct) {
        FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this_00);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])();
      }
      (this->State).TypedValue._padding_ = 0;
      (this_00->TypedValue)._padding_ = (longlong)&___7FStateInstalling_FInstallBundleReport__6B_;
      (this->State).TypedValue._padding_ = 0;
      (this->State).TypedValue.TypeIndex = '\x02';
      puVar4 = PTR_FromJson_151c7bb10;
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_198 = pFVar23;
      local_190 = pTVar22;
      (*(code *)puVar4)(this_00,&local_198);
    }
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    bVar6 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
            ::IsType<FInstallBundleReport::FStateUpdated>(&this_00->TypedValue);
    if (bVar6) {
      ::FString::AssignRange(&local_228,L"StateUpdated",0xc);
      uStack_210._0_4_ = 4;
      local_218 = (FJsonObject *)0x1506ed7d0;
      local_58 = 0x506ed7d0;
      uStack_54 = 1;
      uStack_50 = 4;
      uStack_4c = uStack_210._4_4_;
      (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_58,&local_228);
      uStack_210 = (TReferenceControllerBase<1> *)CONCAT44(uStack_210._4_4_,5);
      local_218 = (FJsonObject *)0x15069d088;
      local_48 = 0x5069d088;
      uStack_44 = 1;
      uStack_40 = 5;
      uStack_3c = uStack_210._4_4_;
      (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_48);
      pFVar19 = TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                ::Get<FInstallBundleReport::FStateUpdated>(&this_00->TypedValue);
      (**(code **)(pFVar19->_padding_ + 0x50))(pFVar19,param_1,1);
      (**(code **)((longlong)*param_1 + 0x20))(param_1);
    }
  }
  else if (pFVar23 != (FJsonObject *)0x0) {
    iVar8 = local_228.Data.ArrayNum + -1;
    if (local_228.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((iVar8 == 0xc) &&
       (iVar8 = FGenericPlatformStricmp::Strnicmp
                          (L"StateUpdated",(wchar_t *)local_228.Data.AllocatorInstance.Data,0xc),
       iVar8 == 0)) {
      uVar21 = (ulonglong)(this->State).TypedValue.TypeIndex;
      if ((3 < uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateUpdating>::Destruct) {
        FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this_00);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])();
      }
      (this->State).TypedValue._padding_ = 0;
      (this_00->TypedValue)._padding_ = (longlong)&___7FStateUpdated_FInstallBundleReport__6B_;
      (this->State).TypedValue.TypeIndex = '\x03';
      puVar4 = PTR_FromJson_151c7bb68;
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_218 = pFVar23;
      uStack_210 = pTVar22;
      (*(code *)puVar4)(this_00,&local_218);
    }
  }
  cVar5 = (**(code **)*param_1)(param_1);
  pTVar12 = pTVar22;
  if (cVar5 == '\0') {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
LAB_148bd59fe:
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (param_2 == false) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

// TotalDownloadSize @ 148bdb660

ulong64 __thiscall FInstallBundleReport::TotalDownloadSize(FInstallBundleReport *this)

{
  code *pcVar1;
  bool bVar2;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar3;
  ulong64 uVar4;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar5;
  TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
  *pTVar6;
  
  if ((this->State).bIsSet == false) {
    return 0;
  }
  pTVar5 = (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
            *)0x0;
  pTVar6 = &this->State;
  pTVar3 = pTVar6;
  if ((this->State).TypedValue.TypeIndex != '\0') {
    pTVar3 = pTVar5;
  }
  if (pTVar3 == (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                 *)0x0) {
    pTVar3 = pTVar6;
    if ((this->State).TypedValue.TypeIndex != '\x01') {
      pTVar3 = pTVar5;
    }
    if (pTVar3 == (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                   *)0x0) {
      pTVar3 = pTVar6;
      if ((this->State).TypedValue.TypeIndex != '\x02') {
        pTVar3 = pTVar5;
      }
      if (pTVar3 == (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                     *)0x0) {
        if (((this->State).bIsSet == false) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        if ((this->State).TypedValue.TypeIndex != '\x03') {
          pTVar6 = pTVar5;
        }
        if (pTVar6 == (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                       *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleManagerReporting.cpp"
                             ,0x1f,L"Unsupported state type in TotalDownloadSize()");
          if (!bVar2) {
            return 0;
          }
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        return (pTVar6->TypedValue)._padding_;
      }
    }
  }
  return (pTVar3->TypedValue)._padding_;
}

