// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 15

// GetSubtype<BuildPatchServices::FChunkSourceEvent> @ 1432797d0

FChunkSourceEvent * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::GetSubtype<BuildPatchServices::FChunkSourceEvent>
          (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FChunkSourceEvent *pFVar3;
  
  if (this->CurrentSubtypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubtypeIndex == SubtypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FChunkSourceEvent *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FChunkSourceEvent *)this;
}

// GetSubtype<BuildPatchServices::FGenericMessage> @ 143279820

FGenericMessage * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::GetSubtype<BuildPatchServices::FGenericMessage>
          (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FGenericMessage *pFVar3;
  
  if (this->CurrentSubtypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubtypeIndex == SubtypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGenericMessage *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FGenericMessage *)this;
}

// GetSubtype<BuildPatchServices::FInstallationFileAction> @ 143279870

FInstallationFileAction * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::GetSubtype<BuildPatchServices::FInstallationFileAction>
          (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FInstallationFileAction *pFVar3;
  
  if (this->CurrentSubtypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubtypeIndex == SubtypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInstallationFileAction *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FInstallationFileAction *)this;
}

// GetSubtype<FNull> @ 1432798c0

FNull * __thiscall
TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
::GetSubtype<FNull>(void *this)

{
  code *pcVar1;
  bool bVar2;
  FNull *pFVar3;
  
  if (*(char *)((longlong)this + 0x28) != '\x04') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubtypeIndex == SubtypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNull *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// GetSubtype<FNull> @ 143279910

FNull * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::GetSubtype<FNull>(TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
                    *this)

{
  code *pcVar1;
  bool bVar2;
  FNull *pFVar3;
  
  if (this->CurrentSubtypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubtypeIndex == SubtypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNull *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FNull *)this;
}

// SetSubtype<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>_> @ 14327cfa0

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
* __thiscall
TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
::
SetSubtype<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FFileOperation *pFVar3;
  
  Reset(this);
  *(undefined8 *)this = 0;
  iVar2 = *(int *)&param_1->field_0x8;
  pFVar3 = *(FFileOperation **)param_1;
  *(int *)((longlong)this + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,0,this,iVar2,(int *)((longlong)this + 0xc));
    ConstructItems<BuildPatchServices::FFileOperation,BuildPatchServices::FFileOperation,int>
              (*(void **)this,pFVar3,iVar2);
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)&param_1->field_0x18;
  pFVar3 = *(FFileOperation **)&param_1->field_0x10;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<BuildPatchServices::FFileOperation,BuildPatchServices::FFileOperation,int>
              (pFVar1->Data,pFVar3,iVar2);
  }
  *(undefined1 *)((longlong)this + 0x28) = 0;
  return this;
}

// SetSubtype<TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>_> @ 14327d090

TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState> *
__thiscall
TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
::
SetSubtype<TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>_>
          (void *this,
          TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>
          *param_1)

{
  undefined8 uVar1;
  
  Reset(this);
  ::FString::FString(this,(FString *)param_1);
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)((longlong)this + 0x18) = uVar1;
  *(undefined4 *)((longlong)this + 0x20) = *(undefined4 *)&param_1->field_0x20;
  *(undefined1 *)((longlong)this + 0x28) = 3;
  return this;
}

// SetSubtype<TTuple<FString,enum_BuildPatchServices::EFileOperationState>_> @ 14327d0e0

TTuple<FString,BuildPatchServices::EFileOperationState> * __thiscall
TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
::SetSubtype<TTuple<FString,enum_BuildPatchServices::EFileOperationState>_>
          (void *this,TTuple<FString,BuildPatchServices::EFileOperationState> *param_1)

{
  Reset(this);
  ::FString::FString(this,(FString *)param_1);
  *(undefined4 *)((longlong)this + 0x10) = *(undefined4 *)&param_1->field_0x10;
  *(undefined1 *)((longlong)this + 0x28) = 2;
  return this;
}

// SetSubtype<BuildPatchServices::FChunkSourceEvent> @ 14327d120

FChunkSourceEvent * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::SetSubtype<BuildPatchServices::FChunkSourceEvent>
          (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
           *this,FChunkSourceEvent *param_1)

{
  Reset(this);
  *(EType *)&this->Values = param_1->Event;
  ::FString::FString((FString *)((longlong)&this->Values + 8),&param_1->Location);
  this->CurrentSubtypeIndex = '\0';
  return (FChunkSourceEvent *)this;
}

// SetSubtype<BuildPatchServices::FGenericMessage> @ 14327d160

FGenericMessage * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::SetSubtype<BuildPatchServices::FGenericMessage>
          (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
           *this,FGenericMessage *param_1)

