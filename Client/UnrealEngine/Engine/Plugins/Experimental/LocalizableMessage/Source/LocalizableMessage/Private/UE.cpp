// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 30

// Construct<FLocalizableMessage> @ 14e9bcac0

void __cdecl UE::CoreUObject::Private::Construct<FLocalizableMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FLocalizableMessage> @ 14e9bcae0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLocalizableMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FLocalizableMessage> @ 14e9bcb00

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizableMessage>(void *param_1)

{
  DestructItems<FLocalizableMessageParameterEntry,int>
            (*(FLocalizableMessageParameterEntry **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLocalizableMessage> @ 14e9bcb50

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizableMessage>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FLocalizableMessageParameterEntry *pFVar4;
  FString *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar5 = (FString *)((longlong)param_1 + 0x20);
    if (pFVar5 != (FString *)((longlong)param_2 + 0x20)) {
      DestructItems<FLocalizableMessageParameterEntry,int>
                ((FLocalizableMessageParameterEntry *)(pFVar5->Data).AllocatorInstance.Data,
                 (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum);
      iVar2 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
      piVar1 = &(((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax;
      pFVar4 = (FLocalizableMessageParameterEntry *)
               (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
      iVar3 = *piVar1;
      (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,iVar3,(ForAnyElementType *)pFVar5,iVar2,piVar1);
        ConstructItems<FLocalizableMessageParameterEntry,FLocalizableMessageParameterEntry,int>
                  ((pFVar5->Data).AllocatorInstance.Data,pFVar4,iVar2);
      }
    }
    param_1 = (FString *)((longlong)param_1 + 0x30);
    param_2 = (FString *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FLocalizableMessageParameterEntry> @ 14e9bcc40

void __cdecl UE::CoreUObject::Private::Construct<FLocalizableMessageParameterEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FLocalizableMessageParameterEntry> @ 14e9bcc60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FLocalizableMessageParameterEntry> @ 14e9bcc80

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterEntry>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLocalizableMessageParameterEntry> @ 14e9bccb0

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizableMessageParameterEntry>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      if ((FInstancedStruct *)(this + 1) != (FInstancedStruct *)(pFVar1 + 1)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(this + 1),
                   (((FInstancedStruct *)(pFVar1 + 1))->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)&pFVar1[1].Data.ArrayNum);
      }
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLocalizableMessageParameterMessage> @ 14e9bcd80

void __cdecl UE::CoreUObject::Private::Construct<FLocalizableMessageParameterMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FLocalizableMessageParameterMessage> @ 14e9bcda0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FLocalizableMessageParameterMessage> @ 14e9bcdc0

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterMessage>(void *param_1)

{
  DestructItems<FLocalizableMessageParameterEntry,int>
            (*(FLocalizableMessageParameterEntry **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLocalizableMessageParameterMessage> @ 14e9bce10

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizableMessageParameterMessage>
          (void *param_1,void *param_2,int param_3)

{
  FLocalizableMessage *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FLocalizableMessage::operator=
                (this,(FLocalizableMessage *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLocalizableMessageParameterString> @ 14e9bcee0

void __cdecl UE::CoreUObject::Private::Construct<FLocalizableMessageParameterString>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLocalizableMessageParameterString> @ 14e9bcef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterString>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLocalizableMessageParameterString> @ 14e9bcf00

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterString>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FLocalizableMessageParameterString> @ 14e9bcf20

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizableMessageParameterString>
          (void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLocalizableMessageParameterFloat> @ 14e9bd130

void __cdecl UE::CoreUObject::Private::Construct<FLocalizableMessageParameterFloat>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLocalizableMessageParameterFloat> @ 14e9bd140

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterFloat>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLocalizableMessageParameterFloat> @ 14e9bd150

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterFloat>(void *param_1)

{
  return;
}

// Copy<FLocalizableMessageParameterFloat> @ 14e9bd160

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizableMessageParameterFloat>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLocalizableMessageParameterInt> @ 14e9bd250

void __cdecl UE::CoreUObject::Private::Construct<FLocalizableMessageParameterInt>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLocalizableMessageParameterInt> @ 14e9bd260

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterInt>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLocalizableMessageParameterInt> @ 14e9bd270

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterInt>(void *param_1)

{
  return;
}

// Copy<FLocalizableMessageParameterInt> @ 14e9bd340

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizableMessageParameterInt>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructRef<FLocalizableMessageParameterFloat> @ 14e9bd840

FLocalizableMessageParameterFloat * __cdecl
UE::StructUtils::GetStructRef<FLocalizableMessageParameterFloat>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLocalizableMessageParameterFloat *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterFloat *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterFloat *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat,
                         (UObject *)pUVar5,L"LocalizableMessageParameterFloat");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton)
  {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat,
                         (UObject *)pUVar5,L"LocalizableMessageParameterFloat");
    if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14e9bd93b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton)
               ->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14e9bd93b:
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat,
                         (UObject *)pUVar5,L"LocalizableMessageParameterFloat");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton,
             &local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FLocalizableMessageParameterFloat *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FLocalizableMessageParameterInt> @ 14e9bda20

FLocalizableMessageParameterInt * __cdecl
UE::StructUtils::GetStructRef<FLocalizableMessageParameterInt>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLocalizableMessageParameterInt *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterInt *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterInt *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt,(UObject *)pUVar5
                         ,L"LocalizableMessageParameterInt");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt,(UObject *)pUVar5
                         ,L"LocalizableMessageParameterInt");
    if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14e9bdb1b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton)->_padding_
     )) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14e9bdb1b:
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt,(UObject *)pUVar5
                         ,L"LocalizableMessageParameterInt");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton,
             &local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FLocalizableMessageParameterInt *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FLocalizableMessageParameterMessage> @ 14e9bdc00

FLocalizableMessageParameterMessage * __cdecl
UE::StructUtils::GetStructRef<FLocalizableMessageParameterMessage>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLocalizableMessageParameterMessage *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterMessage *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterMessage *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage,
                         (UObject *)pUVar5,L"LocalizableMessageParameterMessage");
  }
  if (param_1 ==
      Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage,
                         (UObject *)pUVar5,L"LocalizableMessageParameterMessage");
    if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14e9bdcfb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton
               )->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14e9bdcfb:
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage,
                         (UObject *)pUVar5,L"LocalizableMessageParameterMessage");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton,
             &local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FLocalizableMessageParameterMessage *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FLocalizableMessageParameterString> @ 14e9bdde0

