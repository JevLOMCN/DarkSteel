// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b508de0

UClass * __cdecl UDS_M_ChatOption::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ChatOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ChatOption",
               &Z_Registration_Info_UClass_UDS_M_ChatOption.InnerSingleton,
               StaticRegisterNativesUDS_M_ChatOption,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_M_ChatOption>,
               InternalVTableHelperCtorCaller<UDS_M_ChatOption>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ChatOption.InnerSingleton;
}

// UDS_M_ChatOption @ 14b50fcc0

UDS_M_ChatOption * __thiscall
UDS_M_ChatOption::UDS_M_ChatOption(UDS_M_ChatOption *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ChattingOpacity = 1.0;
  this->_padding_ = (longlong)&___7UDS_M_ChatOption__6B_;
  *(undefined8 *)&this->ChattingNormalTypeColors = 0;
  *(undefined8 *)&(this->ChattingNormalTypeColors).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingNormalTypeColors).field_0x20 = 0;
  this->bIsShowChattingType = true;
  this->bIsShowChattingTime = true;
  this->bIsAutoTranslateMessage = false;
  this->bIsCheckBanWord = false;
  this->ChattingFontSize = FontSize1;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingNormalTypeColors).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x48 = 0;
  *(undefined8 *)&this->ChattingSystemTypeColors = 0;
  *(undefined8 *)&(this->ChattingSystemTypeColors).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingSystemTypeColors).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingSystemTypeColors).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x48 = 0;
  (this->CharMacros).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharMacros).ArrayNum = 0;
  (this->CharMacros).ArrayMax = 0;
  return this;
}

// UDS_M_ChatOption @ 14b50fd80

UDS_M_ChatOption * __thiscall
UDS_M_ChatOption::UDS_M_ChatOption(UDS_M_ChatOption *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ChattingOpacity = 1.0;
  this->_padding_ = (longlong)&___7UDS_M_ChatOption__6B_;
  *(undefined8 *)&this->ChattingNormalTypeColors = 0;
  *(undefined8 *)&(this->ChattingNormalTypeColors).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingNormalTypeColors).field_0x20 = 0;
  this->bIsShowChattingType = true;
  this->bIsShowChattingTime = true;
  this->bIsAutoTranslateMessage = false;
  this->bIsCheckBanWord = false;
  this->ChattingFontSize = FontSize1;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingNormalTypeColors).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x48 = 0;
  *(undefined8 *)&this->ChattingSystemTypeColors = 0;
  *(undefined8 *)&(this->ChattingSystemTypeColors).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingSystemTypeColors).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingSystemTypeColors).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x48 = 0;
  (this->CharMacros).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharMacros).ArrayNum = 0;
  (this->CharMacros).ArrayMax = 0;
  return this;
}

// ~UDS_M_ChatOption @ 14b5127a0

void __thiscall UDS_M_ChatOption::~UDS_M_ChatOption(UDS_M_ChatOption *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_ChatOption__6B_;
  DestructItems<FString,int>
            ((FString *)(this->CharMacros).AllocatorInstance.Data,(this->CharMacros).ArrayNum);
  pFVar1 = (this->CharMacros).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChattingSystemTypeColors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChattingSystemTypeColors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChattingSystemTypeColors);
  *(undefined4 *)&(this->ChattingNormalTypeColors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChattingNormalTypeColors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChatFontColorType,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChatFontColorType,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChattingNormalTypeColors);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b514d10

UClass * __cdecl UDS_M_ChatOption::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ChatOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ChatOption",
               &Z_Registration_Info_UClass_UDS_M_ChatOption.InnerSingleton,
               StaticRegisterNativesUDS_M_ChatOption,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_M_ChatOption>,
               InternalVTableHelperCtorCaller<UDS_M_ChatOption>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ChatOption.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ChatOption @ 14b516b50

void __cdecl UDS_M_ChatOption::StaticRegisterNativesUDS_M_ChatOption(void)

{
  return;
}

// BindGameOption @ 14bce9220

void __thiscall UDS_M_ChatOption::BindGameOption(UDS_M_ChatOption *this)

{
  UDS_GameOptionManager *pUVar1;
  
  pUVar1 = UDS_GameOptionManager::GetInst();
  if (pUVar1 != (UDS_GameOptionManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ChatOption>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->LoadedGameOptionDeviceDelegate,(UDS_M_ChatOption *)&stack0x00000010,
               (pmf_5eca9128)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ChatOption>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->SavedGameOptionDeviceDelegate,(UDS_M_ChatOption *)&stack0x00000010,
               (pmf_5eca9128)this);
  }
  return;
}

// GetCharMacros @ 14bcf5cc0

FDS_Text * __thiscall
UDS_M_ChatOption::GetCharMacros(UDS_M_ChatOption *this,FDS_Text *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_Text *pFVar5;
  
  if ((param_1 < 0) || ((this->CharMacros).ArrayNum <= param_1)) {
    __return_storage_ptr__->StringTableType = StringUi;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    __return_storage_ptr__->StringTableID = (longlong)(param_1 + 0x320c9);
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->CharMacros).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FDS_Text *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (this->CharMacros).AllocatorInstance.Data;
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    ::FString::operator=
              (&__return_storage_ptr__->UniqueString,(FString *)(pFVar1 + (longlong)param_1 * 0x10))
    ;
  }
  return __return_storage_ptr__;
}

// GetChatFontColorType @ 14bcf5de0

EDS_ChatFontColorType __cdecl
UDS_M_ChatOption::GetChatFontColorType(EDS_ChattingTabType param_1,int param_2)

{
  switch(param_1) {
  case Zone:
    return Zone;
  case ZoneGroup:
    return ZoneGroup;
  case World:
    return World;
  case Whisper:
    return Whisper;
  case Party:
    return Party;
  case Guild:
    return Guild;
  case Group:
    return (char)param_2 + Group1;
  default:
    return None;
  case RaidParty:
    return RaidParty;
  }
}

// GetChatFontColorType @ 14bcf5e60

EDS_ChatFontColorType __cdecl UDS_M_ChatOption::GetChatFontColorType(EDS_ChattingType param_1)

{
  switch(param_1) {
  case World:
    return World;
  case ZoneGroup:
    return ZoneGroup;
  case Zone:
    return Zone;
  default:
    return None;
  case Party:
    return Party;
  case RaidParty:
    return RaidParty;
  case Guild:
    return Guild;
  case Whisper:
    return Whisper;
  case Group1:
    return Group1;
  case Group2:
    return Group2;
  case Group3:
    return Group3;
  case Group4:
    return Group4;
  case Group5:
    return Group5;
  case Group6:
    return Group6;
  case Group7:
    return Group7;
  case Group8:
    return Group8;
  case Group9:
    return Group9;
  case Group10:
    return Group10;
  }
}

// GetChatSystemFontColorType @ 14bcf5f20

EDS_ChatSystemFontColorType __cdecl
UDS_M_ChatOption::GetChatSystemFontColorType(EDS_ChattingTabType param_1)

