// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticStruct @ 1472758b0

UScriptStruct * __cdecl FURL::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FURL.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FURL.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FURL,(UObject *)pUVar1,L"URL");
  }
  return Z_Registration_Info_UScriptStruct_FURL.OuterSingleton;
}

// ~FURL @ 147277810

void __thiscall FURL::~FURL(FURL *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Portal).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(this->Op).AllocatorInstance.Data,(this->Op).ArrayNum);
  pFVar1 = (this->Op).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RedirectURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Map).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Host).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Protocol).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1472785b0

FURL * __thiscall FURL::operator=(FURL *this,FURL *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  ::FString::operator=(&this->Protocol,&param_1->Protocol);
  ::FString::operator=(&this->Host,&param_1->Host);
  this->Port = param_1->Port;
  this->Valid = param_1->Valid;
  ::FString::operator=(&this->Map,&param_1->Map);
  ::FString::operator=(&this->RedirectURL,&param_1->RedirectURL);
  pTVar1 = &this->Op;
  if (pTVar1 != &param_1->Op) {
    DestructItems<FString,int>((FString *)(pTVar1->AllocatorInstance).Data,(this->Op).ArrayNum);
    iVar3 = (param_1->Op).ArrayNum;
    piVar2 = &(this->Op).ArrayMax;
    pFVar4 = (param_1->Op).AllocatorInstance.Data;
    (this->Op).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
    }
  }
  ::FString::operator=(&this->Portal,&param_1->Portal);
  return this;
}

// FURL @ 147bba610

FURL * __thiscall FURL::FURL(FURL *this,FURL *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  ::FString::FString(&this->Protocol,&param_1->Protocol);
  ::FString::FString(&this->Host,&param_1->Host);
  this->Port = param_1->Port;
  this->Valid = param_1->Valid;
  ::FString::FString(&this->Map,&param_1->Map);
  ::FString::FString(&this->RedirectURL,&param_1->RedirectURL);
  pTVar1 = &this->Op;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Op).ArrayMax;
  iVar3 = (param_1->Op).ArrayNum;
  pFVar4 = (param_1->Op).AllocatorInstance.Data;
  (this->Op).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  ::FString::FString(&this->Portal,&param_1->Portal);
  return this;
}

// operator= @ 147faa2a0

FURL * __thiscall FURL::operator=(FURL *this,FURL *param_1)

{
  FString *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  
  if (this != param_1) {
    pFVar4 = (this->Protocol).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Protocol).Data.AllocatorInstance.Data = (param_1->Protocol).Data.AllocatorInstance.Data;
    (param_1->Protocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Protocol).Data.ArrayNum = (param_1->Protocol).Data.ArrayNum;
    (this->Protocol).Data.ArrayMax = (param_1->Protocol).Data.ArrayMax;
    (param_1->Protocol).Data.ArrayNum = 0;
    (param_1->Protocol).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Host;
  pFVar5 = &this->Host;
  if (pFVar5 != pFVar1) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Host).Data.ArrayNum = (param_1->Host).Data.ArrayNum;
    (this->Host).Data.ArrayMax = (param_1->Host).Data.ArrayMax;
    (param_1->Host).Data.ArrayNum = 0;
    (param_1->Host).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Map;
  pFVar5 = &this->Map;
  this->Port = param_1->Port;
  this->Valid = param_1->Valid;
  if (pFVar5 != pFVar1) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Map).Data.ArrayNum = (param_1->Map).Data.ArrayNum;
    (this->Map).Data.ArrayMax = (param_1->Map).Data.ArrayMax;
    (param_1->Map).Data.ArrayNum = 0;
    (param_1->Map).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->RedirectURL;
  pFVar5 = &this->RedirectURL;
  if (pFVar5 != pFVar1) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RedirectURL).Data.ArrayNum = (param_1->RedirectURL).Data.ArrayNum;
    (this->RedirectURL).Data.ArrayMax = (param_1->RedirectURL).Data.ArrayMax;
    (param_1->RedirectURL).Data.ArrayNum = 0;
    (param_1->RedirectURL).Data.ArrayMax = 0;
  }
  pTVar2 = &param_1->Op;
  pTVar3 = &this->Op;
  if (pTVar3 != pTVar2) {
    DestructItems<FString,int>((FString *)(pTVar3->AllocatorInstance).Data,(this->Op).ArrayNum);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Op).ArrayNum = (param_1->Op).ArrayNum;
    (this->Op).ArrayMax = (param_1->Op).ArrayMax;
    (param_1->Op).ArrayNum = 0;
    (param_1->Op).ArrayMax = 0;
  }
  pFVar5 = &param_1->Portal;
  pFVar1 = &this->Portal;
  if (pFVar1 != pFVar5) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Portal).Data.ArrayNum = (param_1->Portal).Data.ArrayNum;
    (this->Portal).Data.ArrayMax = (param_1->Portal).Data.ArrayMax;
    (param_1->Portal).Data.ArrayNum = 0;
    (param_1->Portal).Data.ArrayMax = 0;
  }
  return this;
}