{
  undefined8 uVar1;
  
  Reset(this);
  *(EType *)&this->Values = param_1->Type;
  uVar1 = *(undefined8 *)&(param_1->ChunkId).C;
  *(undefined8 *)((longlong)&this->Values + 4) = *(undefined8 *)&param_1->ChunkId;
  *(undefined8 *)((longlong)&this->Values + 0xc) = uVar1;
  ::FString::FString((FString *)((longlong)&this->Values + 0x18),&param_1->Payload1);
  ::FString::FString((FString *)((longlong)&this->Values + 0x28),&param_1->Payload2);
  this->CurrentSubtypeIndex = '\x02';
  return (FGenericMessage *)this;
}

// SetSubtype<BuildPatchServices::FInstallationFileAction> @ 14327d1c0

FInstallationFileAction * __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::SetSubtype<BuildPatchServices::FInstallationFileAction>
          (TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
           *this,FInstallationFileAction *param_1)

{
  Reset(this);
  *(EType *)&this->Values = param_1->Action;
  ::FString::FString((FString *)((longlong)&this->Values + 8),&param_1->Filename);
  this->CurrentSubtypeIndex = '\x01';
  return (FInstallationFileAction *)this;
}

// operator= @ 14328a230

/* WARNING: Enum "Type": Some values do not have unique names */

TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
* __thiscall
TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
::operator=(void *this,
           TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
           *param_1)

{
  uchar uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
  *pTVar5;
  
  uVar1 = param_1->CurrentSubtypeIndex;
  if (uVar1 != 0xff) {
    switch(uVar1) {
    case '\0':
      if ((uVar1 != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentSubtypeIndex == SubtypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                             ,0xa1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                  *)(*pcVar2)();
        return pTVar5;
      }
      SetSubtype<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>_>
                (this,(TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                       *)param_1);
      return this;
    case '\x01':
      if ((uVar1 != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentSubtypeIndex == SubtypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                             ,0xa1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                  *)(*pcVar2)();
        return pTVar5;
      }
      Reset(this);
      uVar3 = *(undefined8 *)((longlong)&param_1->Values + 8);
      *(undefined8 *)this = *(undefined8 *)&param_1->Values;
      *(undefined8 *)((longlong)this + 8) = uVar3;
      *(undefined4 *)((longlong)this + 0x10) = *(undefined4 *)((longlong)&param_1->Values + 0x10);
      *(undefined1 *)((longlong)this + 0x28) = 1;
      return this;
    case '\x02':
      if ((uVar1 != '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentSubtypeIndex == SubtypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                             ,0xa1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                  *)(*pcVar2)();
        return pTVar5;
      }
      SetSubtype<TTuple<FString,enum_BuildPatchServices::EFileOperationState>_>
                (this,(TTuple<FString,BuildPatchServices::EFileOperationState> *)param_1);
      return this;
    case '\x03':
      if ((uVar1 != '\x03') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentSubtypeIndex == SubtypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                             ,0xa1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                  *)(*pcVar2)();
        return pTVar5;
      }
      SetSubtype<TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>_>
                (this,(TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>
                       *)param_1);
      return this;
    case '\x04':
    case '\x05':
      GetSubtype<FNull>(param_1);
      Reset(this);
      *(undefined1 *)((longlong)this + 0x28) = 4;
      return this;
    default:
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_void___cdecl_TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<struct_BuildPatchServices::FFileOperation,class_TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>::FatalErrorUndefinedSubtype(void)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnion);
    }
  }
  return this;
}

// operator= @ 14328a400

/* WARNING: Enum "Type": Some values do not have unique names */

TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
* __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::operator=(TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
            *this,TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
                  *param_1)