{
  if (param_1 == System) {
    return System;
  }
  if (param_1 != Battle) {
    return None;
  }
  return Battle;
}

// GetChatSystemFontColorType @ 14bcf5f40

EDS_ChatSystemFontColorType __cdecl
UDS_M_ChatOption::GetChatSystemFontColorType(EDS_ChattingType param_1)

{
  EDS_ChatSystemFontColorType EVar1;
  
  if (param_1 != System) {
    EVar1 = Battle;
    if (param_1 != Battle) {
      EVar1 = None;
    }
    return EVar1;
  }
  return System;
}

// GetChattingNormalTypeColor @ 14bcf5f60

FLinearColor * __thiscall
UDS_M_ChatOption::GetChattingNormalTypeColor
          (UDS_M_ChatOption *this,FLinearColor *__return_storage_ptr__,EDS_ChatFontColorType param_1
          )

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  FLinearColor *pFVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->ChattingNormalTypeColors).field_0x8 !=
      *(int *)&(this->ChattingNormalTypeColors).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ChattingNormalTypeColors).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ChattingNormalTypeColors).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->ChattingNormalTypeColors).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->ChattingNormalTypeColors;
      do {
        if (*(EDS_ChatFontColorType *)((longlong)iVar3 * 0x1c + lVar1) == param_1) {
          pFVar4 = TMapBase<enum_EDS_ChatFontColorType,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>_>
                   ::FindChecked(&this->ChattingNormalTypeColors,param_1);
          uVar2 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar4->field0_0x0;
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x1c + 0x14 + lVar1);
      } while (iVar3 != -1);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetChattingSystemTypeColor @ 14bcf5ff0

FLinearColor * __thiscall
UDS_M_ChatOption::GetChattingSystemTypeColor
          (UDS_M_ChatOption *this,FLinearColor *__return_storage_ptr__,
          EDS_ChatSystemFontColorType param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  FLinearColor *pFVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->ChattingSystemTypeColors).field_0x8 !=
      *(int *)&(this->ChattingSystemTypeColors).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ChattingSystemTypeColors).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ChattingSystemTypeColors).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->ChattingSystemTypeColors).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->ChattingSystemTypeColors;
      do {
        if (*(EDS_ChatSystemFontColorType *)((longlong)iVar3 * 0x1c + lVar1) == param_1) {
          pFVar4 = TMapBase<enum_EDS_ChatSystemFontColorType,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>_>
                   ::FindChecked(&this->ChattingSystemTypeColors,param_1);
          uVar2 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar4->field0_0x0;
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x1c + 0x14 + lVar1);
      } while (iVar3 != -1);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetChattingTabTypeColor @ 14bcf6080

FLinearColor * __thiscall
UDS_M_ChatOption::GetChattingTabTypeColor
          (UDS_M_ChatOption *this,FLinearColor *__return_storage_ptr__,EDS_ChattingTabType param_1,
          int param_2)

{
  EDS_ChatFontColorType EVar1;
  
  switch(param_1) {
  case Zone:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Zone);
    return __return_storage_ptr__;
  case ZoneGroup:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,ZoneGroup);
    return __return_storage_ptr__;
  case World:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,World);
    return __return_storage_ptr__;
  case Whisper:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Whisper);
    return __return_storage_ptr__;
  case Party:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Party);
    return __return_storage_ptr__;
  case Guild:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Guild);
    return __return_storage_ptr__;
  case Group:
    EVar1 = (char)param_2 + Group1;
    if (EVar1 != None) {
      GetChattingNormalTypeColor(this,__return_storage_ptr__,EVar1);
      return __return_storage_ptr__;
    }
    break;
  default:
    if (param_1 == System) {
      GetChattingSystemTypeColor(this,__return_storage_ptr__,System);
      return __return_storage_ptr__;
    }
    if (param_1 == Battle) {
      GetChattingSystemTypeColor(this,__return_storage_ptr__,Battle);
      return __return_storage_ptr__;
    }
    break;
  case RaidParty:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,RaidParty);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetChattingTypeColor @ 14bcf61f0

FLinearColor * __thiscall
UDS_M_ChatOption::GetChattingTypeColor
          (UDS_M_ChatOption *this,FLinearColor *__return_storage_ptr__,EDS_ChattingType param_1)

{
  switch(param_1) {
  case World:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,World);
    return __return_storage_ptr__;
  case ZoneGroup:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,ZoneGroup);
    return __return_storage_ptr__;
  case Zone:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Zone);
    return __return_storage_ptr__;
  case Party:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Party);
    return __return_storage_ptr__;
  case RaidParty:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,RaidParty);
    return __return_storage_ptr__;
  case Guild:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Guild);
    return __return_storage_ptr__;
  case Whisper:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Whisper);
    return __return_storage_ptr__;
  case Group1:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group1);
    return __return_storage_ptr__;
  case Group2:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group2);
    return __return_storage_ptr__;
  case Group3:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group3);
    return __return_storage_ptr__;
  case Group4:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group4);
    return __return_storage_ptr__;
  case Group5:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group5);
    return __return_storage_ptr__;
  case Group6:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group6);
    return __return_storage_ptr__;
  case Group7:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group7);
    return __return_storage_ptr__;
  case Group8:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group8);
    return __return_storage_ptr__;
  case Group9:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group9);
    return __return_storage_ptr__;
  case Group10:
    GetChattingNormalTypeColor(this,__return_storage_ptr__,Group10);
    return __return_storage_ptr__;
  }
  if (param_1 != System) {
    if (param_1 == Battle) {
      GetChattingSystemTypeColor(this,__return_storage_ptr__,Battle);
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
    return __return_storage_ptr__;
  }
  GetChattingSystemTypeColor(this,__return_storage_ptr__,System);
  return __return_storage_ptr__;
}