// FURL @ 148907db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FURL * __thiscall FURL::FURL(FURL *this,FURL *param_1,wchar_t *param_2,ETravelType param_3)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FURL *pFVar18;
  size_t sVar19;
  ulong64 uVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  FName *pFVar24;
  FString *pFVar25;
  FModuleManager *pFVar26;
  IModuleInterface *pIVar27;
  longlong *plVar28;
  UClass *this_00;
  FString *pFVar29;
  FURL *pFVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  FAssetData *this_01;
  ForAnyElementType FVar36;
  longlong lVar37;
  wchar_t wVar38;
  FScriptContainerElement *pFVar39;
  ForAnyElementType FVar40;
  FAssetData *pFVar41;
  uint uVar42;
  ForAnyElementType FVar43;
  wchar_t wVar44;
  undefined1 auStackY_558 [32];
  FString local_508;
  wchar_t local_4f8;
  wchar_t *local_4f0;
  FString local_4e8;
  undefined1 local_4d8;
  undefined1 local_4d7 [3];
  int local_4d4;
  ETravelType local_4d0;
  wchar_t *local_4c8;
  FURL *local_4c0;
  wchar_t *local_4b8;
  FAssetData *local_4b0;
  ulonglong local_4a8;
  undefined1 local_4a0 [40];
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FName local_438;
  wchar_t *local_430;
  FTopLevelAssetPath local_428;
  FName local_418;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FText local_3c0 [2];
  int iStack_3a0;
  undefined4 uStack_39c;
  FString local_398;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FName local_368;
  FName local_360;
  FName local_358;
  FName local_350;
  TStringView<wchar_t> local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  TStringView<wchar_t> local_308;
  FString local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FURL local_2d8;
  FURL local_270;
  FURL local_208;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  FSoftObjectPath *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_148;
  void *local_108;
  undefined4 local_100;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  (this->Protocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = UrlConfig.DefaultProtocol.Data.ArrayNum;
  FVar40 = UrlConfig.DefaultProtocol.Data.AllocatorInstance;
  piVar1 = &(this->Protocol).Data.ArrayMax;
  lVar34 = (longlong)UrlConfig.DefaultProtocol.Data.ArrayNum;
  local_4f0 = (wchar_t *)((ulonglong)local_4f0 & 0xffffffff00000000);
  (this->Protocol).Data.ArrayNum = UrlConfig.DefaultProtocol.Data.ArrayNum;
  local_4d0 = param_3;
  local_4c0 = this;
  if (iVar12 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,(ForAnyElementType *)this,iVar12,piVar1);
    memcpy((this->Protocol).Data.AllocatorInstance.Data,FVar40.Data,lVar34 * 2);
  }
  pFVar29 = &this->Host;
  (pFVar29->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = UrlConfig.DefaultHost.Data.ArrayNum;
  FVar40 = UrlConfig.DefaultHost.Data.AllocatorInstance;
  piVar1 = &(this->Host).Data.ArrayMax;
  lVar34 = (longlong)UrlConfig.DefaultHost.Data.ArrayNum;
  (this->Host).Data.ArrayNum = UrlConfig.DefaultHost.Data.ArrayNum;
  if (iVar12 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,(ForAnyElementType *)pFVar29,iVar12,piVar1);
    memcpy((pFVar29->Data).AllocatorInstance.Data,FVar40.Data,lVar34 * 2);
  }
  this->Port = UrlConfig.DefaultPort;
  local_4a0._32_8_ = &this->Map;
  this->Valid = 1;
  UGameMapsSettings::GetGameDefaultMap((FString *)local_4a0._32_8_,Default);
  (this->RedirectURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Portal).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RedirectURL).Data.ArrayNum = 0;
  (this->RedirectURL).Data.ArrayMax = 0;
  pTVar2 = &this->Op;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Portal).Data.ArrayMax;
  (this->Op).ArrayNum = 0;
  iVar12 = UrlConfig.DefaultPortal.Data.ArrayNum;
  FVar40 = UrlConfig.DefaultPortal.Data.AllocatorInstance;
  (this->Op).ArrayMax = 0;
  lVar34 = (longlong)UrlConfig.DefaultPortal.Data.ArrayNum;
  (this->Portal).Data.ArrayNum = UrlConfig.DefaultPortal.Data.ArrayNum;
  if (iVar12 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,(ForAnyElementType *)&this->Portal,iVar12,piVar1);
    memcpy((this->Portal).Data.AllocatorInstance.Data,FVar40.Data,lVar34 * 2);
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextURL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\URL.cpp"
                         ,0x8c,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FURL *)(*pcVar4)();
    return pFVar18;
  }
  if (bDefaultsInitialized == false) {
    FUrlConfig::Init(&UrlConfig);
    bDefaultsInitialized = true;
    iVar12 = UrlConfig.DefaultProtocol.Data.ArrayNum + -1;
    if (UrlConfig.DefaultProtocol.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              (&this->Protocol,(wchar_t *)UrlConfig.DefaultProtocol.Data.AllocatorInstance.Data,
               iVar12);
    iVar12 = UrlConfig.DefaultHost.Data.ArrayNum + -1;
    if (UrlConfig.DefaultHost.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              (&this->Host,(wchar_t *)UrlConfig.DefaultHost.Data.AllocatorInstance.Data,iVar12);
    this->Port = UrlConfig.DefaultPort;
    iVar12 = UrlConfig.DefaultPortal.Data.ArrayNum + -1;
    if (UrlConfig.DefaultPortal.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              (&this->Portal,(wchar_t *)UrlConfig.DefaultPortal.Data.AllocatorInstance.Data,iVar12);
  }
  sVar19 = wcslen(param_2);
  sVar19 = (size_t)(int)sVar19;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = sVar19 + 1;
  uVar20 = SUB168(ZEXT816(2) * auVar5,0);
  if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
    uVar20 = 0xffffffffffffffff;
  }
  local_4f0 = operator_new__(uVar20);
  local_430 = local_4f0;
  wcsncpy(local_4f0,param_2,sVar19);
  pwVar23 = local_430;
  uVar33 = 0;
  local_430[sVar19] = L'\0';
  pFVar18 = this;
  if (local_4d0 == TRAVEL_Relative) {
    if ((param_1 == (FURL *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Base",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\URL.cpp"
                           ,0xa1,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar18 = (FURL *)(*pcVar4)();
      return pFVar18;
    }
    iVar16 = (param_1->Protocol).Data.ArrayNum;
    iVar12 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              (&this->Protocol,(wchar_t *)(param_1->Protocol).Data.AllocatorInstance.Data,iVar12);
    iVar16 = (param_1->Host).Data.ArrayNum;
    iVar12 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              (&this->Host,(wchar_t *)(param_1->Host).Data.AllocatorInstance.Data,iVar12);
    iVar16 = (param_1->Map).Data.ArrayNum;
    iVar12 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange(&this->Map,(wchar_t *)(param_1->Map).Data.AllocatorInstance.Data,iVar12);
    iVar16 = (param_1->Portal).Data.ArrayNum;
    iVar12 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              (&this->Portal,(wchar_t *)(param_1->Portal).Data.AllocatorInstance.Data,iVar12);
    this->Port = param_1->Port;
LAB_148908101:
    if ((param_1 == (FURL *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Base",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\URL.cpp"
                           ,0xaa,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar18 = (FURL *)(*pcVar4)();
      return pFVar18;
    }
    if (0 < (param_1->Op).ArrayNum) {
      do {
        uVar11 = 0;
        if ((int)uVar33 < (param_1->Op).ArrayNum) {
          uVar11 = ~uVar33 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar18 = (FURL *)(*pcVar4)();
          return pFVar18;
        }
        pFVar35 = (pTVar2->AllocatorInstance).Data;
        pFVar39 = (param_1->Op).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10;
        if (((pFVar35 <= pFVar39) && (pFVar39 < pFVar35 + (longlong)(this->Op).ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar18 = (FURL *)(*pcVar4)();
          return pFVar18;
        }
        iVar12 = (this->Op).ArrayNum;
        if (iVar12 == (this->Op).ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,&(this->Op).ArrayMax);
        }
        (this->Op).ArrayNum = iVar12 + 1;
        ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10),
                           (FString *)pFVar39);
        uVar33 = uVar33 + 1;
        pFVar18 = local_4c0;
      } while ((int)uVar33 < (param_1->Op).ArrayNum);
    }
  }
  else if (local_4d0 == TRAVEL_Partial) goto LAB_148908101;
  wVar38 = *pwVar23;
  while (wVar38 == L' ') {
    local_4f0 = pwVar23 + 1;
    pwVar23 = local_4f0;
    wVar38 = *local_4f0;
  }
  pwVar21 = wcschr(pwVar23,L'?');
  pwVar22 = wcschr(pwVar23,L'#');
  if (((pwVar21 != (wchar_t *)0x0) && ((pwVar22 == (wchar_t *)0x0 || (pwVar21 < pwVar22)))) ||
     (pwVar21 = pwVar22, pwVar22 != (wchar_t *)0x0)) {
    wVar38 = *pwVar21;
    *pwVar21 = L'\0';
    local_4f8 = L'\0';
    pwVar21 = pwVar21 + 1;
    wVar44 = L'\0';
    do {
      pwVar23 = wcschr(pwVar21,L'?');
      local_4b8 = wcschr(pwVar21,L'#');
      if (((pwVar23 != (wchar_t *)0x0) && ((local_4b8 == (wchar_t *)0x0 || (pwVar23 < local_4b8))))
         || (pwVar23 = local_4b8, local_4b8 != (wchar_t *)0x0)) {
        local_4f8 = *pwVar23;
        *pwVar23 = L'\0';
        local_4b8 = pwVar23 + 1;
        wVar44 = local_4f8;
      }
      pwVar23 = wcschr(pwVar21,L'?');
      if ((pwVar23 != (wchar_t *)0x0) || (pwVar23 = wcschr(pwVar21,L'#'), pwVar23 != (wchar_t *)0x0)
         ) {
        pFVar30 = FURL(&local_2d8,(wchar_t *)0x0);
        operator=(pFVar18,pFVar30);
        if (local_2d8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Portal.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_2d8.Op.AllocatorInstance.Data,local_2d8.Op.ArrayNum);
        if (local_2d8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Op.AllocatorInstance.Data);
        }
        if (local_2d8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.RedirectURL.Data.AllocatorInstance.Data);
        }
        if (local_2d8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Map.Data.AllocatorInstance.Data);
        }
        if (local_2d8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Host.Data.AllocatorInstance.Data);
        }
        if (local_2d8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Protocol.Data.AllocatorInstance.Data);
        }
        pFVar18->Valid = 0;
        pwVar23 = local_4f0;
        break;
      }
      if (wVar38 == L'?') {
        if ((pwVar21 == (wchar_t *)0x0) || (*pwVar21 != L'-')) {
          AddOption(pFVar18,pwVar21);
          wVar38 = wVar44;
        }
        else {
          local_4c8 = pwVar21 + 1;
          wVar38 = wVar44;
          if (((local_4c8 != (wchar_t *)0x0) && (*local_4c8 != L'\0')) &&
             (uVar33 = (pFVar18->Op).ArrayNum - 1, -1 < (int)uVar33)) {
            lVar34 = (longlong)(int)uVar33 << 4;
            do {
              uVar42 = ~uVar33 >> 0x1f;
              uVar11 = 0;
              if ((int)uVar33 < (this->Op).ArrayNum) {
                uVar11 = uVar42;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                pFVar18 = (FURL *)(*pcVar4)();
                return pFVar18;
              }
              pFVar35 = (pTVar2->AllocatorInstance).Data;
              sVar19 = wcslen(local_4c8);
              iVar16 = *(int *)(pFVar35 + lVar34 + 8);
              iVar12 = iVar16 + -1;
              if (iVar16 == 0) {
                iVar12 = 0;
              }
              if ((int)sVar19 < iVar12) {
                iVar12 = (int)sVar19;
              }
              iVar17 = 0;
              if (0 < iVar12) {
                iVar17 = iVar12;
              }
              if (iVar16 == 0) {
                pwVar23 = L"";
              }
              else {
                pwVar23 = *(wchar_t **)(pFVar35 + lVar34);
              }
              ::FString::ConstructFromPtrSize(&local_410,pwVar23,iVar17);
              FVar40.Data = (FScriptContainerElement *)L"";
              if (local_410.Data.ArrayNum != 0) {
                FVar40.Data = local_410.Data.AllocatorInstance.Data;
              }
              iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar40.Data,local_4c8);
              if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_410.Data.AllocatorInstance.Data);
              }
              if (iVar12 == 0) {
                pFVar24 = ::FName::FName(&local_368,local_4c8);
                bVar8 = FConfigCacheIni::RemoveKeyFromSection
                                  (GConfig,L"DefaultPlayer",*pFVar24,&GGameIni);
                if (bVar8) {
                  FConfigCacheIni::Flush(GConfig,false,&GGameIni);
                }
                uVar11 = 0;
                if ((int)uVar33 < (this->Op).ArrayNum) {
                  uVar11 = uVar42;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  pFVar18 = (FURL *)(*pcVar4)();
                  return pFVar18;
                }
                pFVar35 = (pTVar2->AllocatorInstance).Data + lVar34;
                if (*(void **)pFVar35 != (void *)0x0) {
                  FMemory::Free(*(void **)pFVar35);
                }
                iVar12 = (this->Op).ArrayNum + ~uVar33;
                if (iVar12 != 0) {
                  memmove(pFVar35,pFVar35 + 0x10,(longlong)iVar12 << 4);
                }
                piVar1 = &(this->Op).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,&pTVar2->AllocatorInstance,(this->Op).ArrayNum,
                           &(this->Op).ArrayMax);
              }
              lVar34 = lVar34 + -0x10;
              uVar33 = uVar33 - 1;
              pFVar18 = local_4c0;
              wVar38 = local_4f8;
            } while (-1 < (int)uVar33);
          }
        }
      }
      else {
        ::FString::operator=(&pFVar18->Portal,pwVar21);
        wVar38 = wVar44;
      }
      pwVar21 = local_4b8;
      pwVar23 = local_4f0;
      wVar44 = wVar38;
    } while (local_4b8 != (wchar_t *)0x0);
  }
  bVar8 = false;
  if (pFVar18->Valid == 1) {
    wVar38 = *pwVar23;
    pwVar21 = pwVar23;
    while (wVar38 != L'\0') {
      if ((wVar38 == L':') && ((pwVar21[1] == L'\\' || (pwVar21[1] == L'/')))) {
        sVar19 = wcslen(pwVar21);
        if ((2 < (int)sVar19) && ((pwVar21[2] == L'\\' || (pwVar21[2] == L'/')))) {
          *pwVar21 = L'\0';
          bVar9 = `FURL::FURL'::__l2::<lambda_3>::operator()(&local_4d8,pwVar23);
          pFVar18->Valid = (uint)bVar9;
          if (bVar9 == 1) {
            ::FString::operator=(&pFVar18->Protocol,pwVar23);
            pwVar23 = pwVar21 + 3;
            bVar8 = true;
          }
          break;
        }
      }
      pwVar22 = pwVar21 + 1;
      pwVar21 = pwVar21 + 1;
      wVar38 = *pwVar22;
    }
  }
  if ((pFVar18->Valid == 1) && (pwVar23 != (wchar_t *)0x0)) {
    wVar38 = *pwVar23;
    pwVar21 = pwVar23;
    while (wVar38 != L'\0') {
      if (((wVar38 == L'\\') || (wVar38 == L'/')) &&
         ((wVar38 = pwVar21[1], wVar38 == L'\\' || ((wVar38 == L'/' || (wVar38 == L'?')))))) {
        pFVar18->Valid = 0;
        break;
      }
      pwVar21 = pwVar21 + 1;
      wVar38 = *pwVar21;
    }
  }
  pwVar21 = L"";
  if (pFVar18->Valid == 1) {
    pwVar21 = pwVar23;
  }
  ::FString::FString(&local_508,pwVar21);
  pFVar29 = (FString *)local_4a0._32_8_;
  if (pFVar18->Valid == 1) {
    iVar12 = local_508.Data.ArrayNum + -1;
    if (local_508.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    if (2 < iVar12) {
      if ((*(short *)local_508.Data.AllocatorInstance.Data != 0x5b) &&
         (*(short *)local_508.Data.AllocatorInstance.Data != 0x3a)) {
        iVar12 = local_508.Data.ArrayNum + -1;
        if (local_508.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        if ((iVar12 < 2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          pFVar18 = (FURL *)(*pcVar4)();
          return pFVar18;
        }
        if (*(short *)(local_508.Data.AllocatorInstance.Data + 2) != 0x3a) goto LAB_148908785;
LAB_148908818:
        if (!bVar8) {
          iVar12 = UrlConfig.DefaultProtocol.Data.ArrayNum + -1;
          if (UrlConfig.DefaultProtocol.Data.ArrayNum == 0) {
            iVar12 = 0;
          }
          ::FString::AssignRange
                    (&pFVar18->Protocol,
                     (wchar_t *)UrlConfig.DefaultProtocol.Data.AllocatorInstance.Data,iVar12);
        }
        iVar12 = local_508.Data.ArrayNum + -1;
        if (local_508.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange
                  (&pFVar18->Map,(wchar_t *)local_508.Data.AllocatorInstance.Data,iVar12);
        iVar12 = UrlConfig.DefaultPortal.Data.ArrayNum + -1;
        if (UrlConfig.DefaultPortal.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange
                  (&pFVar18->Portal,(wchar_t *)UrlConfig.DefaultPortal.Data.AllocatorInstance.Data,
                   iVar12);
        ::FString::operator=(&local_508,L"");
        ::FString::operator=(&pFVar18->Host,L"");
        pFVar29 = &pFVar18->Map;
        goto LAB_148909298;
      }
LAB_148908785:
      iVar12 = local_508.Data.ArrayNum + -1;
      if (local_508.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      if ((iVar12 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar18 = (FURL *)(*pcVar4)();
        return pFVar18;
      }
      if (*(short *)local_508.Data.AllocatorInstance.Data == 0x2f) {
        iStack_3a0 = local_508.Data.ArrayNum + -1;
        if (local_508.Data.ArrayNum == 0) {
          iStack_3a0 = 0;
        }
        local_348._12_4_ = uStack_39c;
        local_348.Size = iStack_3a0;
        bVar9 = FPackageName::IsValidLongPackageName(&local_348,true,(EErrorCode *)0x0);
        if (!bVar9) goto LAB_148908818;
      }
    }
    pFVar35 = local_508.Data.AllocatorInstance.Data + (longlong)local_508.Data.ArrayNum * 2;
    for (FVar40.Data = local_508.Data.AllocatorInstance.Data;
        FVar36.Data = local_508.Data.AllocatorInstance.Data,
        FVar43.Data = local_508.Data.AllocatorInstance.Data, FVar40.Data != pFVar35;
        FVar40.Data = FVar40.Data + 2) {
      if (*(short *)FVar40.Data == 0x3a) {
        lVar34 = (longlong)FVar40.Data - (longlong)local_508.Data.AllocatorInstance.Data >> 1;
        goto LAB_1489088f0;
      }
    }
    lVar34 = 0xffffffff;
    for (; FVar36.Data != pFVar35; FVar36.Data = FVar36.Data + 2) {
LAB_1489088f0:
      if (*(short *)FVar36.Data == 0x2e) {
        lVar37 = (longlong)FVar36.Data - (longlong)local_508.Data.AllocatorInstance.Data >> 1;
        goto LAB_148908910;
      }
    }
    iVar16 = (int)lVar34;
    lVar37 = 0xffffffff;
    iVar12 = -1;
    for (; FVar43.Data != pFVar35; FVar43.Data = FVar43.Data + 2) {
LAB_148908910:
      iVar16 = (int)lVar34;
      iVar12 = (int)lVar37;
      if (*(short *)FVar43.Data == 0x5b) {
        iVar17 = (int)((longlong)FVar43.Data - (longlong)local_508.Data.AllocatorInstance.Data >> 1)
        ;
        goto joined_r0x00014890892a;
      }
    }
    iVar17 = -1;
joined_r0x00014890892a:
    do {
      if (pFVar35 == local_508.Data.AllocatorInstance.Data) {
        iVar14 = -1;
        goto LAB_148908941;
      }
      pFVar35 = pFVar35 + -2;
    } while (*(short *)pFVar35 != 0x3a);
    iVar14 = (int)((longlong)pFVar35 - (longlong)local_508.Data.AllocatorInstance.Data >> 1);
LAB_148908941:
    iVar13 = ::FString::Find(&local_508,L":",1,CaseSensitive,FromStart,iVar16 + 1);
    if ((((iVar16 == -1) || (iVar14 == -1)) || (iVar16 == iVar14)) || (iVar13 == iVar14)) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    local_4f8 = CONCAT11(local_4f8._1_1_,cVar10);
    if ((((!bVar8) && (1 < iVar16)) &&
        ((((iVar17 == -1 && (cVar10 == '\0')) || (iVar16 < iVar17)) ||
         ((cVar10 != '\0' &&
          (pwVar23 = ::FString::operator[](&local_508,iVar16 + 1), *pwVar23 == L'/')))))) &&
       ((iVar12 == -1 || (iVar16 < iVar12)))) {
      iVar12 = local_508.Data.ArrayNum + -1;
      if (local_508.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      if (iVar16 < iVar12) {
        iVar12 = iVar16;
      }
      iVar14 = 0;
      if (0 < iVar12) {
        iVar14 = iVar12;
      }
      FVar40.Data = (FScriptContainerElement *)L"";
      if (local_508.Data.ArrayNum != 0) {
        FVar40.Data = local_508.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize((FString *)local_4a0,(wchar_t *)FVar40.Data,iVar14);
      if (pFVar18 != (FURL *)local_4a0) {
        pFVar35 = (pFVar18->Protocol).Data.AllocatorInstance.Data;
        if (pFVar35 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar35);
        }
        (pFVar18->Protocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_4a0._0_8_
        ;
        (pFVar18->Protocol).Data.ArrayNum = local_4a0._8_4_;
        (pFVar18->Protocol).Data.ArrayMax = local_4a0._12_4_;
        local_4a0._8_4_ = 0;
        local_4a0._12_4_ = 0;
        local_4a0._0_8_ = (FScriptContainerElement *)0x0;
      }
      if ((FScriptContainerElement *)local_4a0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4a0._0_8_);
      }
      ::FString::RightChop(&local_508,&local_448,iVar16 + 1);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      local_508.Data.AllocatorInstance.Data = local_448.Data.AllocatorInstance.Data;
      local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_508.Data.ArrayNum = local_448.Data.ArrayNum;
      local_508.Data.ArrayMax = local_448.Data.ArrayMax;
      local_448.Data.ArrayNum = 0;
      local_448.Data.ArrayMax = 0;
    }
    iVar12 = local_508.Data.ArrayNum + -1;
    if (local_508.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    if (((1 < iVar12) && (*(short *)local_508.Data.AllocatorInstance.Data == 0x2f)) &&
       (*(short *)(local_508.Data.AllocatorInstance.Data + 2) == 0x2f)) {
      ::FString::RightChop(&local_508,&local_478,2);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      local_508.Data.AllocatorInstance.Data = local_478.Data.AllocatorInstance.Data;
      local_508.Data.ArrayNum = local_478.Data.ArrayNum;
      local_508.Data.ArrayMax = local_478.Data.ArrayMax;
      local_478.Data.ArrayNum = 0;
      local_478.Data.ArrayMax = 0;
      local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::operator=(&pFVar18->Host,L"");
    }
    for (FVar40.Data = local_508.Data.AllocatorInstance.Data;
        FVar43.Data = local_508.Data.AllocatorInstance.Data,
        FVar40.Data != local_508.Data.AllocatorInstance.Data + (longlong)local_508.Data.ArrayNum * 2
        ; FVar40.Data = FVar40.Data + 2) {
      if (*(short *)FVar40.Data == 0x2e) {
        lVar34 = (longlong)FVar40.Data - (longlong)local_508.Data.AllocatorInstance.Data >> 1;
        local_4d4 = (int)lVar34;
        goto LAB_148908b80;
      }
    }
    lVar34 = 0xffffffff;
    iVar12 = -1;
    local_4d4 = -1;
    for (; FVar43.Data !=
           local_508.Data.AllocatorInstance.Data + (longlong)local_508.Data.ArrayNum * 2;
        FVar43.Data = FVar43.Data + 2) {
LAB_148908b80:
      iVar12 = (int)lVar34;
      if (*(short *)FVar43.Data == 0x3a) {
        iVar16 = (int)((longlong)FVar43.Data - (longlong)local_508.Data.AllocatorInstance.Data >> 1)
        ;
        goto LAB_148908b94;
      }
    }
    iVar16 = -1;
LAB_148908b94:
    pFVar29 = FPackageName::GetMapPackageExtension();
    iVar14 = (pFVar29->Data).ArrayNum;
    if (iVar14 == 0) {
      pwVar23 = L"";
      iVar14 = 0;
    }
    else {
      pwVar23 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      iVar14 = iVar14 + -1;
    }
    iVar14 = ::FString::Find(&local_508,pwVar23,iVar14,IgnoreCase,FromStart,-1);
    local_4b8 = (wchar_t *)CONCAT44(local_4b8._4_4_,iVar14);
    pFVar29 = FPackageName::GetMapPackageExtension();
    pwVar23 = L"";
    if (UrlConfig.DefaultSaveExt.Data.ArrayNum != 0) {
      pwVar23 = (wchar_t *)UrlConfig.DefaultSaveExt.Data.AllocatorInstance;
    }
    iVar14 = (pFVar29->Data).ArrayNum;
    iVar13 = UrlConfig.DefaultSaveExt.Data.ArrayNum + -1;
    if (UrlConfig.DefaultSaveExt.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    iVar15 = ::FString::Find(&local_508,pwVar23,iVar13,IgnoreCase,FromStart,-1);
    iVar13 = UrlConfig.DefaultSaveExt.Data.ArrayNum;
    local_4c8 = (wchar_t *)CONCAT44(local_4c8._4_4_,iVar15);
    iVar15 = ::FString::Find(&local_508,L"demo",4,IgnoreCase,FromStart,-1);
    local_4f0 = (wchar_t *)CONCAT44(local_4f0._4_4_,iVar15);
    pFVar35 = local_508.Data.AllocatorInstance.Data + (longlong)local_508.Data.ArrayNum * 2;
    do {
      if (pFVar35 == local_508.Data.AllocatorInstance.Data) {
        iVar15 = -1;
        goto LAB_148908c8a;
      }
      pFVar35 = pFVar35 + -2;
    } while (*(short *)pFVar35 != 0x3a);
    iVar15 = (int)((longlong)pFVar35 - (longlong)local_508.Data.AllocatorInstance.Data >> 1);
LAB_148908c8a:
    if (iVar12 < 1) {
LAB_148908d7a:
      if ((iVar17 == -1) &&
         (((iVar16 == -1 || (iVar16 != iVar15)) &&
          (pFVar29 = (FString *)local_4a0._32_8_, (char)local_4f8 == '\0')))) goto LAB_148909298;
    }
    else {
      if (iVar12 == (int)local_4b8) {
        iVar31 = iVar14 + -1 + iVar12;
        if (iVar14 == 0) {
          iVar31 = iVar12;
        }
        if (-1 < iVar31) {
          iVar14 = local_508.Data.ArrayNum + -1;
          if (local_508.Data.ArrayNum == 0) {
            iVar14 = 0;
          }
          if ((iVar31 < iVar14) &&
             (iVar14 = iswalnum(*(wint_t *)
                                 (local_508.Data.AllocatorInstance.Data + (longlong)iVar31 * 2)),
             iVar14 != 0)) goto LAB_148908ce4;
        }
        goto LAB_148908d7a;
      }
LAB_148908ce4:
      if (iVar12 + 1 == (int)local_4c8) {
        iVar14 = iVar13 + -1 + iVar12;
        if (iVar13 == 0) {
          iVar14 = iVar12;
        }
        if (-1 < iVar14 + 1) {
          iVar13 = local_508.Data.ArrayNum + -1;
          if (local_508.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          if ((iVar14 + 1 < iVar13) &&
             (iVar14 = iswalnum(*(wint_t *)
                                 (local_508.Data.AllocatorInstance.Data + (longlong)iVar14 * 2 + 2))
             , iVar14 != 0)) goto LAB_148908d42;
        }
        goto LAB_148908d7a;
      }
LAB_148908d42:
      if (iVar12 + 1 == (int)local_4f0) {
        if (-1 < iVar12 + 5) {
          iVar14 = local_508.Data.ArrayNum + -1;
          if (local_508.Data.ArrayNum == 0) {
            iVar14 = 0;
          }
          if ((iVar12 + 5 < iVar14) &&
             (iVar12 = iswalnum(*(wint_t *)
                                 (local_508.Data.AllocatorInstance.Data +
                                 (longlong)local_4d4 * 2 + 10)), iVar12 != 0)) goto LAB_148908d95;
        }
        goto LAB_148908d7a;
      }
    }
LAB_148908d95:
    FVar43.Data = local_508.Data.AllocatorInstance.Data;
    lVar34 = (longlong)local_508.Data.ArrayNum;
    for (FVar40.Data = local_508.Data.AllocatorInstance.Data;
        FVar40.Data != local_508.Data.AllocatorInstance.Data + lVar34 * 2;
        FVar40.Data = FVar40.Data + 2) {
      if (*(short *)FVar40.Data == 0x2f) {
        iVar12 = (int)((longlong)FVar40.Data - (longlong)local_508.Data.AllocatorInstance.Data >> 1)
        ;
        if (iVar12 == -1) goto LAB_148908dbc;
        iVar16 = local_508.Data.ArrayNum + -1;
        if (local_508.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        if (iVar12 < iVar16) {
          iVar16 = iVar12;
        }
        iVar17 = 0;
        if (0 < iVar16) {
          iVar17 = iVar16;
        }
        FVar40.Data = (FScriptContainerElement *)L"";
        if (local_508.Data.ArrayNum != 0) {
          FVar40.Data = local_508.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_400,(wchar_t *)FVar40.Data,iVar17);
        pFVar29 = &local_400;
        bVar9 = true;
        bVar8 = false;
        local_4e8.Data.AllocatorInstance.Data = local_400.Data.AllocatorInstance.Data;
        goto LAB_148908e83;
      }
    }
    iVar12 = -1;
LAB_148908dbc:
    local_4a0._24_4_ = local_508.Data.ArrayNum;
    local_4a0._16_8_ = (FScriptContainerElement *)0x0;
    if (local_508.Data.ArrayNum == 0) {
      local_4a0._28_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_508.Data.ArrayNum,0,(ForAnyElementType *)(local_4a0 + 0x10),
                 local_508.Data.ArrayNum,(int *)(local_4a0 + 0x1c));
      memcpy((void *)local_4a0._16_8_,FVar43.Data,lVar34 * 2);
    }
    pFVar29 = (FString *)(local_4a0 + 0x10);
    bVar9 = false;
    bVar8 = true;
    local_4e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_4a0._16_8_;
LAB_148908e83:
    iVar16 = 0;
    (pFVar29->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e8.Data.ArrayNum = (pFVar29->Data).ArrayNum;
    local_4e8.Data.ArrayMax = (pFVar29->Data).ArrayMax;
    (pFVar29->Data).ArrayNum = 0;
    (pFVar29->Data).ArrayMax = 0;
    if ((bVar8) && ((FScriptContainerElement *)local_4a0._16_8_ != (FScriptContainerElement *)0x0))
    {
      FMemory::Free((void *)local_4a0._16_8_);
    }
    if ((bVar9) && (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    if (iVar12 == -1) {
      bVar9 = false;
      bVar8 = true;
      pFVar29 = ::FString::FString(&local_338,L"");
      bVar6 = true;
      bVar7 = false;
      if (&local_508 != pFVar29) goto LAB_148908f13;
    }
    else {
      ::FString::RightChop(&local_508,&local_398,iVar12);
      pFVar29 = &local_398;
      bVar6 = false;
      bVar7 = true;
LAB_148908f13:
      bVar9 = bVar7;
      bVar8 = bVar6;
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      local_508.Data.AllocatorInstance.Data = (pFVar29->Data).AllocatorInstance.Data;
      (pFVar29->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_508.Data.ArrayNum = (pFVar29->Data).ArrayNum;
      local_508.Data.ArrayMax = (pFVar29->Data).ArrayMax;
      (pFVar29->Data).ArrayNum = 0;
      (pFVar29->Data).ArrayMax = 0;
    }
    if ((bVar8) && (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if ((bVar9) && (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    pFVar18 = local_4c0;
    if ((local_4d0 != TRAVEL_Relative) || ((local_4c0->Host).Data.ArrayNum < 2)) {
      for (FVar40.Data = local_4e8.Data.AllocatorInstance.Data;
          FVar40.Data !=
          local_4e8.Data.AllocatorInstance.Data + (longlong)local_4e8.Data.ArrayNum * 2;
          FVar40.Data = FVar40.Data + 2) {
        if (*(wchar_t *)FVar40.Data == L']') {
          iVar12 = (int)((longlong)FVar40.Data - (longlong)local_4e8.Data.AllocatorInstance.Data >>
                        1);
          goto LAB_148908fb8;
        }
      }
      iVar12 = -1;
LAB_148908fb8:
      iVar17 = 0;
      if (0 < iVar12) {
        iVar17 = iVar12;
      }
      ::FString::FString(&local_3f0,":");
      iVar14 = local_3f0.Data.ArrayNum + -1;
      FVar40.Data = local_3f0.Data.AllocatorInstance.Data;
      if (local_3f0.Data.ArrayNum == 0) {
        iVar14 = iVar16;
        FVar40.Data = (FScriptContainerElement *)L"";
      }
      iVar17 = ::FString::Find(&local_4e8,(wchar_t *)FVar40.Data,iVar14,CaseSensitive,FromStart,
                               iVar17);
      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_3e0,":");
      iVar14 = local_3e0.Data.ArrayNum + -1;
      FVar40.Data = local_3e0.Data.AllocatorInstance.Data;
      if (local_3e0.Data.ArrayNum == 0) {
        iVar14 = iVar16;
        FVar40.Data = (FScriptContainerElement *)L"";
      }
      iVar14 = ::FString::Find(&local_4e8,(wchar_t *)FVar40.Data,iVar14,CaseSensitive,FromStart,
                               iVar17 + 1);
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      if ((iVar17 != -1) && ((iVar12 != -1 || (iVar14 == -1)))) {
        ::FString::RightChop(&local_4e8,&local_3d0,iVar17 + 1);
        FVar40.Data = (FScriptContainerElement *)L"";
        if (local_3d0.Data.ArrayNum != 0) {
          FVar40.Data = local_3d0.Data.AllocatorInstance.Data;
        }
        iVar14 = _wtoi((wchar_t *)FVar40.Data);
        pFVar18->Port = iVar14;
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
        iVar14 = local_4e8.Data.ArrayNum + -1;
        if (local_4e8.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        if (iVar17 < iVar14) {
          iVar14 = iVar17;
        }
        iVar17 = 0;
        if (0 < iVar14) {
          iVar17 = iVar14;
        }
        FVar40.Data = (FScriptContainerElement *)L"";
        if (local_4e8.Data.ArrayNum != 0) {
          FVar40.Data = local_4e8.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_468,(wchar_t *)FVar40.Data,iVar17);
        if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
        }
        local_4e8.Data.AllocatorInstance.Data = local_468.Data.AllocatorInstance.Data;
        local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4e8.Data.ArrayNum = local_468.Data.ArrayNum;
        local_4e8.Data.ArrayMax = local_468.Data.ArrayMax;
        local_468.Data.ArrayNum = 0;
        local_468.Data.ArrayMax = 0;
      }
      for (FVar40.Data = local_4e8.Data.AllocatorInstance.Data;
          FVar40.Data !=
          local_4e8.Data.AllocatorInstance.Data + (longlong)local_4e8.Data.ArrayNum * 2;
          FVar40.Data = FVar40.Data + 2) {
        if (*(wchar_t *)FVar40.Data == L'[') {
          iVar17 = (int)((longlong)FVar40.Data - (longlong)local_4e8.Data.AllocatorInstance.Data >>
                        1);
          if ((iVar17 != -1) && (iVar12 != -1)) {
            pFVar25 = ::FString::Mid(&local_4e8,&local_328,iVar17 + 1,(iVar12 - iVar17) + -1);
            pFVar29 = &pFVar18->Host;
            if (pFVar29 != pFVar25) {
              pFVar35 = (pFVar29->Data).AllocatorInstance.Data;
              if (pFVar35 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar35);
              }
              (pFVar29->Data).AllocatorInstance.Data = (pFVar25->Data).AllocatorInstance.Data;
              (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar18->Host).Data.ArrayNum = (pFVar25->Data).ArrayNum;
              (pFVar18->Host).Data.ArrayMax = (pFVar25->Data).ArrayMax;
              (pFVar25->Data).ArrayNum = 0;
              (pFVar25->Data).ArrayMax = 0;
            }
            if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Data.AllocatorInstance.Data);
            }
            goto LAB_148909166;
          }
          break;
        }
      }
      iVar12 = local_4e8.Data.ArrayNum + -1;
      if (local_4e8.Data.ArrayNum == 0) {
        iVar12 = iVar16;
      }
      ::FString::AssignRange(&pFVar18->Host,(wchar_t *)local_4e8.Data.AllocatorInstance.Data,iVar12)
      ;
    }
LAB_148909166:
    pwVar23 = L"";
    if (UrlConfig.DefaultProtocol.Data.ArrayNum != 0) {
      pwVar23 = (wchar_t *)UrlConfig.DefaultProtocol.Data.AllocatorInstance.Data;
    }
    if ((pFVar18->Protocol).Data.ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar18->Protocol).Data.AllocatorInstance.Data;
    }
    pFVar29 = &pFVar18->Map;
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar21,pwVar23);
    if (iVar12 == 0) {
      pFVar25 = UGameMapsSettings::GetGameDefaultMap(&local_318,Default);
      if (pFVar29 != pFVar25) {
        pFVar35 = (pFVar29->Data).AllocatorInstance.Data;
        if (pFVar35 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar35);
        }
        (pFVar29->Data).AllocatorInstance.Data = (pFVar25->Data).AllocatorInstance.Data;
        (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar18->Map).Data.ArrayNum = (pFVar25->Data).ArrayNum;
        (pFVar18->Map).Data.ArrayMax = (pFVar25->Data).ArrayMax;
        (pFVar25->Data).ArrayNum = 0;
        (pFVar25->Data).ArrayMax = 0;
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::operator=(pFVar29,L"");
    }
    pFVar29 = (FString *)local_4a0._32_8_;
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      pFVar29 = (FString *)local_4a0._32_8_;
    }
  }
LAB_148909298:
  pFVar18 = local_4c0;
  if (local_4c0->Valid != 1) goto LAB_148909ad3;
  iVar12 = local_508.Data.ArrayNum + -1;
  if (local_508.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  if (0 < iVar12) {
    iVar12 = 0;
    if (*(short *)local_508.Data.AllocatorInstance.Data == 0x2f) {
      iVar16 = local_508.Data.ArrayNum + -1;
      if (local_508.Data.ArrayNum == 0) {
        iVar16 = iVar12;
      }
      ::FString::AssignRange(pFVar29,(wchar_t *)local_508.Data.AllocatorInstance.Data,iVar16);
    }
    else {
      local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_458.Data.ArrayNum = 0;
      local_458.Data.ArrayMax = 0;
      FText::FText(local_3c0);
      bVar8 = false;
      bVar9 = FPaths::FileExists(&local_508);
      if ((bVar9) &&
         (bVar9 = FPackageName::TryConvertFilenameToLongPackageName
                            (&local_508,&local_458,(FString *)0x0,None), bVar9)) {
        iVar16 = local_458.Data.ArrayNum + -1;
        if (local_458.Data.ArrayNum == 0) {
          iVar16 = iVar12;
        }
        ::FString::AssignRange(pFVar29,(wchar_t *)local_458.Data.AllocatorInstance.Data,iVar16);
      }
      else {
        local_388 = local_508.Data.AllocatorInstance.Data;
        iStack_380 = local_508.Data.ArrayNum + -1;
        if (local_508.Data.ArrayNum == 0) {
          iStack_380 = iVar12;
        }
        local_308._12_4_ = uStack_37c;
        local_308.Size = iStack_380;
        local_308.DataPtr = (wchar_t *)local_508.Data.AllocatorInstance.Data;
        bVar9 = FPackageName::DoesPackageNameContainInvalidCharacters(&local_308,local_3c0);
        if (!bVar9) {
          pFVar26 = FModuleManager::Get();
          pFVar24 = ::FName::FName(&local_360,"AssetRegistry");
          bVar9 = FModuleManager::IsModuleLoaded(pFVar26,*pFVar24);
          if (bVar9) {
            FModuleManager::Get();
            pFVar24 = ::FName::FName(&local_358,"AssetRegistry");
            FVar3 = *pFVar24;
            pFVar26 = FModuleManager::Get();
            pIVar27 = FModuleManager::LoadModuleChecked(pFVar26,FVar3);
            plVar28 = (longlong *)(**(code **)((longlong)*pIVar27 + 0x40))(pIVar27);
            cVar10 = (**(code **)(*plVar28 + 0x388))(plVar28);
            if (cVar10 == '\0') {
              local_4b0 = (FAssetData *)0x0;
              local_148._48_4_ = 0xffffffff;
              local_f8._48_4_ = 0xffffffff;
              local_a8._48_4_ = 0xffffffff;
              local_4a8 = 0;
              local_198 = (void *)0x0;
              local_190 = 0;
              local_188 = (void *)0x0;
              local_180 = 0;
              local_178 = (FSoftObjectPath *)0x0;
              local_170 = 0;
              local_168 = (void *)0x0;
              local_160 = 0;
              local_158.Data = (FScriptContainerElement *)0x0;
              local_150 = 0;
              local_148._0_8_ = 0;
              local_148._8_8_ = 0;
              local_148._32_8_ = 0;
              local_148._40_4_ = 0;
              local_148._44_4_ = 0x80;
              local_148._52_4_ = 0;
              local_108 = (void *)0x0;
              local_100 = 0;
              local_f8._0_8_ = 0;
              local_f8._8_8_ = 0;
              local_f8._32_8_ = 0;
              local_f8._40_4_ = 0;
              local_f8._44_4_ = 0x80;
              local_f8._52_4_ = 0;
              local_b8 = (void *)0x0;
              local_b0 = 0;
              local_a8._0_8_ = 0;
              local_a8._8_8_ = 0;
              local_a8._32_8_ = 0;
              local_a8._40_4_ = 0;
              local_a8._44_4_ = 0x80;
              local_a8._52_4_ = 0;
              local_68 = (void *)0x0;
              local_60 = 0;
              local_58 = 0;
              local_56 = 0;
              local_54 = 0;
              this_00 = Z_Construct_UClass_UWorld_NoRegister();
              UStruct::GetStructPathName((UStruct *)this_00,&local_428);
              if (((local_158.Data <= &local_428) &&
                  (&local_428 <
                   (FTopLevelAssetPath *)(local_158.Data + (longlong)local_150._4_4_ * 0x10))) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                pFVar18 = (FURL *)(*pcVar4)();
                return pFVar18;
              }
              iVar12 = (int)local_150;
              if ((int)local_150 == local_150._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&local_158,(int *)((longlong)&local_150 + 4));
              }
              local_150 = CONCAT44(local_150._4_4_,iVar12 + 1);
              pFVar35 = local_158.Data + (longlong)iVar12 * 0x10;
              *(uint *)pFVar35 = local_428.PackageName.ComparisonIndex.Value;
              *(uint *)(pFVar35 + 4) = local_428.PackageName.Number;
              *(uint *)(pFVar35 + 8) = local_428.AssetName.ComparisonIndex.Value;
              *(uint *)(pFVar35 + 0xc) = local_428.AssetName.Number;
              local_54 = CONCAT44(local_54._4_4_,0x8100000);
              cVar10 = (**(code **)(*plVar28 + 0x50))(plVar28,&local_198,&local_4b0,1);
              if (cVar10 != '\0') {
                FVar40.Data = (FScriptContainerElement *)L"";
                if (local_508.Data.ArrayNum != 0) {
                  FVar40.Data = local_508.Data.AllocatorInstance.Data;
                }
                ::FName::FName(&local_418,(wchar_t *)FVar40.Data);
                iVar12 = (int)local_4a8;
                uVar32 = (ulonglong)(int)local_4a8;
                pFVar41 = local_4b0 + uVar32;
                this_01 = local_4b0;
                while( true ) {
                  if ((int)uVar32 != iVar12) {
                    `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_4d7);
                    uVar32 = local_4a8 & 0xffffffff;
                  }
                  if (this_01 == pFVar41) goto LAB_1489096be;
                  if (this_01->AssetName == local_418) break;
                  this_01 = this_01 + 1;
                }
                pFVar29 = ::FName::ToString(&this_01->PackageName,&local_2f8);
                ::FString::operator=(&pFVar18->Map,pFVar29);
                if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                }
                bVar8 = true;
              }