{
  FChunkSourceEvent *pFVar1;
  FInstallationFileAction *pFVar2;
  FGenericMessage *pFVar3;
  void *pvVar4;
  uchar uVar5;
  
  if (param_1->CurrentSubtypeIndex == 0xff) {
    return this;
  }
  switch(param_1->CurrentSubtypeIndex) {
  case '\0':
    pFVar1 = GetSubtype<BuildPatchServices::FChunkSourceEvent>(param_1);
    SetSubtype<BuildPatchServices::FChunkSourceEvent>(this,pFVar1);
    return this;
  case '\x01':
    pFVar2 = GetSubtype<BuildPatchServices::FInstallationFileAction>(param_1);
    SetSubtype<BuildPatchServices::FInstallationFileAction>(this,pFVar2);
    return this;
  case '\x02':
    pFVar3 = GetSubtype<BuildPatchServices::FGenericMessage>(param_1);
    SetSubtype<BuildPatchServices::FGenericMessage>(this,pFVar3);
    return this;
  case '\x03':
    GetSubtype<FNull>(param_1);
    Reset(this);
    this->CurrentSubtypeIndex = '\x03';
    return this;
  case '\x04':
    GetSubtype<FNull>(param_1);
    uVar5 = this->CurrentSubtypeIndex;
    switch(uVar5) {
    case '\0':
switchD_14328a54f_caseD_0:
      goto LAB_14328a4e2;
    case '\x01':
      if (uVar5 != '\x01') goto switchD_14328a54f_caseD_3;
      this->CurrentSubtypeIndex = 0xff;
      pvVar4 = *(void **)((longlong)&this->Values + 8);
      break;
    case '\x02':
switchD_14328a54f_caseD_2:
      if (uVar5 != '\x02') goto switchD_14328a54f_caseD_3;
      this->CurrentSubtypeIndex = 0xff;
      pvVar4 = *(void **)((longlong)&this->Values + 0x28);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      pvVar4 = *(void **)((longlong)&this->Values + 0x18);
      break;
    default:
      goto switchD_14328a54f_caseD_3;
    }
    break;
  case '\x05':
    GetSubtype<FNull>(param_1);
    uVar5 = this->CurrentSubtypeIndex;
    switch(uVar5) {
    case '\0':
      goto switchD_14328a54f_caseD_0;
    case '\x01':
      uVar5 = uVar5 + 0xff;
      break;
    case '\x02':
      goto switchD_14328a54f_caseD_2;
    default:
      goto switchD_14328a54f_caseD_3;
    }
LAB_14328a4e2:
    if (uVar5 != '\0') goto switchD_14328a54f_caseD_3;
    this->CurrentSubtypeIndex = 0xff;
    pvVar4 = *(void **)((longlong)&this->Values + 8);
    break;
  default:
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`private:_static_void___cdecl_TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>::FatalErrorUndefinedSubtype(void)'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnion);
    return this;
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
switchD_14328a54f_caseD_3:
  this->CurrentSubtypeIndex = '\x03';
  return this;
}

// Reset @ 1432ead20

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
::Reset(void *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)((longlong)this + 0x28);
  switch(cVar1) {
  case '\0':
    if (cVar1 != '\0') {
      return;
    }
    *(undefined1 *)((longlong)this + 0x28) = 0xff;
    DestructItems<BuildPatchServices::FFileOperation,int>
              (*(FFileOperation **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
    if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 0x10));
    }
    DestructItems<BuildPatchServices::FFileOperation,int>
              (*(FFileOperation **)this,*(int *)((longlong)this + 8));
    break;
  case '\x01':
    bVar2 = cVar1 == '\x01';
    goto LAB_1432eada3;
  case '\x02':
    if (cVar1 != '\x02') {
      return;
    }
    *(undefined1 *)((longlong)this + 0x28) = 0xff;
    break;
  case '\x03':
    if (cVar1 != '\x03') {
      return;
    }
    *(undefined1 *)((longlong)this + 0x28) = 0xff;
    break;
  case '\x04':
  case '\x05':
    bVar2 = cVar1 == '\x04';
LAB_1432eada3:
    if (bVar2) {
      *(undefined1 *)((longlong)this + 0x28) = 0xff;
    }
  default:
    goto switchD_1432ead44_default;
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
switchD_1432ead44_default:
  return;
}

// Reset @ 1432eadd0

void __thiscall
TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
::Reset(TUnion<BuildPatchServices::FChunkSourceEvent,BuildPatchServices::FInstallationFileAction,BuildPatchServices::FGenericMessage,FNull,FNull,FNull>
        *this)

{
  uchar uVar1;
  void *pvVar2;
  
  uVar1 = this->CurrentSubtypeIndex;
  switch(uVar1) {
  case '\0':
    break;
  case '\x01':
    uVar1 = uVar1 + 0xff;
    break;
  case '\x02':
    if (uVar1 != '\x02') {
      return;
    }
    this->CurrentSubtypeIndex = 0xff;
    pvVar2 = *(void **)((longlong)&this->Values + 0x28);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    pvVar2 = *(void **)((longlong)&this->Values + 0x18);
    goto LAB_1432eae02;
  case '\x03':
  case '\x04':
  case '\x05':
    if (uVar1 == '\x03') {
      this->CurrentSubtypeIndex = 0xff;
    }
  default:
    goto switchD_1432eadf4_default;
  }
  if (uVar1 == '\0') {
    this->CurrentSubtypeIndex = 0xff;
    pvVar2 = *(void **)((longlong)&this->Values + 8);
LAB_1432eae02:
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
      return;
    }
  }
switchD_1432eadf4_default:
  return;
}