// Init @ 14bd00bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014bd1085b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_ChatOption::Init(UDS_M_ChatOption *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  EDS_GameOptionType EVar8;
  uint uVar9;
  int iVar10;
  UDS_GameOptionManager *this_00;
  UDS_LogManager *pUVar11;
  UDS_GameOptionData *pUVar12;
  ulonglong uVar13;
  FDS_GameOptionBaseTableRow *pFVar14;
  FDS_ResourceColorTableRow *pFVar15;
  FString *pFVar16;
  UDS_EventManager *this_01;
  UDS_ChatEvent *pUVar17;
  void *pvVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  undefined1 auStackY_cb8 [32];
  undefined1 uStack_c70;
  undefined1 auStack_c6f [3];
  int iStack_c6c;
  uint uStack_c68;
  undefined2 uStack_c64;
  undefined1 uStack_c62;
  UDS_GameOptionManager *pUStack_c60;
  FString FStack_c58;
  ForAnyElementType FStack_c48;
  uint uStack_c40;
  int iStack_c3c;
  ForAnyElementType FStack_c38;
  uint uStack_c30;
  int iStack_c2c;
  FScriptContainerElement *pFStack_c28;
  FLinearColor_u_0 FStack_c20;
  FString FStack_c10;
  FLinearColor_u_0 FStack_c00;
  FString FStack_bf0;
  undefined1 auStack_be0 [8];
  FScriptContainerElement *pFStack_bd8;
  FLinearColor_u_0 *pFStack_bd0;
  FScriptContainerElement *pFStack_bc8;
  FLinearColor_u_0 *pFStack_bc0;
  FDS_StringUiID FStack_bb8;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined2 uStack_b98;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_cb8;
  this_00 = UDS_GameOptionManager::GetInst();
  pUStack_c60 = this_00;
  if (this_00 == (UDS_GameOptionManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      TStack_b88._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_b88,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,TStack_b88.Ptr,0x79,L"gameOptionManager == nullptr");
      if ((void *)TStack_b88._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_b88._padding_);
      }
    }
  }
  else {
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTransparent);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingOpacity = __real_3f800000 - (float)iVar7 * __real_358637bd;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatCategoryDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingType = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTimestampDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingTime = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatAutoTranslate);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsAutoTranslateMessage = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatMatureLanguageFilter);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsCheckBanWord = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontSize);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingFontSize = (EDS_ChatFontSizeType)iVar7;
    }
    TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingNormalTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontColor);
    fVar5 = __real_3b808081;
    iVar7 = 0;
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      uStack_ba8 = 0x3020100;
      uStack_ba4 = 0x7060504;
      uStack_ba0 = 0xb0a0908;
      uStack_b9c = 0xf0e0d0c;
      uStack_b98 = 0x1110;
      FStack_c48.Data = (FScriptContainerElement *)0x0;
      uStack_c40 = 0x12;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x12,0,&FStack_c48,0x12,&iStack_c3c);
      memcpy(FStack_c48.Data,&uStack_ba8,0x12);
      iStack_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)uStack_c40;
      uStack_c68 = uStack_c40;
      pFStack_c28 = FStack_c48.Data + uVar13;
      FVar23.Data = FStack_c48.Data;
      while( true ) {
        pFVar20 = pFStack_c28;
        if (uStack_c40 != (uint)uVar13) {
          uStack_c70 = 0;
          `TCheckedPointerIterator<enum_EDS_ChatFontColorType_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&uStack_c70);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x12)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (iStack_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              TStack_708._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_708,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,TStack_708.Ptr,0xc5,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)TStack_708._padding_;
              goto LAB_14bd107e3;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_c10,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&FStack_c20._s_0,&FStack_c10);
            if (bVar6) {
LAB_14bd106bf:
              pFStack_bd0 = &FStack_c20;
              pFStack_bd8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingNormalTypeColors,
                         (TPairInitializer<EDS_ChatFontColorType_const_&,FLinearColor_&> *)
                         auStack_be0,(bool *)&pFStack_bd8);
              if (FStack_c10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c10.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_a68._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_a68,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_a68.Ptr,0xd1,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)TStack_a68._padding_;
LAB_14bd10579:
                  FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  FStack_c20._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  FStack_c20._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  FStack_c20._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  FStack_c20._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd106bf;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_948._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_948,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_948.Ptr,0xdf,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)TStack_948._padding_;
                  goto LAB_14bd10579;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_828._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_828,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_828.Ptr,0xd7,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)TStack_828._padding_;
                  goto LAB_14bd10579;
                }
              }
LAB_14bd107e3:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)uStack_c68;
      }
      this_00 = pUStack_c60;
      if (FStack_c48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c48.Data);
        this_00 = pUStack_c60;
      }
    }
    TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingSystemTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatSystemFontColor);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      uStack_c64 = 0x100;
      uStack_c62 = 2;
      FStack_c38.Data = (FScriptContainerElement *)0x0;
      uStack_c30 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&FStack_c38,3,&iStack_c2c);
      memcpy(FStack_c38.Data,&uStack_c64,3);
      iStack_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)uStack_c30;
      uStack_c68 = uStack_c30;
      pFStack_c28 = FStack_c38.Data + uVar13;
      FVar23.Data = FStack_c38.Data;
      while( true ) {
        pFVar20 = pFStack_c28;
        if (uStack_c30 != (uint)uVar13) {
          auStack_c6f[0] = 0;
          `TCheckedPointerIterator<enum_EDS_ChatSystemFontColorType_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(auStack_c6f);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x3)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (iStack_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              TStack_288._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_288,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,TStack_288.Ptr,0xfc,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)TStack_288._padding_;
              goto LAB_14bd10c2b;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_bf0,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&FStack_c00._s_0,&FStack_bf0);
            if (bVar6) {
LAB_14bd10b04:
              pFStack_bc0 = &FStack_c00;
              pFStack_bc8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatSystemFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingSystemTypeColors,
                         (TPairInitializer<EDS_ChatSystemFontColorType_const_&,FLinearColor_&> *)
                         (auStack_be0 + 4),(bool *)&pFStack_bc8);
              if (FStack_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_bf0.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_5e8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_5e8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_5e8.Ptr,0x108,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)TStack_5e8._padding_;
LAB_14bd109c1:
                  FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  FStack_c00._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  FStack_c00._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  FStack_c00._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  FStack_c00._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd10b04;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_4c8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_4c8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_4c8.Ptr,0x116,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)TStack_4c8._padding_;
                  goto LAB_14bd109c1;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_3a8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_3a8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_3a8.Ptr,0x10e,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)TStack_3a8._padding_;
                  goto LAB_14bd109c1;
                }
              }