FLocalizableMessageParameterString * __cdecl
UE::StructUtils::GetStructRef<FLocalizableMessageParameterString>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLocalizableMessageParameterString *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterString *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLocalizableMessageParameterString *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterString,
                         (UObject *)pUVar5,L"LocalizableMessageParameterString");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton
     ) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterString,
                         (UObject *)pUVar5,L"LocalizableMessageParameterString");
    if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14e9bdedb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton)
               ->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14e9bdedb:
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterString,
                         (UObject *)pUVar5,L"LocalizableMessageParameterString");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton,
             &local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FLocalizableMessageParameterString *)(*pcVar2)();
  return pFVar4;
}

// MessageKeyToTextId @ 14e9c0490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::LocalizableMessageTextInterop::MessageKeyToTextId(FString *param_1,FTextId *param_2)

{
  int iVar1;
  code *pcVar2;
  FTextId FVar3;
  FTextId FVar4;
  bool bVar5;
  undefined1 uVar6;
  FTextKey local_res8 [2];
  FTextKey local_res18 [2];
  FTextKey local_res20 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 < 2) {
    return false;
  }
  if ((iVar1 + -1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x7e) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::FString(&local_28,L",");
    bVar5 = ::FString::Split(param_1,&local_28,&local_48,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      ::FString::RemoveAt(&local_48,1,No);
      ::FString::ReplaceInline(&local_48,L"\\,",L",",IgnoreCase);
      ::FString::ReplaceInline(&local_38,L"\\,",L",",IgnoreCase);
      FTextKey::FTextKey(local_res18,&local_38);
      FTextKey::FTextKey(local_res8,&local_48);
      FVar3.Key.Index = local_res18[0].Index;
      FVar3.Namespace.Index = local_res8[0].Index;
      *param_2 = FVar3;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return true;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FTextKey::FTextKey(local_res20,param_1);
  FVar4.Key.Index = local_res20[0].Index;
  FVar4.Namespace.Index = -1;
  *param_2 = FVar4;
  return true;
}

// TextIdToMessageKey @ 14e9c0b90

bool __cdecl
UE::LocalizableMessageTextInterop::TextIdToMessageKey(FTextId *param_1,FString *param_2)

{
  FTextKey *pFVar1;
  FScriptContainerElement *pFVar2;
  FTextKey local_res8 [2];
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8[0].Index = (param_1->Namespace).Index;
  pFVar1 = &param_1->Key;
  if ((local_res8[0].Index == -1) && (pFVar1->Index == -1)) {
    return false;
  }
  FTextKey::ToString(local_res8,&local_28);
  if (local_28.Data.ArrayNum < 2) {
    local_res8[0].Index = pFVar1->Index;
    FTextKey::ToString(local_res8,param_2);
  }
  else {
    ::FString::ReplaceInline(&local_28,L",",L"\\,",IgnoreCase);
    local_res8[0].Index = pFVar1->Index;
    FTextKey::ToString(local_res8,&local_18);
    ::FString::ReplaceInline(&local_18,L",",L"\\,",IgnoreCase);
    ::FString::PrintfImpl(&local_38,L"~%s,%s");
    if (param_2 != &local_38) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_38.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