LAB_1489096be:
              local_60 = 0;
              if (local_68 != (void *)0x0) {
                FMemory::Free(local_68);
              }
              TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_a8);
              local_b0 = 0;
              if (local_b8 != (void *)0x0) {
                FMemory::Free(local_b8);
              }
              TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_f8);
              local_100 = 0;
              if (local_108 != (void *)0x0) {
                FMemory::Free(local_108);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_148);
              if ((FTopLevelAssetPath *)local_158.Data != (FTopLevelAssetPath *)0x0) {
                FMemory::Free(local_158.Data);
              }
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
              }
              DestructItems<FSoftObjectPath,int>(local_178,(int)local_170);
              if (local_178 != (FSoftObjectPath *)0x0) {
                FMemory::Free(local_178);
              }
              if (local_188 != (void *)0x0) {
                FMemory::Free(local_188);
              }
              if (local_198 != (void *)0x0) {
                FMemory::Free(local_198);
              }
              DestructItems<FAssetData,int>(local_4b0,(int)local_4a8);
              if (local_4b0 != (FAssetData *)0x0) {
                FMemory::Free(local_4b0);
              }
              if (bVar8) goto LAB_148909935;
            }
          }
          pFVar24 = ::FName::FName(&local_350,L"AssetRegistry");
          FVar3 = *pFVar24;
          pFVar26 = FModuleManager::Get();
          pIVar27 = FModuleManager::LoadModuleChecked(pFVar26,FVar3);
          plVar28 = (longlong *)(**(code **)((longlong)*pIVar27 + 0x40))(pIVar27);
          local_378 = local_508.Data.AllocatorInstance.Data;
          pFVar35 = local_378;
          iStack_370 = local_508.Data.ArrayNum + -1;
          if (local_508.Data.ArrayNum == 0) {
            iStack_370 = 0;
          }
          local_378._0_4_ = SUB84(local_508.Data.AllocatorInstance.Data,0);
          local_378._4_4_ = (undefined4)((ulonglong)local_508.Data.AllocatorInstance.Data >> 0x20);
          local_2e8 = (undefined4)local_378;
          uStack_2e4 = local_378._4_4_;
          uStack_2dc = uStack_36c;
          local_378 = pFVar35;
          iStack_2e0 = iStack_370;
          (**(code **)(*plVar28 + 0xc0))(plVar28,&local_438,&local_2e8);
          if (local_438 != (FName)0x0) {
            ::FName::ToString(&local_438,&pFVar18->Map);
            goto LAB_148909935;
          }
        }
        if (2 < (byte)LogLongPackageNames._0_1_) {
          FText::ToString(local_3c0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLongPackageNames);
        }
        pFVar30 = FURL(&local_270,(wchar_t *)0x0);
        operator=(pFVar18,pFVar30);
        if (local_270.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Portal.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_270.Op.AllocatorInstance.Data,local_270.Op.ArrayNum);
        if (local_270.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Op.AllocatorInstance.Data);
        }
        if (local_270.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.RedirectURL.Data.AllocatorInstance.Data);
        }
        if (local_270.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Map.Data.AllocatorInstance.Data);
        }
        if (local_270.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Host.Data.AllocatorInstance.Data);
        }
        if (local_270.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Protocol.Data.AllocatorInstance.Data);
        }
        pFVar18->Valid = 0;
      }