LAB_14bd10c2b:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)uStack_c68;
      }
      this_00 = pUStack_c60;
      if (FStack_c38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c38.Data);
        this_00 = pUStack_c60;
      }
    }
    pTVar2 = &this->CharMacros;
    piVar1 = &(this->CharMacros).ArrayMax;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    iVar10 = (this->CharMacros).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
    }
    uStack_c68 = DS_CommonDataHelper::ChattingMaxMacroCount();
    if (0 < (int)uStack_c68) {
      lVar24 = 0x320c9;
      do {
        pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,iVar7 + GameOptionChatMacro1);
        if (pUVar12 != (UDS_GameOptionData *)0x0) {
          UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_c58,0);
          if (FStack_c58.Data.ArrayNum < 2) {
            FStack_bb8._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            FStack_bb8.ID = lVar24;
            pFVar16 = FDS_StringUiID::Str(&FStack_bb8);
            if (&FStack_c58 != pFVar16) {
              iVar10 = (pFVar16->Data).ArrayNum;
              pFVar20 = (pFVar16->Data).AllocatorInstance.Data;
              FStack_c58.Data.ArrayNum = iVar10;
              if ((iVar10 == 0) && (FStack_c58.Data.ArrayMax == 0)) {
                FStack_c58.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar10,FStack_c58.Data.ArrayMax,(ForAnyElementType *)&FStack_c58,
                           iVar10,&FStack_c58.Data.ArrayMax);
                if (iVar10 != 0) {
                  memcpy(FStack_c58.Data.AllocatorInstance.Data,pFVar20,(longlong)iVar10 * 2);
                }
              }
            }
          }
          iVar10 = (this->CharMacros).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          FVar23.Data = FStack_c58.Data.AllocatorInstance.Data;
          pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          (this->CharMacros).ArrayNum = iVar10 + 1;
          *(undefined8 *)pFVar20 = 0;
          lVar22 = (longlong)FStack_c58.Data.ArrayNum;
          *(int *)(pFVar20 + 8) = FStack_c58.Data.ArrayNum;
          if (FStack_c58.Data.ArrayNum == 0) {
            *(int *)(pFVar20 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,FStack_c58.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,
                       FStack_c58.Data.ArrayNum,(int *)(pFVar20 + 0xc));
            memcpy(*(void **)pFVar20,FVar23.Data,lVar22 * 2);
          }
          this_00 = pUStack_c60;
          if (FStack_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c58.Data.AllocatorInstance.Data);
            this_00 = pUStack_c60;
          }
        }
        iVar7 = iVar7 + 1;
        lVar24 = lVar24 + 1;
      } while (iVar7 < (int)uStack_c68);
    }
    this_01 = UDS_EventManager::GetInst();
    if (this_01 != (UDS_EventManager *)0x0) {
      if ((char)this_01->_padding_ == '\x01') {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_EventManager::GetEvent",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,TStack_168.Ptr,0x31,
                     L"Cannot access event during UDS_EventManager destruction.");
          if ((void *)TStack_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_168._padding_);
          }
        }
      }
      else {
        pUVar17 = UDS_EventManager::GetEventInternal<UDS_ChatEvent>(this_01);
        if (pUVar17 != (UDS_ChatEvent *)0x0) {
          FDS_EventDelegate<>::Broadcast(&pUVar17->OnChangedChatOption);
        }
      }
    }
  }
  return;
}

// OnLoadedGameOption @ 14bd0eb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014bd1085b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_ChatOption::OnLoadedGameOption(UDS_M_ChatOption *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  EDS_GameOptionType EVar8;
  uint uVar9;
  int iVar10;
  UDS_GameOptionManager *this_00;
  UDS_LogManager *pUVar11;
  UDS_GameOptionData *pUVar12;
  ulonglong uVar13;
  FDS_GameOptionBaseTableRow *pFVar14;
  FDS_ResourceColorTableRow *pFVar15;
  FString *pFVar16;
  UDS_EventManager *this_01;
  UDS_ChatEvent *pUVar17;
  void *pvVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  undefined1 auStackY_cb8 [32];
  undefined1 uStack_c70;
  undefined1 auStack_c6f [3];
  int iStack_c6c;
  uint uStack_c68;
  undefined2 uStack_c64;
  undefined1 uStack_c62;
  UDS_GameOptionManager *pUStack_c60;
  FString FStack_c58;
  ForAnyElementType FStack_c48;
  uint uStack_c40;
  int iStack_c3c;
  ForAnyElementType FStack_c38;
  uint uStack_c30;
  int iStack_c2c;
  FScriptContainerElement *pFStack_c28;
  FLinearColor_u_0 FStack_c20;
  FString FStack_c10;
  FLinearColor_u_0 FStack_c00;
  FString FStack_bf0;
  undefined1 auStack_be0 [8];
  FScriptContainerElement *pFStack_bd8;
  FLinearColor_u_0 *pFStack_bd0;
  FScriptContainerElement *pFStack_bc8;
  FLinearColor_u_0 *pFStack_bc0;
  FDS_StringUiID FStack_bb8;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined2 uStack_b98;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_cb8;
  this_00 = UDS_GameOptionManager::GetInst();
  pUStack_c60 = this_00;
  if (this_00 == (UDS_GameOptionManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      TStack_b88._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_b88,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,TStack_b88.Ptr,0x79,L"gameOptionManager == nullptr");
      if ((void *)TStack_b88._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_b88._padding_);
      }
    }
  }
  else {
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTransparent);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingOpacity = __real_3f800000 - (float)iVar7 * __real_358637bd;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatCategoryDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingType = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTimestampDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingTime = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatAutoTranslate);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsAutoTranslateMessage = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatMatureLanguageFilter);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsCheckBanWord = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontSize);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingFontSize = (EDS_ChatFontSizeType)iVar7;
    }
    TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingNormalTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontColor);
    fVar5 = __real_3b808081;
    iVar7 = 0;
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      uStack_ba8 = 0x3020100;
      uStack_ba4 = 0x7060504;
      uStack_ba0 = 0xb0a0908;
      uStack_b9c = 0xf0e0d0c;
      uStack_b98 = 0x1110;
      FStack_c48.Data = (FScriptContainerElement *)0x0;
      uStack_c40 = 0x12;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x12,0,&FStack_c48,0x12,&iStack_c3c);
      memcpy(FStack_c48.Data,&uStack_ba8,0x12);
      iStack_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)uStack_c40;
      uStack_c68 = uStack_c40;
      pFStack_c28 = FStack_c48.Data + uVar13;
      FVar23.Data = FStack_c48.Data;
      while( true ) {
        pFVar20 = pFStack_c28;
        if (uStack_c40 != (uint)uVar13) {
          uStack_c70 = 0;
          `TCheckedPointerIterator<enum_EDS_ChatFontColorType_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&uStack_c70);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x12)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (iStack_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              TStack_708._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_708,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,TStack_708.Ptr,0xc5,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)TStack_708._padding_;
              goto LAB_14bd107e3;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_c10,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&FStack_c20._s_0,&FStack_c10);
            if (bVar6) {
LAB_14bd106bf:
              pFStack_bd0 = &FStack_c20;
              pFStack_bd8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingNormalTypeColors,
                         (TPairInitializer<EDS_ChatFontColorType_const_&,FLinearColor_&> *)
                         auStack_be0,(bool *)&pFStack_bd8);
              if (FStack_c10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c10.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_a68._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_a68,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_a68.Ptr,0xd1,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)TStack_a68._padding_;
LAB_14bd10579:
                  FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  FStack_c20._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  FStack_c20._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  FStack_c20._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  FStack_c20._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd106bf;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_948._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_948,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_948.Ptr,0xdf,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)TStack_948._padding_;
                  goto LAB_14bd10579;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_828._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_828,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_828.Ptr,0xd7,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)TStack_828._padding_;
                  goto LAB_14bd10579;
                }
              }
LAB_14bd107e3:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)uStack_c68;
      }
      this_00 = pUStack_c60;
      if (FStack_c48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c48.Data);
        this_00 = pUStack_c60;
      }
    }
    TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingSystemTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatSystemFontColor);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      uStack_c64 = 0x100;
      uStack_c62 = 2;
      FStack_c38.Data = (FScriptContainerElement *)0x0;
      uStack_c30 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&FStack_c38,3,&iStack_c2c);
      memcpy(FStack_c38.Data,&uStack_c64,3);
      iStack_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)uStack_c30;
      uStack_c68 = uStack_c30;
      pFStack_c28 = FStack_c38.Data + uVar13;
      FVar23.Data = FStack_c38.Data;
      while( true ) {
        pFVar20 = pFStack_c28;
        if (uStack_c30 != (uint)uVar13) {
          auStack_c6f[0] = 0;
          `TCheckedPointerIterator<enum_EDS_ChatSystemFontColorType_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(auStack_c6f);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x3)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (iStack_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              TStack_288._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_288,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,TStack_288.Ptr,0xfc,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)TStack_288._padding_;
              goto LAB_14bd10c2b;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_bf0,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&FStack_c00._s_0,&FStack_bf0);
            if (bVar6) {
LAB_14bd10b04:
              pFStack_bc0 = &FStack_c00;
              pFStack_bc8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatSystemFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingSystemTypeColors,
                         (TPairInitializer<EDS_ChatSystemFontColorType_const_&,FLinearColor_&> *)
                         (auStack_be0 + 4),(bool *)&pFStack_bc8);
              if (FStack_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_bf0.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_5e8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_5e8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_5e8.Ptr,0x108,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)TStack_5e8._padding_;
LAB_14bd109c1:
                  FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  FStack_c00._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  FStack_c00._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  FStack_c00._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  FStack_c00._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd10b04;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_4c8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_4c8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_4c8.Ptr,0x116,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)TStack_4c8._padding_;
                  goto LAB_14bd109c1;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_3a8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_3a8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_3a8.Ptr,0x10e,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)TStack_3a8._padding_;
                  goto LAB_14bd109c1;
                }
              }
LAB_14bd10c2b:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)uStack_c68;
      }
      this_00 = pUStack_c60;
      if (FStack_c38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c38.Data);
        this_00 = pUStack_c60;
      }
    }
    pTVar2 = &this->CharMacros;
    piVar1 = &(this->CharMacros).ArrayMax;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    iVar10 = (this->CharMacros).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
    }
    uStack_c68 = DS_CommonDataHelper::ChattingMaxMacroCount();
    if (0 < (int)uStack_c68) {
      lVar24 = 0x320c9;
      do {
        pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,iVar7 + GameOptionChatMacro1);
        if (pUVar12 != (UDS_GameOptionData *)0x0) {
          UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_c58,0);
          if (FStack_c58.Data.ArrayNum < 2) {
            FStack_bb8._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            FStack_bb8.ID = lVar24;
            pFVar16 = FDS_StringUiID::Str(&FStack_bb8);
            if (&FStack_c58 != pFVar16) {
              iVar10 = (pFVar16->Data).ArrayNum;
              pFVar20 = (pFVar16->Data).AllocatorInstance.Data;
              FStack_c58.Data.ArrayNum = iVar10;
              if ((iVar10 == 0) && (FStack_c58.Data.ArrayMax == 0)) {
                FStack_c58.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar10,FStack_c58.Data.ArrayMax,(ForAnyElementType *)&FStack_c58,
                           iVar10,&FStack_c58.Data.ArrayMax);
                if (iVar10 != 0) {
                  memcpy(FStack_c58.Data.AllocatorInstance.Data,pFVar20,(longlong)iVar10 * 2);
                }
              }
            }
          }
          iVar10 = (this->CharMacros).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          FVar23.Data = FStack_c58.Data.AllocatorInstance.Data;
          pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          (this->CharMacros).ArrayNum = iVar10 + 1;
          *(undefined8 *)pFVar20 = 0;
          lVar22 = (longlong)FStack_c58.Data.ArrayNum;
          *(int *)(pFVar20 + 8) = FStack_c58.Data.ArrayNum;
          if (FStack_c58.Data.ArrayNum == 0) {
            *(int *)(pFVar20 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,FStack_c58.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,
                       FStack_c58.Data.ArrayNum,(int *)(pFVar20 + 0xc));
            memcpy(*(void **)pFVar20,FVar23.Data,lVar22 * 2);
          }
          this_00 = pUStack_c60;
          if (FStack_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c58.Data.AllocatorInstance.Data);
            this_00 = pUStack_c60;
          }
        }
        iVar7 = iVar7 + 1;
        lVar24 = lVar24 + 1;
      } while (iVar7 < (int)uStack_c68);
    }
    this_01 = UDS_EventManager::GetInst();
    if (this_01 != (UDS_EventManager *)0x0) {
      if ((char)this_01->_padding_ == '\x01') {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_EventManager::GetEvent",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,TStack_168.Ptr,0x31,
                     L"Cannot access event during UDS_EventManager destruction.");
          if ((void *)TStack_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_168._padding_);
          }
        }
      }
      else {
        pUVar17 = UDS_EventManager::GetEventInternal<UDS_ChatEvent>(this_01);
        if (pUVar17 != (UDS_ChatEvent *)0x0) {
          FDS_EventDelegate<>::Broadcast(&pUVar17->OnChangedChatOption);
        }
      }
    }
  }
  return;
}