LAB_148909935:
      if (local_3c0[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c0[0].TextData.Reference + 0x10))();
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
    }
  }
  if (pFVar18->Valid == 1) {
    pwVar23 = L"";
    if ((pFVar18->Protocol).Data.ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar18->Protocol).Data.AllocatorInstance.Data;
    }
    iVar12 = iswalpha(*pwVar21);
    if (iVar12 != 0) {
      wVar38 = *pwVar21;
      while (wVar38 != L'\0') {
        iVar12 = iswalnum(wVar38);
        if (((iVar12 == 0) && (wVar38 = *pwVar21, wVar38 != L'-')) &&
           ((wVar38 != L'+' && (wVar38 != L'.')))) goto LAB_148909a3c;
        pFVar35 = (FScriptContainerElement *)((longlong)pwVar21 + 2);
        pwVar21 = (wchar_t *)((longlong)pwVar21 + 2);
        wVar38 = *(wchar_t *)pFVar35;
      }
      if ((pFVar18->Host).Data.ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar18->Host).Data.AllocatorInstance.Data;
      }
      pwVar22 = wcschr(pwVar21,L'?');
      if ((pwVar22 == (wchar_t *)0x0) && (pwVar21 = wcschr(pwVar21,L'#'), pwVar21 == (wchar_t *)0x0)
         ) {
        if ((pFVar18->Portal).Data.ArrayNum != 0) {
          pwVar23 = (wchar_t *)(pFVar18->Portal).Data.AllocatorInstance.Data;
        }
        pwVar21 = wcschr(pwVar23,L'?');
        if ((pwVar21 == (wchar_t *)0x0) &&
           (pwVar23 = wcschr(pwVar23,L'#'), pwVar23 == (wchar_t *)0x0)) goto LAB_148909ad3;
      }
    }