// OnRefreshGameOption @ 14bd101d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014bd1085b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_ChatOption::OnRefreshGameOption(UDS_M_ChatOption *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  EDS_GameOptionType EVar8;
  uint uVar9;
  int iVar10;
  UDS_GameOptionManager *this_00;
  UDS_LogManager *pUVar11;
  UDS_GameOptionData *pUVar12;
  ulonglong uVar13;
  FDS_GameOptionBaseTableRow *pFVar14;
  FDS_ResourceColorTableRow *pFVar15;
  FString *pFVar16;
  UDS_EventManager *this_01;
  UDS_ChatEvent *pUVar17;
  void *pvVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  undefined1 auStackY_cb8 [32];
  undefined1 local_c70;
  undefined1 local_c6f [3];
  int local_c6c;
  uint local_c68;
  undefined2 local_c64;
  undefined1 local_c62;
  UDS_GameOptionManager *local_c60;
  FString local_c58;
  ForAnyElementType local_c48;
  uint local_c40;
  int local_c3c;
  ForAnyElementType local_c38;
  uint local_c30;
  int local_c2c;
  FScriptContainerElement *local_c28;
  FLinearColor_u_0 local_c20;
  FString local_c10;
  FLinearColor_u_0 local_c00;
  FString local_bf0;
  undefined1 local_be0 [8];
  FScriptContainerElement *local_bd8;
  FLinearColor_u_0 *local_bd0;
  FScriptContainerElement *local_bc8;
  FLinearColor_u_0 *local_bc0;
  FDS_StringUiID local_bb8;
  undefined4 local_ba8;
  undefined4 local_ba4;
  undefined4 local_ba0;
  undefined4 local_b9c;
  undefined2 local_b98;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_cb8;
  this_00 = UDS_GameOptionManager::GetInst();
  local_c60 = this_00;
  if (this_00 == (UDS_GameOptionManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_b88._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_b88,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_b88.Ptr,0x79,L"gameOptionManager == nullptr")
      ;
      if ((void *)local_b88._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_b88._padding_);
      }
    }
  }
  else {
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTransparent);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingOpacity = __real_3f800000 - (float)iVar7 * __real_358637bd;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatCategoryDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingType = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTimestampDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingTime = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatAutoTranslate);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsAutoTranslateMessage = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatMatureLanguageFilter);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsCheckBanWord = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontSize);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingFontSize = (EDS_ChatFontSizeType)iVar7;
    }
    TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingNormalTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontColor);
    fVar5 = __real_3b808081;
    iVar7 = 0;
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      local_ba8 = 0x3020100;
      local_ba4 = 0x7060504;
      local_ba0 = 0xb0a0908;
      local_b9c = 0xf0e0d0c;
      local_b98 = 0x1110;
      local_c48.Data = (FScriptContainerElement *)0x0;
      local_c40 = 0x12;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x12,0,&local_c48,0x12,&local_c3c);
      memcpy(local_c48.Data,&local_ba8,0x12);
      local_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)local_c40;
      local_c68 = local_c40;
      local_c28 = local_c48.Data + uVar13;
      FVar23.Data = local_c48.Data;
      while( true ) {
        pFVar20 = local_c28;
        if (local_c40 != (uint)uVar13) {
          local_c70 = 0;
          `TCheckedPointerIterator<enum_EDS_ChatFontColorType_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_c70);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x12)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (local_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              local_708._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_708,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,local_708.Ptr,0xc5,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)local_708._padding_;
              goto LAB_14bd107e3;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&local_c10,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&local_c20._s_0,&local_c10);
            if (bVar6) {
LAB_14bd106bf:
              local_bd0 = &local_c20;
              local_bd8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingNormalTypeColors,
                         (TPairInitializer<EDS_ChatFontColorType_const_&,FLinearColor_&> *)local_be0
                         ,(bool *)&local_bd8);
              if (local_c10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c10.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = local_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_a68._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_a68,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_a68.Ptr,0xd1,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)local_a68._padding_;
LAB_14bd10579:
                  FVar19.Data = local_c10.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = local_c10.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  local_c20._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  local_c20._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  local_c20._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  local_c20._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd106bf;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = local_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_948._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_948,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_948.Ptr,0xdf,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)local_948._padding_;
                  goto LAB_14bd10579;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = local_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_828._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_828,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_828.Ptr,0xd7,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)local_828._padding_;
                  goto LAB_14bd10579;
                }
              }
LAB_14bd107e3:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)local_c68;
      }
      this_00 = local_c60;
      if (local_c48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c48.Data);
        this_00 = local_c60;
      }
    }
    TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingSystemTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatSystemFontColor);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      local_c64 = 0x100;
      local_c62 = 2;
      local_c38.Data = (FScriptContainerElement *)0x0;
      local_c30 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&local_c38,3,&local_c2c);
      memcpy(local_c38.Data,&local_c64,3);
      local_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)local_c30;
      local_c68 = local_c30;
      local_c28 = local_c38.Data + uVar13;
      FVar23.Data = local_c38.Data;
      while( true ) {
        pFVar20 = local_c28;
        if (local_c30 != (uint)uVar13) {
          local_c6f[0] = 0;
          `TCheckedPointerIterator<enum_EDS_ChatSystemFontColorType_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_c6f);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x3)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (local_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              local_288._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_288,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,local_288.Ptr,0xfc,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)local_288._padding_;
              goto LAB_14bd10c2b;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&local_bf0,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&local_c00._s_0,&local_bf0);
            if (bVar6) {
LAB_14bd10b04:
              local_bc0 = &local_c00;
              local_bc8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatSystemFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingSystemTypeColors,
                         (TPairInitializer<EDS_ChatSystemFontColorType_const_&,FLinearColor_&> *)
                         (local_be0 + 4),(bool *)&local_bc8);
              if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = local_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_5e8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_5e8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_5e8.Ptr,0x108,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)local_5e8._padding_;
LAB_14bd109c1:
                  FVar19.Data = local_bf0.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = local_bf0.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  local_c00._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  local_c00._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  local_c00._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  local_c00._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd10b04;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = local_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_4c8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_4c8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_4c8.Ptr,0x116,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)local_4c8._padding_;
                  goto LAB_14bd109c1;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = local_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_3a8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_3a8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_3a8.Ptr,0x10e,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)local_3a8._padding_;
                  goto LAB_14bd109c1;
                }
              }
LAB_14bd10c2b:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)local_c68;
      }
      this_00 = local_c60;
      if (local_c38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c38.Data);
        this_00 = local_c60;
      }
    }
    pTVar2 = &this->CharMacros;
    piVar1 = &(this->CharMacros).ArrayMax;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    iVar10 = (this->CharMacros).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
    }
    local_c68 = DS_CommonDataHelper::ChattingMaxMacroCount();
    if (0 < (int)local_c68) {
      lVar24 = 0x320c9;
      do {
        pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,iVar7 + GameOptionChatMacro1);
        if (pUVar12 != (UDS_GameOptionData *)0x0) {
          UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&local_c58,0);
          if (local_c58.Data.ArrayNum < 2) {
            local_bb8._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            local_bb8.ID = lVar24;
            pFVar16 = FDS_StringUiID::Str(&local_bb8);
            if (&local_c58 != pFVar16) {
              iVar10 = (pFVar16->Data).ArrayNum;
              pFVar20 = (pFVar16->Data).AllocatorInstance.Data;
              local_c58.Data.ArrayNum = iVar10;
              if ((iVar10 == 0) && (local_c58.Data.ArrayMax == 0)) {
                local_c58.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar10,local_c58.Data.ArrayMax,(ForAnyElementType *)&local_c58,iVar10
                           ,&local_c58.Data.ArrayMax);
                if (iVar10 != 0) {
                  memcpy(local_c58.Data.AllocatorInstance.Data,pFVar20,(longlong)iVar10 * 2);
                }
              }
            }
          }
          iVar10 = (this->CharMacros).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          FVar23.Data = local_c58.Data.AllocatorInstance.Data;
          pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          (this->CharMacros).ArrayNum = iVar10 + 1;
          *(undefined8 *)pFVar20 = 0;
          lVar22 = (longlong)local_c58.Data.ArrayNum;
          *(int *)(pFVar20 + 8) = local_c58.Data.ArrayNum;
          if (local_c58.Data.ArrayNum == 0) {
            *(int *)(pFVar20 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_c58.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,
                       local_c58.Data.ArrayNum,(int *)(pFVar20 + 0xc));
            memcpy(*(void **)pFVar20,FVar23.Data,lVar22 * 2);
          }
          this_00 = local_c60;
          if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c58.Data.AllocatorInstance.Data);
            this_00 = local_c60;
          }
        }
        iVar7 = iVar7 + 1;
        lVar24 = lVar24 + 1;
      } while (iVar7 < (int)local_c68);
    }
    this_01 = UDS_EventManager::GetInst();
    if (this_01 != (UDS_EventManager *)0x0) {
      if ((char)this_01->_padding_ == '\x01') {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_EventManager::GetEvent",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,local_168.Ptr,0x31,
                     L"Cannot access event during UDS_EventManager destruction.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        pUVar17 = UDS_EventManager::GetEventInternal<UDS_ChatEvent>(this_01);
        if (pUVar17 != (UDS_ChatEvent *)0x0) {
          FDS_EventDelegate<>::Broadcast(&pUVar17->OnChangedChatOption);
        }
      }
    }
  }
  return;
}

// OnSavedGameOption @ 14bd11000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014bd1085b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_ChatOption::OnSavedGameOption(UDS_M_ChatOption *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  EDS_GameOptionType EVar8;
  uint uVar9;
  int iVar10;
  UDS_GameOptionManager *this_00;
  UDS_LogManager *pUVar11;
  UDS_GameOptionData *pUVar12;
  ulonglong uVar13;
  FDS_GameOptionBaseTableRow *pFVar14;
  FDS_ResourceColorTableRow *pFVar15;
  FString *pFVar16;
  UDS_EventManager *this_01;
  UDS_ChatEvent *pUVar17;
  void *pvVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  undefined1 auStackY_cb8 [32];
  undefined1 uStack_c70;
  undefined1 auStack_c6f [3];
  int iStack_c6c;
  uint uStack_c68;
  undefined2 uStack_c64;
  undefined1 uStack_c62;
  UDS_GameOptionManager *pUStack_c60;
  FString FStack_c58;
  ForAnyElementType FStack_c48;
  uint uStack_c40;
  int iStack_c3c;
  ForAnyElementType FStack_c38;
  uint uStack_c30;
  int iStack_c2c;
  FScriptContainerElement *pFStack_c28;
  FLinearColor_u_0 FStack_c20;
  FString FStack_c10;
  FLinearColor_u_0 FStack_c00;
  FString FStack_bf0;
  undefined1 auStack_be0 [8];
  FScriptContainerElement *pFStack_bd8;
  FLinearColor_u_0 *pFStack_bd0;
  FScriptContainerElement *pFStack_bc8;
  FLinearColor_u_0 *pFStack_bc0;
  FDS_StringUiID FStack_bb8;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined2 uStack_b98;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_cb8;
  this_00 = UDS_GameOptionManager::GetInst();
  pUStack_c60 = this_00;
  if (this_00 == (UDS_GameOptionManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      TStack_b88._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_b88,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,TStack_b88.Ptr,0x79,L"gameOptionManager == nullptr");
      if ((void *)TStack_b88._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_b88._padding_);
      }
    }
  }
  else {
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTransparent);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingOpacity = __real_3f800000 - (float)iVar7 * __real_358637bd;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatCategoryDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingType = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatTimestampDisplay);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsShowChattingTime = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatAutoTranslate);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsAutoTranslateMessage = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatMatureLanguageFilter);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->bIsCheckBanWord = iVar7 == 1;
    }
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontSize);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      iVar7 = UDS_GameOptionData::GetGameOptionValue(pUVar12,0);
      this->ChattingFontSize = (EDS_ChatFontSizeType)iVar7;
    }
    TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingNormalTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatFontColor);
    fVar5 = __real_3b808081;
    iVar7 = 0;
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      uStack_ba8 = 0x3020100;
      uStack_ba4 = 0x7060504;
      uStack_ba0 = 0xb0a0908;
      uStack_b9c = 0xf0e0d0c;
      uStack_b98 = 0x1110;
      FStack_c48.Data = (FScriptContainerElement *)0x0;
      uStack_c40 = 0x12;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x12,0,&FStack_c48,0x12,&iStack_c3c);
      memcpy(FStack_c48.Data,&uStack_ba8,0x12);
      iStack_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)uStack_c40;
      uStack_c68 = uStack_c40;
      pFStack_c28 = FStack_c48.Data + uVar13;
      FVar23.Data = FStack_c48.Data;
      while( true ) {
        pFVar20 = pFStack_c28;
        if (uStack_c40 != (uint)uVar13) {
          uStack_c70 = 0;
          `TCheckedPointerIterator<enum_EDS_ChatFontColorType_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&uStack_c70);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x12)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (iStack_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              TStack_708._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_708,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,TStack_708.Ptr,0xc5,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)TStack_708._padding_;
              goto LAB_14bd107e3;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_c10,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&FStack_c20._s_0,&FStack_c10);
            if (bVar6) {
LAB_14bd106bf:
              pFStack_bd0 = &FStack_c20;
              pFStack_bd8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingNormalTypeColors,
                         (TPairInitializer<EDS_ChatFontColorType_const_&,FLinearColor_&> *)
                         auStack_be0,(bool *)&pFStack_bd8);
              if (FStack_c10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c10.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_a68._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_a68,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_a68.Ptr,0xd1,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)TStack_a68._padding_;
LAB_14bd10579:
                  FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  FStack_c20._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  FStack_c20._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  FStack_c20._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  FStack_c20._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd106bf;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_948._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_948,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_948.Ptr,0xdf,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)TStack_948._padding_;
                  goto LAB_14bd10579;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_c10.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_828._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_828,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_828.Ptr,0xd7,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)TStack_828._padding_;
                  goto LAB_14bd10579;
                }
              }
LAB_14bd107e3:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)uStack_c68;
      }
      this_00 = pUStack_c60;
      if (FStack_c48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c48.Data);
        this_00 = pUStack_c60;
      }
    }
    TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
    ::Reset(&this->ChattingSystemTypeColors);
    pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatSystemFontColor);
    if (pUVar12 != (UDS_GameOptionData *)0x0) {
      uStack_c64 = 0x100;
      uStack_c62 = 2;
      FStack_c38.Data = (FScriptContainerElement *)0x0;
      uStack_c30 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&FStack_c38,3,&iStack_c2c);
      memcpy(FStack_c38.Data,&uStack_c64,3);
      iStack_c6c = UDS_GameOptionData::GetValueNum(pUVar12);
      uVar13 = (ulonglong)(int)uStack_c30;
      uStack_c68 = uStack_c30;
      pFStack_c28 = FStack_c38.Data + uVar13;
      FVar23.Data = FStack_c38.Data;
      while( true ) {
        pFVar20 = pFStack_c28;
        if (uStack_c30 != (uint)uVar13) {
          auStack_c6f[0] = 0;
          `TCheckedPointerIterator<enum_EDS_ChatSystemFontColorType_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(auStack_c6f);
        }
        if (FVar23.Data == pFVar20) break;
        FVar3 = *FVar23.Data;
        if ((FVar3 != (FScriptContainerElement)0x0) && (FVar3 != (FScriptContainerElement)0x3)) {
          uVar21 = (byte)FVar3 - 1;
          if (((int)uVar21 < 0) || (iStack_c6c <= (int)uVar21)) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 != (UDS_LogManager *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              TStack_288._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_288,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,TStack_288.Ptr,0xfc,
                         L"valueIndex < 0 || valueIndex >= numOfValues");
              FVar19.Data = (FScriptContainerElement *)TStack_288._padding_;
              goto LAB_14bd10c2b;
            }
          }
          else {
            UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_bf0,uVar21);
            bVar6 = FLinearColor::InitFromString((FLinearColor *)&FStack_c00._s_0,&FStack_bf0);
            if (bVar6) {
LAB_14bd10b04:
              pFStack_bc0 = &FStack_c00;
              pFStack_bc8 = FVar23.Data;
              TSet<TTuple<enum_EDS_ChatSystemFontColorType,FLinearColor>,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<enum_EDS_ChatSystemFontColorType_const_&,FLinearColor_&>_>
                        (&this->ChattingSystemTypeColors,
                         (TPairInitializer<EDS_ChatSystemFontColorType_const_&,FLinearColor_&> *)
                         (auStack_be0 + 4),(bool *)&pFStack_bc8);
              if (FStack_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_bf0.Data.AllocatorInstance.Data);
              }
            }
            else {
              EVar8 = UDS_GameOptionData::GetGameOptionID(pUVar12);
              pFVar14 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
              if (pFVar14 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_5e8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_5e8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_5e8.Ptr,0x108,
                             L"gameOptionBaseTableRow == nullptr  (GameOptionID : %d)");
                  pvVar18 = (void *)TStack_5e8._padding_;
LAB_14bd109c1:
                  FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                    FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                  }
                }
              }
              else if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                uVar9 = 0;
                if ((int)uVar21 < (pFVar14->DefaultValue).ArrayNum) {
                  uVar9 = ~uVar21 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = FDS_ResourceColorTableRow::Get
                                    ((longlong)
                                     *(int *)((pFVar14->DefaultValue).AllocatorInstance.Data +
                                             (ulonglong)(byte)FVar3 * 4 + -4),true);
                if (pFVar15 != (FDS_ResourceColorTableRow *)0x0) {
                  FStack_c00._s_0.G =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.G];
                  FStack_c00._s_0.B =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.B];
                  FStack_c00._s_0.R =
                       FLinearColor::sRGBToLinearTable[(pFVar15->Color).field0_0x0._s_0.R];
                  FStack_c00._s_0.A = (float)(pFVar15->Color).field0_0x0._s_0.A * fVar5;
                  goto LAB_14bd10b04;
                }
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_4c8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_4c8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_4c8.Ptr,0x116,
                             L"resourceColorTableRow == nullptr  (Index : %d)");
                  pvVar18 = (void *)TStack_4c8._padding_;
                  goto LAB_14bd109c1;
                }
              }
              else {
                pUVar11 = UDS_LogManager::GetInst();
                FVar19.Data = FStack_bf0.Data.AllocatorInstance.Data;
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  TStack_3a8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_3a8,"UDS_M_ChatOption::OnRefreshGameOption",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,TStack_3a8.Ptr,0x10e,
                             L"gameOptionBaseTableRow->DefaultValue.IsValidIndex(valueIndex) == false  (GameOptionID : %d, ValueIndex : %d)"
                            );
                  pvVar18 = (void *)TStack_3a8._padding_;
                  goto LAB_14bd109c1;
                }
              }