LAB_148909a3c:
    pFVar30 = FURL(&local_208,(wchar_t *)0x0);
    operator=(pFVar18,pFVar30);
    if (local_208.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_208.Op.AllocatorInstance.Data,local_208.Op.ArrayNum)
    ;
    if (local_208.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Op.AllocatorInstance.Data);
    }
    if (local_208.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_208.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Map.Data.AllocatorInstance.Data);
    }
    if (local_208.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Host.Data.AllocatorInstance.Data);
    }
    if (local_208.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Protocol.Data.AllocatorInstance.Data);
    }
    pFVar18->Valid = 0;
  }
LAB_148909ad3:
  operator_delete__(local_430);
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  return pFVar18;
}

// FURL @ 148909b20

FURL * __thiscall FURL::FURL(FURL *this,wchar_t *param_1)

{
  int *piVar1;
  FString *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  size_t sVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  piVar1 = &(this->Protocol).Data.ArrayMax;
  (this->Protocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = UrlConfig.DefaultProtocol.Data.ArrayNum;
  FVar7 = UrlConfig.DefaultProtocol.Data.AllocatorInstance;
  lVar8 = (longlong)UrlConfig.DefaultProtocol.Data.ArrayNum;
  (this->Protocol).Data.ArrayNum = UrlConfig.DefaultProtocol.Data.ArrayNum;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Protocol).Data.AllocatorInstance.Data,FVar7.Data,lVar8 * 2);
  }
  pFVar6 = &this->Host;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = UrlConfig.DefaultHost.Data.ArrayNum;
  FVar7 = UrlConfig.DefaultHost.Data.AllocatorInstance;
  piVar1 = &(this->Host).Data.ArrayMax;
  lVar8 = (longlong)UrlConfig.DefaultHost.Data.ArrayNum;
  (this->Host).Data.ArrayNum = UrlConfig.DefaultHost.Data.ArrayNum;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar6,iVar3,piVar1);
    memcpy((pFVar6->Data).AllocatorInstance.Data,FVar7.Data,lVar8 * 2);
  }
  pFVar6 = &this->Portal;
  this->Port = UrlConfig.DefaultPort;
  this_00 = &this->Map;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Portal).Data.ArrayMax;
  (this->Map).Data.ArrayNum = 0;
  (this->Map).Data.ArrayMax = 0;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Valid = 1;
  (this->RedirectURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RedirectURL).Data.ArrayNum = 0;
  (this->RedirectURL).Data.ArrayMax = 0;
  (this->Op).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Op).ArrayNum = 0;
  iVar3 = UrlConfig.DefaultPortal.Data.ArrayNum;
  FVar7 = UrlConfig.DefaultPortal.Data.AllocatorInstance;
  (this->Op).ArrayMax = 0;
  lVar8 = (longlong)UrlConfig.DefaultPortal.Data.ArrayNum;
  (this->Portal).Data.ArrayNum = UrlConfig.DefaultPortal.Data.ArrayNum;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar6,iVar3,piVar1);
    memcpy((pFVar6->Data).AllocatorInstance.Data,FVar7.Data,lVar8 * 2);
  }
  if (param_1 == (wchar_t *)0x0) {
    pFVar6 = UGameMapsSettings::GetGameDefaultMap(&local_28,Default);
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
    if (this_00 != pFVar6) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Map).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->Map).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_38.DataPtr = param_1;
    sVar5 = wcslen(param_1);
    local_38.Size = (int)sVar5;
    bVar4 = FPackageName::IsValidLongPackageName(&local_38,false,(EErrorCode *)0x0);
    if (bVar4) {
      ::FString::operator=(this_00,param_1);
      return this;
    }
    ::FString::FString((FString *)&local_38,param_1);
    pFVar6 = FPaths::GetBaseFilename(&local_28,(FString *)&local_38,true);
    if (this_00 != pFVar6) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Map).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->Map).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    FVar7.Data = (FScriptContainerElement *)local_38.DataPtr;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar7.Data = (FScriptContainerElement *)local_38.DataPtr;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return this;
}