LAB_14bd10c2b:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
        }
        FVar23.Data = FVar23.Data + 1;
        uVar13 = (ulonglong)uStack_c68;
      }
      this_00 = pUStack_c60;
      if (FStack_c38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c38.Data);
        this_00 = pUStack_c60;
      }
    }
    pTVar2 = &this->CharMacros;
    piVar1 = &(this->CharMacros).ArrayMax;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    iVar10 = (this->CharMacros).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar20,iVar10);
      (this->CharMacros).ArrayNum = 0;
    }
    uStack_c68 = DS_CommonDataHelper::ChattingMaxMacroCount();
    if (0 < (int)uStack_c68) {
      lVar24 = 0x320c9;
      do {
        pUVar12 = UDS_GameOptionManager::GetGameOptionData(this_00,iVar7 + GameOptionChatMacro1);
        if (pUVar12 != (UDS_GameOptionData *)0x0) {
          UDS_GameOptionData::GetGameOptionStringValue(pUVar12,&FStack_c58,0);
          if (FStack_c58.Data.ArrayNum < 2) {
            FStack_bb8._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            FStack_bb8.ID = lVar24;
            pFVar16 = FDS_StringUiID::Str(&FStack_bb8);
            if (&FStack_c58 != pFVar16) {
              iVar10 = (pFVar16->Data).ArrayNum;
              pFVar20 = (pFVar16->Data).AllocatorInstance.Data;
              FStack_c58.Data.ArrayNum = iVar10;
              if ((iVar10 == 0) && (FStack_c58.Data.ArrayMax == 0)) {
                FStack_c58.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar10,FStack_c58.Data.ArrayMax,(ForAnyElementType *)&FStack_c58,
                           iVar10,&FStack_c58.Data.ArrayMax);
                if (iVar10 != 0) {
                  memcpy(FStack_c58.Data.AllocatorInstance.Data,pFVar20,(longlong)iVar10 * 2);
                }
              }
            }
          }
          iVar10 = (this->CharMacros).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          FVar23.Data = FStack_c58.Data.AllocatorInstance.Data;
          pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          (this->CharMacros).ArrayNum = iVar10 + 1;
          *(undefined8 *)pFVar20 = 0;
          lVar22 = (longlong)FStack_c58.Data.ArrayNum;
          *(int *)(pFVar20 + 8) = FStack_c58.Data.ArrayNum;
          if (FStack_c58.Data.ArrayNum == 0) {
            *(int *)(pFVar20 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,FStack_c58.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,
                       FStack_c58.Data.ArrayNum,(int *)(pFVar20 + 0xc));
            memcpy(*(void **)pFVar20,FVar23.Data,lVar22 * 2);
          }
          this_00 = pUStack_c60;
          if (FStack_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c58.Data.AllocatorInstance.Data);
            this_00 = pUStack_c60;
          }
        }
        iVar7 = iVar7 + 1;
        lVar24 = lVar24 + 1;
      } while (iVar7 < (int)uStack_c68);
    }
    this_01 = UDS_EventManager::GetInst();
    if (this_01 != (UDS_EventManager *)0x0) {
      if ((char)this_01->_padding_ == '\x01') {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_EventManager::GetEvent",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,TStack_168.Ptr,0x31,
                     L"Cannot access event during UDS_EventManager destruction.");
          if ((void *)TStack_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_168._padding_);
          }
        }
      }
      else {
        pUVar17 = UDS_EventManager::GetEventInternal<UDS_ChatEvent>(this_01);
        if (pUVar17 != (UDS_ChatEvent *)0x0) {
          FDS_EventDelegate<>::Broadcast(&pUVar17->OnChangedChatOption);
        }
      }
    }
  }
  return;
}

// UnbindGameOption @ 14bd24a20

void __thiscall UDS_M_ChatOption::UnbindGameOption(UDS_M_ChatOption *this)

{
  UDS_GameOptionManager *pUVar1;
  
  pUVar1 = UDS_GameOptionManager::GetInst();
  if (pUVar1 != (UDS_GameOptionManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LoadedGameOptionDeviceDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SavedGameOptionDeviceDelegate,this);
  }
  return;
}