// operator== @ 14890f710

bool __thiscall FURL::operator==(FURL *this,FURL *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar7 = (this->Protocol).Data.ArrayNum;
  iVar1 = (param_1->Protocol).Data.ArrayNum;
  if (iVar7 == iVar1) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Protocol).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Protocol).Data.AllocatorInstance.Data);
      bVar10 = iVar7 == 0;
      goto LAB_14890f757;
    }
  }
  else {
    bVar10 = iVar7 + iVar1 == 1;
LAB_14890f757:
    if (!bVar10) {
      return false;
    }
  }
  iVar7 = (this->Host).Data.ArrayNum;
  iVar1 = (param_1->Host).Data.ArrayNum;
  if (iVar7 == iVar1) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Host).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Host).Data.AllocatorInstance.Data);
      bVar10 = iVar7 == 0;
      goto LAB_14890f788;
    }
  }
  else {
    bVar10 = iVar7 + iVar1 == 1;
LAB_14890f788:
    if (!bVar10) {
      return false;
    }
  }
  iVar7 = (this->Map).Data.ArrayNum;
  iVar1 = (param_1->Map).Data.ArrayNum;
  if (iVar7 == iVar1) {
    if (iVar7 < 2) goto LAB_14890f7c4;
    iVar7 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Map).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Map).Data.AllocatorInstance.Data);
    bVar10 = iVar7 == 0;
  }
  else {
    bVar10 = iVar7 + iVar1 == 1;
  }
  if (!bVar10) {
    return false;
  }
LAB_14890f7c4:
  if ((this->Port != param_1->Port) ||
     (iVar7 = (this->Op).ArrayNum, iVar7 != (param_1->Op).ArrayNum)) {
    return false;
  }
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (param_1->Op).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->Op).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Op).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      pFVar3 = (this->Op).AllocatorInstance.Data;
      iVar7 = *(int *)(pFVar2 + lVar9 + 8);
      iVar1 = *(int *)(pFVar3 + lVar9 + 8);
      if (iVar1 == iVar7) {
        if (1 < iVar1) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar3 + lVar9),*(wchar_t **)(pFVar2 + lVar9));
          bVar10 = iVar7 == 0;
          goto LAB_14890f8ac;
        }
      }
      else {
        bVar10 = iVar1 + iVar7 == 1;
LAB_14890f8ac:
        if (!bVar10) {
          return false;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->Op).ArrayNum);
  }
  return true;
}

// operator() @ 1489134b0

bool __thiscall `FURL::FURL'::__l2::<lambda_3>::operator()(void *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = iswalpha(*param_1);
  if (iVar3 != 0) {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      iVar4 = iswalnum(wVar2);
      if ((((iVar4 == 0) && (wVar2 = *param_1, wVar2 != L'-')) && (wVar2 != L'+')) &&
         (wVar2 != L'.')) {
        return false;
      }
      pwVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar2 = *pwVar1;
    }
  }
  return iVar3 != 0;
}

// AddOption @ 148917670

void __thiscall FURL::AddOption(FURL *this,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  longlong lVar11;
  
  pwVar6 = wcschr(param_1,L'=');
  if (pwVar6 == (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar4 = (int)sVar7;
  }
  else {
    pwVar6 = wcschr(param_1,L'=');
    iVar4 = (int)((longlong)pwVar6 - (longlong)param_1 >> 1);
  }
  uVar8 = 0;
  if (0 < (this->Op).ArrayNum) {
    lVar11 = 0;
    uVar10 = (ulong64)iVar4;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Op).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Op).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar11 + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(pFVar1 + lVar11);
      }
      iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar6,param_1,uVar10);
      if (iVar4 == 0) {
        uVar5 = 0;
        if ((int)uVar8 < (this->Op).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Op).AllocatorInstance.Data;
        if (*(int *)(pFVar1 + lVar11 + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)(pFVar1 + lVar11);
        }
        if (pwVar6[uVar10] == L'=') break;
        uVar5 = 0;
        if ((int)uVar8 < (this->Op).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Op).AllocatorInstance.Data;
        if (*(int *)(pFVar1 + lVar11 + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)(pFVar1 + lVar11);
        }
        if (pwVar6[uVar10] == L'\0') break;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar8 < (this->Op).ArrayNum);
  }
  uVar5 = (this->Op).ArrayNum;
  if (uVar8 == uVar5) {
    if (uVar5 == (this->Op).ArrayMax) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Op).AllocatorInstance,&(this->Op).ArrayMax);
      (this->Op).ArrayNum = uVar5;
    }
    pFVar1 = (this->Op).AllocatorInstance.Data;
    (this->Op).ArrayNum = uVar5 + 1;
    ::FString::FString((FString *)(pFVar1 + (longlong)(int)uVar5 * 0x10),param_1);
    return;
  }
  uVar9 = 0;
  if ((int)uVar8 < (int)uVar5) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::operator=
            ((FString *)((this->Op).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10),param_1);
  return;
}

// FilterURLString @ 148942c90

void __cdecl FURL::FilterURLString(FString *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  FString local_18;
  
  uVar7 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  uVar8 = uVar7;
  do {
    iVar9 = (param_1->Data).ArrayNum;
    iVar4 = 0;
    iVar5 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar5 = iVar4;
    }
    iVar6 = (int)uVar7;
    if (iVar5 <= iVar6) {
      iVar9 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar9 = iVar4;
      }
      ::FString::AssignRange(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar9);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return;
    }
    if ((((iVar6 < 0) || (iVar9 == 0)) || (iVar9 + -1 <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = *(ushort *)((param_1->Data).AllocatorInstance.Data + uVar8);
    if ((uVar1 != 0x3a) &&
       ((0x3f < uVar1 || ((0xa000000800000000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)))) {
      if (iVar6 < 0) {
code_r0x000148942d6f:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar9 = (param_1->Data).ArrayNum;
        iVar5 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar5 = iVar4;
        }
        if (iVar5 <= iVar6) goto code_r0x000148942d6f;
      }
      ::FString::AppendChar(&local_18,*(wchar_t *)((param_1->Data).AllocatorInstance.Data + uVar8));
    }
    uVar7 = (ulonglong)(iVar6 + 1);
    uVar8 = uVar8 + 2;
  } while( true );
}

// GetHostPortString @ 148959b20

FString * __thiscall FURL::GetHostPortString(FURL *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar1 = (this->Host).Data.AllocatorInstance.Data;
  bVar8 = this->Port != UrlConfig.DefaultPort;
  iVar7 = (this->Host).Data.ArrayNum;
  pFVar3 = pFVar1 + (longlong)iVar7 * 2;
  iVar6 = 0;
  for (pFVar5 = pFVar1; pFVar5 != pFVar3; pFVar5 = pFVar5 + 2) {
    if (*(wchar_t *)pFVar5 == L':') {
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 1);
      if (iVar4 != -1) goto LAB_148959c10;
      break;
    }
  }
  goto LAB_148959b77;
  while (pFVar3 != pFVar1) {
LAB_148959c10:
    pFVar3 = pFVar3 + -2;
    if (*(wchar_t *)pFVar3 == L':') {
      iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
      if (((iVar2 != -1) && (iVar4 != iVar2)) && (bVar8)) {
        ::FString::PrintfImpl(&local_18,L"[%s]");
        iVar7 = local_18.Data.ArrayNum + -1;
        if (local_18.Data.ArrayNum == 0) {
          iVar7 = iVar6;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        goto LAB_148959b8f;
      }
      break;
    }
  }
LAB_148959b77:
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = iVar6;
  }
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)pFVar1,iVar4);
  if (bVar8) {
LAB_148959b8f:
    ::FString::AppendChars(__return_storage_ptr__,L":",1);
    ::FString::PrintfImpl(&local_18,L"%i");
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetOption @ 14895a640

wchar_t * __thiscall FURL::GetOption(FURL *this,wchar_t *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  ulong64 uVar8;
  uint uVar9;
  longlong lVar10;
  
  sVar6 = wcslen(param_1);
  if ((0 < (int)sVar6) && (uVar9 = 0, 0 < (this->Op).ArrayNum)) {
    uVar8 = (ulong64)(int)sVar6;
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (this->Op).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pwVar7 = (wchar_t *)(*pcVar2)();
        return pwVar7;
      }
      pFVar1 = (this->Op).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar10 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(pFVar1 + lVar10);
      }
      iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar7,param_1,uVar8);
      if ((iVar5 == 0) &&
         (((pwVar7[uVar8 - 1] == L'=' || (pwVar7[uVar8] == L'=')) || (pwVar7[uVar8] == L'\0')))) {
        return pwVar7 + uVar8;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < (this->Op).ArrayNum);
  }
  return param_2;
}

// HasOption @ 1489608f0

bool __thiscall FURL::HasOption(FURL *this,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  ulong64 uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  
  sVar7 = wcslen(param_1);
  pwVar12 = (wchar_t *)0x0;
  if ((0 < (int)sVar7) && (0 < (this->Op).ArrayNum)) {
    uVar9 = (ulong64)(int)sVar7;
    pwVar8 = pwVar12;
    pwVar11 = pwVar12;
    do {
      uVar10 = (uint)pwVar8;
      uVar5 = 0;
      if ((int)uVar10 < (this->Op).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->Op).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + 8 + (longlong)pwVar11) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(pFVar1 + (longlong)pwVar11);
      }
      iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar8,param_1,uVar9);
      if ((iVar6 == 0) &&
         (((pwVar8[uVar9 - 1] == L'=' || (pwVar8[uVar9] == L'=')) || (pwVar8[uVar9] == L'\0')))) {
        pwVar12 = pwVar8 + uVar9;
        break;
      }
      pwVar8 = (wchar_t *)(ulonglong)(uVar10 + 1);
      pwVar11 = pwVar11 + 8;
    } while ((int)(uVar10 + 1) < (this->Op).ArrayNum);
  }
  return pwVar12 != (wchar_t *)0x0;
}

// IsInternal @ 148966ae0

bool __thiscall FURL::IsInternal(FURL *this)

{
  int iVar1;
  
  iVar1 = (this->Protocol).Data.ArrayNum;
  if (iVar1 != UrlConfig.DefaultProtocol.Data.ArrayNum) {
    return iVar1 + UrlConfig.DefaultProtocol.Data.ArrayNum == 1;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Protocol).Data.AllocatorInstance.Data,
                       (wchar_t *)UrlConfig.DefaultProtocol.Data.AllocatorInstance.Data);
    return iVar1 == 0;
  }
  return true;
}

// IsLocalInternal @ 1489671f0

bool __thiscall FURL::IsLocalInternal(FURL *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->Protocol).Data.ArrayNum;
  if (iVar2 == UrlConfig.DefaultProtocol.Data.ArrayNum) {
    if (iVar2 < 2) goto LAB_14896722a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Protocol).Data.AllocatorInstance.Data,
                       (wchar_t *)UrlConfig.DefaultProtocol.Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + UrlConfig.DefaultProtocol.Data.ArrayNum == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14896722a:
  iVar1 = (this->Host).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    return false;
  }
  return true;
}

// LoadURLConfig @ 148969140

void __thiscall FURL::LoadURLConfig(FURL *this,wchar_t *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FConfigCacheIni::GetSection(GConfig,param_1,&local_18,param_2);
  uVar5 = 0;
  if (0 < local_18.ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < local_18.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(local_18.AllocatorInstance.Data + lVar6 + 8) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(local_18.AllocatorInstance.Data + lVar6);
      }
      AddOption(this,pwVar4);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < local_18.ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RemoveOption @ 1489789d0

void __thiscall FURL::RemoveOption(FURL *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  FString *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  FName local_res10;
  wchar_t *local_res18;
  FString *local_res20;
  FString local_48;
  
  if (((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) &&
     (uVar15 = (this->Op).ArrayNum - 1, -1 < (int)uVar15)) {
    pTVar1 = &this->Op;
    lVar17 = (longlong)(int)uVar15 << 4;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      uVar13 = ~uVar15 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar15 < (this->Op).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      sVar9 = wcslen(param_1);
      iVar3 = *(int *)(pFVar14 + lVar17 + 8);
      iVar8 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      if ((int)sVar9 < iVar8) {
        iVar8 = (int)sVar9;
      }
      iVar16 = 0;
      if (0 < iVar8) {
        iVar16 = iVar8;
      }
      if (iVar3 == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar14 + lVar17);
      }
      ::FString::ConstructFromPtrSize(&local_48,pwVar12,iVar16);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar11.Data = local_48.Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,param_1);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (iVar8 == 0) {
        pFVar10 = ::FName::FName(&local_res10,param_1);
        pFVar5 = local_res20;
        pwVar12 = L"DefaultPlayer";
        if (local_res18 != (wchar_t *)0x0) {
          pwVar12 = local_res18;
        }
        bVar6 = FConfigCacheIni::RemoveKeyFromSection(GConfig,pwVar12,*pFVar10,local_res20);
        if (bVar6) {
          FConfigCacheIni::Flush(GConfig,false,pFVar5);
        }
        uVar7 = 0;
        if ((int)uVar15 < (this->Op).ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (pTVar1->AllocatorInstance).Data + lVar17;
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        iVar8 = (this->Op).ArrayNum + ~uVar15;
        if (iVar8 != 0) {
          memmove(pFVar14,pFVar14 + 0x10,(longlong)iVar8 << 4);
        }
        piVar2 = &(this->Op).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,(this->Op).ArrayNum,&(this->Op).ArrayMax);
      }
      lVar17 = lVar17 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return;
}

// SaveURLConfig @ 14897bd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FURL::SaveURLConfig(FURL *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStackY_888 [32];
  wchar_t local_858 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_888;
  uVar7 = 0;
  if (0 < (this->Op).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Op).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Op).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar8 + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(pFVar1 + lVar8);
      }
      wcscpy(local_858,pwVar6);
      pwVar6 = wcschr(local_858,L'=');
      if (pwVar6 != (wchar_t *)0x0) {
        *pwVar6 = L'\0';
        iVar5 = FGenericPlatformStricmp::Stricmp(local_858,param_2);
        if (iVar5 == 0) {
          FConfigCacheIni::SetString(GConfig,param_1,local_858,pwVar6 + 1,param_3);
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->Op).ArrayNum);
  }
  return;
}

// StaticExit @ 148981540

void __cdecl FURL::StaticExit(void)

{
  FUrlConfig::Reset(&UrlConfig);
  bDefaultsInitialized = false;
  return;
}

// StaticInit @ 148982a10

void __cdecl FURL::StaticInit(void)

{
  FUrlConfig::Init(&UrlConfig);
  bDefaultsInitialized = true;
  return;
}

// ToString @ 1489843a0

FString * __thiscall FURL::ToString(FURL *this,FString *__return_storage_ptr__,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  FString local_18;
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar3 = (this->Protocol).Data.ArrayNum;
  if (iVar3 == UrlConfig.DefaultProtocol.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Protocol).Data.AllocatorInstance.Data,
                         (wchar_t *)UrlConfig.DefaultProtocol.Data.AllocatorInstance.Data);
      bVar11 = iVar3 == 0;
      goto LAB_1489843f1;
    }
LAB_1489843f8:
    if (param_1) goto LAB_1489843fd;
  }
  else {
    bVar11 = iVar3 + UrlConfig.DefaultProtocol.Data.ArrayNum == 1;
LAB_1489843f1:
    if (bVar11) goto LAB_1489843f8;
LAB_1489843fd:
    iVar3 = (this->Protocol).Data.ArrayNum;
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(this->Protocol).Data.AllocatorInstance.Data,iVar9)
    ;
    ::FString::AppendChars(__return_storage_ptr__,L":",1);
    iVar3 = (this->Host).Data.ArrayNum;
    if (iVar3 == UrlConfig.DefaultHost.Data.ArrayNum) {
      if (iVar3 < 2) goto LAB_148984471;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Host).Data.AllocatorInstance.Data,
                         (wchar_t *)UrlConfig.DefaultHost.Data.AllocatorInstance.Data);
      bVar11 = iVar3 == 0;
    }
    else {
      bVar11 = iVar3 + UrlConfig.DefaultHost.Data.ArrayNum == 1;
    }
    if (!bVar11) {
      ::FString::AppendChars(__return_storage_ptr__,L"//",2);
    }
  }
LAB_148984471:
  iVar3 = (this->Host).Data.ArrayNum;
  if (iVar3 == UrlConfig.DefaultHost.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Host).Data.AllocatorInstance.Data,
                         (wchar_t *)UrlConfig.DefaultHost.Data.AllocatorInstance.Data);
      bVar11 = iVar3 == 0;
      goto LAB_14898449c;
    }
LAB_1489844a3:
    if (this->Port == UrlConfig.DefaultPort) goto LAB_148984535;
  }
  else {
    bVar11 = iVar3 + UrlConfig.DefaultHost.Data.ArrayNum == 1;
LAB_14898449c:
    if (bVar11) goto LAB_1489844a3;
  }
  pFVar6 = GetHostPortString(this,&local_18);
  iVar3 = (pFVar6->Data).ArrayNum;
  iVar9 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar11 = ::FString::StartsWith(&this->Map,L"/",1,IgnoreCase);
  if ((!bVar11) && (bVar11 = ::FString::StartsWith(&this->Map,L"\\",1,IgnoreCase), !bVar11)) {
    ::FString::AppendChars(__return_storage_ptr__,L"/",1);
  }
LAB_148984535:
  iVar3 = (this->Map).Data.ArrayNum;
  uVar4 = 0;
  uVar5 = iVar3 - 1U;
  if (iVar3 == 0) {
    uVar5 = uVar4;
  }
  if (0 < (int)uVar5) {
    uVar5 = iVar3 - 1U;
    if (iVar3 == 0) {
      uVar5 = uVar4;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(this->Map).Data.AllocatorInstance.Data,uVar5);
  }
  uVar10 = uVar7;
  if (0 < (this->Op).ArrayNum) {
    do {
      ::FString::AppendChars(__return_storage_ptr__,L"?",1);
      uVar8 = (uint)uVar7;
      uVar5 = uVar4;
      if ((int)uVar8 < (this->Op).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      pFVar1 = (this->Op).AllocatorInstance.Data;
      iVar3 = *(int *)(pFVar1 + uVar10 + 8);
      uVar5 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar5 = uVar4;
      }
      ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)(pFVar1 + uVar10),uVar5);
      uVar7 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < (this->Op).ArrayNum);
  }
  iVar3 = (this->Portal).Data.ArrayNum;
  uVar5 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar5 = uVar4;
  }
  if (0 < (int)uVar5) {
    ::FString::AppendChars(__return_storage_ptr__,L"#",1);
    iVar3 = (this->Portal).Data.ArrayNum;
    uVar5 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar5 = uVar4;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(this->Portal).Data.AllocatorInstance.Data,uVar5);
  }
  return __return_storage_ptr__;
}

