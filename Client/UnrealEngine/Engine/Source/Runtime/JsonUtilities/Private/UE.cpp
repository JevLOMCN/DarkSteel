// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 33

// Construct<FJsonObjectWrapper> @ 14461cc50

void __cdecl UE::CoreUObject::Private::Construct<FJsonObjectWrapper>(void *param_1)

{
  FJsonObject **ppFVar1;
  TSharedRef<FJsonObject,1> *pTVar2;
  FJsonObject *pFStack_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<FJsonObject,1> TStack_18;
  
  ppFVar1 = (FJsonObject **)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *ppFVar1 = (FJsonObject *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  pTVar2 = MakeShared<FJsonObject,1>(&TStack_18);
  FStack_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  pFStack_28 = pTVar2->Object;
  if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (ppFVar1 != &pFStack_28) {
    *ppFVar1 = pFStack_28;
    pFStack_28 = (FJsonObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x18),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// ConstructForTests<FJsonObjectWrapper> @ 14461cc60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FJsonObjectWrapper>(void *param_1)

{
  FJsonObject **ppFVar1;
  TSharedRef<FJsonObject,1> *pTVar2;
  FJsonObject *pFStack_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<FJsonObject,1> TStack_18;
  
  ppFVar1 = (FJsonObject **)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *ppFVar1 = (FJsonObject *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  pTVar2 = MakeShared<FJsonObject,1>(&TStack_18);
  FStack_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  pFStack_28 = pTVar2->Object;
  if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (ppFVar1 != &pFStack_28) {
    *ppFVar1 = pFStack_28;
    pFStack_28 = (FJsonObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x18),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Destruct<FJsonObjectWrapper> @ 14461cc70

void __cdecl UE::CoreUObject::Private::Destruct<FJsonObjectWrapper>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// PostSerialize<FJsonObjectWrapper> @ 14461cca0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FJsonObjectWrapper>(FArchive *param_1,void *param_2)

{
  bool bVar1;
  
  if (1 < *(int *)((longlong)param_2 + 8)) {
    bVar1 = FJsonObjectWrapper::JsonObjectFromString(param_2,param_2);
    if (!bVar1) {
      ::FString::Empty(param_2);
      return;
    }
  }
  return;
}

// Copy<FJsonObjectWrapper> @ 14461cce0

bool __cdecl
UE::CoreUObject::Private::Copy<FJsonObjectWrapper>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      lVar2 = *(longlong *)&pFVar1[1].Data.ArrayNum;
      pFVar3 = pFVar1[1].Data.AllocatorInstance.Data;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this[1].Data.ArrayNum;
      this[1].Data.AllocatorInstance.Data = pFVar3;
      this[1].Data.ArrayNum = (int)lVar2;
      this[1].Data.ArrayMax = (int)((ulonglong)lVar2 >> 0x20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ExportTextItem<FJsonObjectWrapper> @ 14461cd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FJsonObjectWrapper>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  undefined1 auStackY_68 [32];
  FJsonObjectWrapper local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (param_3 == (void *)0x0) {
    local_38.JsonString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.JsonString.Data.ArrayNum = 0;
    local_38.JsonString.Data.ArrayMax = 0;
    local_38.JsonObject.Object = (FJsonObject *)0x0;
    local_38.JsonObject.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FJsonObjectWrapper::FJsonObjectWrapper(&local_38);
    bVar1 = FJsonObjectWrapper::ExportTextItem(param_2,param_1,&local_38,param_4,param_5,param_6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.JsonObject.SharedReferenceCount.ReferenceController);
    if (local_38.JsonString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.JsonString.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar1 = FJsonObjectWrapper::ExportTextItem(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return bVar1;
}

// ImportTextItem<FJsonObjectWrapper> @ 14461ce60

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FJsonObjectWrapper>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FJsonObjectWrapper::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// FindUsedBits<unsigned_int> @ 14461d700

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<unsigned_int>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EArrayPropertyFlags> @ 14461d800

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EArrayPropertyFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EArrayPropertyFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EClassCastFlags> @ 14461d900

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EClassCastFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EClassCastFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EClassFlags> @ 14461da00

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EClassFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EClassFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if (((ulonglong)(longlong)(int)param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EFunctionFlags> @ 14461db00

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EFunctionFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EFunctionFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EMapPropertyFlags> @ 14461dc00

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EMapPropertyFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EMapPropertyFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EPropertyFlags> @ 14461dd00

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EPropertyFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EPropertyFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<enum_EStructFlags> @ 14461de00

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<enum_EStructFlags>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EStructFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if (((ulonglong)(longlong)(int)param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// FindUsedBits<unsigned___int64> @ 14461df00

TArray<signed_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::JsonUtilities::FindUsedBits<unsigned___int64>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement local_18 [16];
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (FScriptContainerElement)0x0;
  do {
    if ((param_1 >> (uVar6 & 0x3f) & 1) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_18) && (local_18 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_18[0];
    }
    local_18[0] = (FScriptContainerElement)((char)local_18[0] + 1);
    uVar6 = (ulonglong)(byte)local_18[0];
  } while ((char)local_18[0] < '@');
  return __return_storage_ptr__;
}

// UEnumFlagsToString<enum_EVerseEffectSet> @ 14461fa80

FString * __cdecl
UE::JsonUtilities::UEnumFlagsToString<enum_EVerseEffectSet>
          (FString *__return_storage_ptr__,EVerseEffectSet param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UEnum *this;
  FString *pFVar4;
  byte bVar5;
  int iVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  UEnum::GetValueAsString<enum_EVerseEffectSet>(__return_storage_ptr__,param_1);
  if (1 < (__return_storage_ptr__->Data).ArrayNum) {
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,L"None");
    if (iVar3 != 0) goto LAB_14461fbb4;
  }
  bVar5 = 0;
  do {
    if ((param_1 & (EVerseEffectSet)(1L << (bVar5 & 0x3f))) != None) {
      this = StaticEnum<enum_EVerseEffectSet>();
      if ((this == (UEnum *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      UEnum::GetNameByValue(this,(long64)&local_res8);
      ::FName::ToString(&local_res8,&local_38);
      iVar3 = local_38.Data.ArrayNum;
      if (1 < iVar3) {
        if (1 < (__return_storage_ptr__->Data).ArrayNum) {
          ::FString::AppendChars(__return_storage_ptr__,L" | ",3);
          iVar3 = local_38.Data.ArrayNum;
        }
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = bVar5 + 1;
  } while ((char)bVar5 < '@');
LAB_14461fbb4:
  ::FString::PrintfImpl(&local_28,L" (0x%x)");
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UEnumFlagsToString<enum_EVerseEnumFlags> @ 14461fc10

FString * __cdecl
UE::JsonUtilities::UEnumFlagsToString<enum_EVerseEnumFlags>
          (FString *__return_storage_ptr__,EVerseEnumFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UEnum *this;
  FString *pFVar4;
  byte bVar5;
  int iVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  UEnum::GetValueAsString<enum_EVerseEnumFlags>(__return_storage_ptr__,param_1);
  if (1 < (__return_storage_ptr__->Data).ArrayNum) {
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,L"None");
    if (iVar3 != 0) goto LAB_14461fd33;
  }
  bVar5 = 0;
  do {
    if ((param_1 & (EVerseEnumFlags)(1L << (bVar5 & 0x3f))) != None) {
      this = StaticEnum<enum_EVerseEnumFlags>();
      if ((this == (UEnum *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      UEnum::GetNameByValue(this,(long64)&local_res8);
      ::FName::ToString(&local_res8,&local_38);
      iVar3 = local_38.Data.ArrayNum;
      if (1 < iVar3) {
        if (1 < (__return_storage_ptr__->Data).ArrayNum) {
          ::FString::AppendChars(__return_storage_ptr__,L" | ",3);
          iVar3 = local_38.Data.ArrayNum;
        }
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = bVar5 + 1;
  } while ((char)bVar5 < '@');
LAB_14461fd33:
  ::FString::PrintfImpl(&local_28,L" (0x%x)");
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UEnumFlagsToString<enum_EVerseFunctionFlags> @ 14461fd90

FString * __cdecl
UE::JsonUtilities::UEnumFlagsToString<enum_EVerseFunctionFlags>
          (FString *__return_storage_ptr__,EVerseFunctionFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UEnum *this;
  FString *pFVar4;
  byte bVar5;
  int iVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  UEnum::GetValueAsString<enum_EVerseFunctionFlags>(__return_storage_ptr__,param_1);
  if (1 < (__return_storage_ptr__->Data).ArrayNum) {
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,L"None");
    if (iVar3 != 0) goto LAB_14461feb3;
  }
  bVar5 = 0;
  do {
    if ((param_1 & (EVerseFunctionFlags)(1L << (bVar5 & 0x3f))) != None) {
      this = StaticEnum<enum_EVerseFunctionFlags>();
      if ((this == (UEnum *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      UEnum::GetNameByValue(this,(long64)&local_res8);
      ::FName::ToString(&local_res8,&local_38);
      iVar3 = local_38.Data.ArrayNum;
      if (1 < iVar3) {
        if (1 < (__return_storage_ptr__->Data).ArrayNum) {
          ::FString::AppendChars(__return_storage_ptr__,L" | ",3);
          iVar3 = local_38.Data.ArrayNum;
        }
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = bVar5 + 1;
  } while ((char)bVar5 < '@');
LAB_14461feb3:
  ::FString::PrintfImpl(&local_28,L" (0x%x)");
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 144625ba0

bool __thiscall
`UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
          (void *this,UField *param_1,UField *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *_Str1;
  wchar_t *_Str2;
  FString local_28;
  FString local_18;
  
  pFVar2 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
  pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0);
  _Str1 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum != 0) {
    _Str1 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(_Str1,_Str2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// operator() @ 144625c30

bool __thiscall
`UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
          (void *this,FFieldClass *param_1,FFieldClass *param_2)

{
  int iVar1;
  ForAnyElementType _Str1;
  ForAnyElementType _Str2;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&param_1->Name,&local_18);
  ::FName::ToString(&param_2->Name,&local_28);
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  _Str2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    _Str2.Data = local_28.Data.AllocatorInstance.Data;
  }
  _Str1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    _Str1.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)_Str2.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// operator() @ 144625cc0

void __thiscall
UE::JsonUtilities::<lambda_6>::operator()
          (<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  
  if (param_1->ArrayNum != 0) {
    bVar3 = false;
    if (1 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x18) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)(pFVar1 + 0x10);
      }
      bVar3 = FToBoolHelper::FromCStringWide(pwVar5);
    }
    if (param_1->ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    DumpUETypeInformation((FString *)(param_1->AllocatorInstance).Data,true,bVar3);
  }
  return;
}

// operator() @ 144625d60

void __thiscall
`UE::JsonUtilities::WriteUField'::__l150::<lambda_7>::operator()
          (void *this,TTuple<int,FVerseClassVarAccessor> *param_1)

{
  int iVar1;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pTVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  FString local_78;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pTVar2 = *(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this;
  ::FString::PrintfImpl(&local_78,L"%d");
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>(pTVar2,&local_78)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (*(UObjectBaseUtility **)&param_1->field_0x8 != (UObjectBaseUtility *)0x0) {
    pTVar2 = *(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this;
    pFVar8 = UObjectBaseUtility::GetPathName
                       (*(UObjectBaseUtility **)&param_1->field_0x8,&local_58,(UObject *)0x0);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[5]>
              (pTVar2,(wchar_t (*) [5])L"Func",pFVar8);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<bool_const_&,wchar_t_const_(&)[18]>
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this,
             (wchar_t (*) [18])L"bIsInstanceMember",(bool *)&param_1->field_0x10);
  pTVar2 = *(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this;
  iVar1 = (pTVar2->Stack).ArrayNum;
  uVar9 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar1) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((pTVar2->Stack).AllocatorInstance.Data + (longlong)(pTVar2->Stack).ArrayNum * 4 + -4
               ) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar7 = pTVar2->PreviousTokenWritten;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar2->Stream + 0x188))(pTVar2->Stream,local_res8,2);
    pTVar2->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)pTVar2->Stream + 0x188))(pTVar2->Stream,L"\r\n",4);
  pFVar3 = pTVar2->Stream;
  if (0 < pTVar2->IndentLevel) {
    uVar10 = (ulonglong)(uint)pTVar2->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,2);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_60 = 0xb;
  local_68 = L"bIsFallible";
  local_48 = 0x50d92a98;
  uStack_44 = 1;
  uStack_40 = 0xb;
  uStack_3c = uStack_5c;
  (**(code **)(pTVar2->_padding_ + 0x28))(pTVar2,&local_48);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar2->Stream + 0x188))(pTVar2->Stream,local_res18,2);
  pTVar2->PreviousTokenWritten = Identifier;
  local_res20[0] = 0x20;
  (**(code **)(*(longlong *)pTVar2->Stream + 0x188))(pTVar2->Stream,local_res20,2);
  EVar7 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    (pTVar2,(bool)param_1->field_0x11);
  pTVar2->PreviousTokenWritten = EVar7;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this);
  return;
}

// operator() @ 144625ff0

void __thiscall
UE::JsonUtilities::<lambda_7>::operator()
          (<lambda_7> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  
  if (param_1->ArrayNum != 0) {
    bVar3 = false;
    if (1 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x18) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)(pFVar1 + 0x10);
      }
      bVar3 = FToBoolHelper::FromCStringWide(pwVar5);
    }
    if (param_1->ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    DumpUETypeInformation((FString *)(param_1->AllocatorInstance).Data,false,bVar3);
  }
  return;
}

// operator() @ 144626090

void __thiscall
`UE::JsonUtilities::WriteUField'::__l126::<lambda_8>::operator()
          (void *this,wchar_t *param_1,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_2)

{
  undefined1 *puVar1;
  FName *this_00;
  ulonglong uVar2;
  int iVar3;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_01;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  FString *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  wchar_t *local_res10;
  undefined1 local_res18 [8];
  undefined2 local_res20 [4];
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  FString local_48;
  
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    local_res10 = param_1;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_*_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this,&local_res10);
    iVar3 = *(int *)&param_2->field_0x28;
    puVar1 = &param_2->field_0x10;
    uVar7 = 1;
    iVar14 = 0;
    iVar16 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      iVar16 = 0;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14462615d;
        uVar13 = puVar17[lVar11 + 1];
      }
      uVar7 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = iVar16 + -1 + (int)lVar11;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14462615d:
    uVar13 = *(uint *)&param_2->field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_a8._padding_ = CONCAT44(uVar7,iVar14);
    TStack_a8.CurrentBitIndex = iVar8;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_a8._28_4_ = iVar8;
    TStack_a8.BaseBitIndex = iVar16;
    uStack_88 = CONCAT44(uStack_bc,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&param_2->field_0x28;
    if (uVar13 != uVar7) {
      puVar15 = *(undefined1 **)&param_2->field_0x20;
      if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_144626260;
        uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar12;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_144626260:
    while( true ) {
      if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_88) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_a8.CurrentBitIndex == uVar13) &&
         (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      this_01 = *(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this;
      this_00 = (FName *)(*(longlong *)param_2 + (longlong)TStack_a8.CurrentBitIndex * 0x18);
      pFVar9 = ::FName::ToString(this_00 + 1,&local_48);
      pFVar10 = ::FName::ToString(this_00,&local_58);
      iVar3 = (this_01->Stack).ArrayNum;
      uVar12 = iVar3 - 1;
      uVar7 = 0;
      if ((int)uVar12 < iVar3) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)((this_01->Stack).AllocatorInstance.Data +
                   (longlong)(this_01->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x110,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier(this_01,pFVar10);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)this_01->Stream + 0x188))(this_01->Stream,local_res20,2);
      pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
      iVar3 = (pFVar9->Data).ArrayNum;
      iStack_70 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_70 = 0;
      }
      local_78._0_4_ = SUB84(pFVar4,0);
      local_78._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
      local_68 = (undefined4)local_78;
      uStack_64 = local_78._4_4_;
      uStack_5c = uStack_6c;
      local_78 = pFVar4;
      iStack_60 = iStack_70;
      (**(code **)(this_01->_padding_ + 0x28))(this_01,&local_68);
      this_01->PreviousTokenWritten = String;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)this);
  }
  return;
}

// DumpUETypeInformation @ 14462b970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UE::JsonUtilities::DumpUETypeInformation(FString *param_1,bool param_2,bool param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  UField *this;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FFieldClass *this_00;
  code *pcVar7;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar8;
  undefined8 *puVar9;
  bool bVar10;
  char cVar11;
  EInternalObjectFlags EVar12;
  int iVar13;
  UClass *pUVar14;
  FString *pFVar15;
  FString *pFVar16;
  IFileManager *pIVar17;
  TArray<FFieldClass_*,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar19;
  byte bVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  ForElementType<FSetElementId> FVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined8 *puVar29;
  wchar_t *pwVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  ForAnyElementType FVar33;
  undefined1 auStackY_478 [32];
  undefined1 local_426;
  undefined1 local_425;
  undefined1 local_424;
  FIdentityFunctor local_423 [3];
  undefined4 local_420;
  undefined1 local_41c [4];
  undefined2 local_418 [4];
  undefined2 local_410 [4];
  undefined2 local_408 [4];
  undefined2 local_400 [4];
  undefined2 local_3f8 [4];
  undefined2 local_3f0 [4];
  undefined2 local_3e8 [4];
  undefined2 local_3e0 [4];
  ForAnyElementType local_3d8;
  uint local_3d0;
  int local_3cc;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3c8;
  undefined8 local_3b8;
  TObjectIterator<UField> local_3b0;
  int local_398;
  uint uStack_394;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_390;
  uint local_388;
  uint uStack_384;
  uint uStack_380;
  undefined4 uStack_37c;
  int local_378 [2];
  FString *local_370;
  FString local_368;
  FString local_358;
  FString local_348;
  undefined8 *local_338;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_330;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_320;
  longlong *local_310;
  longlong lStack_308;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  int local_2e8;
  undefined4 uStack_2e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  FName local_2c0;
  longlong *local_2b8;
  FString local_2b0;
  FString local_2a0;
  undefined8 *local_290;
  UPackage *local_288;
  int local_280;
  UPackage **local_278 [2];
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> local_268;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> local_228;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FString local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> local_168;
  FString local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  longlong *local_c8;
  undefined8 uStack_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined1 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_3b0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b0.ObjectArray.ArrayNum = 0;
  local_3b0.ObjectArray.ArrayMax = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_3b0.Index = 0xffffffff;
  local_370 = param_1;
  EVar12 = GetAsyncLoadingInternalFlagsExclusion();
  pUVar14 = Z_Construct_UClass_UField_NoRegister();
  GetObjectsOfClass(pUVar14,&local_3b0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar12 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UField>::Advance(&local_3b0);
    lVar25 = (longlong)local_3b0.Index;
    if ((local_3b0.Index < 0) || (local_3b0.ObjectArray.ArrayNum <= local_3b0.Index)) break;
    uVar22 = 0;
    if (local_3b0.Index < local_3b0.ObjectArray.ArrayNum) {
      uVar22 = (uint)~local_3b0.Index >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_288 = UObjectBaseUtility::GetPackage
                          (*(UObjectBaseUtility **)
                            (local_3b0.ObjectArray.AllocatorInstance.Data + lVar25 * 8));
    uVar22 = ((uint)((ulonglong)local_288 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_288 >> 4)) *
             -0x7a143595;
    uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
    uVar22 = uVar22 >> 0x10 ^ uVar22;
    if (local_98._8_4_ != local_64) {
      FVar24 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar24 = local_58;
      }
      iVar13 = *(int *)((longlong)FVar24 + (ulonglong)(local_50 - 1U & uVar22) * 4);
      while (iVar13 != -1) {
        plVar21 = (longlong *)((longlong)iVar13 * 0x20 + local_98._0_8_);
        if ((UPackage *)*plVar21 == local_288) {
          if (plVar21 != (longlong *)0x0) goto LAB_14462bb7a;
          break;
        }
        iVar13 = (int)plVar21[3];
      }
    }
    local_278[0] = &local_288;
    TSet<TTuple<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UPackage_*_&&>_>
              ((TSet<TTuple<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_98,(uint)local_378,(TKeyInitializer<UPackage_*_&&> *)(ulonglong)uVar22,
               (bool *)local_278);
    plVar21 = (longlong *)((longlong)local_378[0] * 0x20 + local_98._0_8_);
LAB_14462bb7a:
    lVar25 = (longlong)local_3b0.Index;
    pFVar1 = (ForAnyElementType *)(plVar21 + 1);
    uVar22 = 0;
    if (local_3b0.Index < local_3b0.ObjectArray.ArrayNum) {
      uVar22 = (uint)~local_3b0.Index >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_3b8 = *(undefined8 *)(local_3b0.ObjectArray.AllocatorInstance.Data + lVar25 * 8);
    if (((pFVar1->Data <= (FScriptContainerElement *)&local_3b8) &&
        ((FScriptContainerElement *)&local_3b8 <
         pFVar1->Data + (longlong)*(int *)((longlong)plVar21 + 0x14) * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (int)plVar21[2];
    if (iVar13 == *(int *)((longlong)plVar21 + 0x14)) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar1,(int *)((longlong)plVar21 + 0x14));
    }
    *(int *)(plVar21 + 2) = iVar13 + 1;
    *(undefined8 *)(pFVar1->Data + (longlong)iVar13 * 8) = local_3b8;
  }
  if (local_3b0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.ObjectArray.AllocatorInstance.Data);
  }
  local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Data.ArrayNum = 0;
  local_348.Data.ArrayMax = 0;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>(&local_228,&local_348,0);
  local_228._padding_ = (longlong)&___7FJsonUETypeWriter_JsonUtilities_UE__6B_;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)&local_228);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[8]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)&local_228,
             (wchar_t (*) [8])L"UFields");
  local_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_2e0._padding_._0_4_ = 0;
  local_2e0._padding_._4_4_ = 1;
  local_2e0.UnvisitedBitMask = 0xffffffff;
  local_2e0.CurrentBitIndex = 0;
  local_2e0.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
  }
  uVar23 = local_70;
  lStack_308 = CONCAT44(local_2e0._padding_._4_4_,(undefined4)local_2e0._padding_);
  local_310 = (longlong *)local_98;
  uStack_2f8._4_4_ = local_2e0.CurrentBitIndex;
  uStack_2f8._0_4_ = local_2e0.UnvisitedBitMask;
  uStack_2f0._4_4_ = local_2e0._28_4_;
  uStack_2f0._0_4_ = local_2e0.BaseBitIndex;
  bVar20 = (byte)local_70 & 0x1f;
  local_2e8 = local_98._8_4_ - local_64;
  pTStack_300 = local_2e0.Array;
  iVar13 = (int)local_70 >> 5;
  uStack_394 = 1 << bVar20;
  uVar22 = -1 << bVar20;
  uVar28 = local_70 & 0xffffffe0;
  pTStack_390 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_384 = local_70;
  local_1e8 = local_310;
  TStack_1e0._padding_ = lStack_308;
  TStack_1e0.Array = local_2e0.Array;
  TStack_1e0.UnvisitedBitMask = local_2e0.UnvisitedBitMask;
  TStack_1e0.CurrentBitIndex = local_2e0.CurrentBitIndex;
  TStack_1e0.BaseBitIndex = local_2e0.BaseBitIndex;
  TStack_1e0._28_4_ = local_2e0._28_4_;
  uStack_1c0 = CONCAT44(uStack_2e4,local_2e8);
  local_398 = iVar13;
  local_388 = uVar22;
  uStack_380 = uVar28;
  if (((int)local_70 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar23 != local_70) {
    puVar32 = local_98 + 0x10;
    if (local_78 != (undefined1 *)0x0) {
      puVar32 = local_78;
    }
    uVar22 = uVar22 & *(uint *)(puVar32 + (longlong)iVar13 * 4);
    while (uVar22 == 0) {
      uStack_380 = uVar28 + 0x20;
      local_398 = iVar13 + 1;
      uStack_384 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_398)
      goto LAB_14462be71;
      uVar22 = *(uint *)(puVar32 + (longlong)iVar13 * 4 + 4);
      local_388 = 0xffffffff;
      iVar13 = local_398;
      uVar28 = uStack_380;
    }
    uStack_394 = -uVar22 & uVar22;
    uVar31 = (ulonglong)uStack_394 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_280 = (int)lVar25;
    uStack_384 = local_280 + -1 + uVar28;
    if ((int)local_70 < (int)uStack_384) {
      uStack_384 = local_70;
    }
  }
LAB_14462be71:
  lStack_308 = CONCAT44(uStack_394,local_398);
  local_310 = (longlong *)local_98;
  uStack_2f8 = CONCAT44(uStack_384,local_388);
  uStack_2f0 = CONCAT44(uStack_37c,uStack_380);
  local_2e8 = local_98._8_4_ - local_64;
  pTStack_300 = pTStack_390;
  uStack_a0 = CONCAT44(uStack_2e4,local_2e8);
  local_b8 = pTStack_390;
  local_c8 = local_310;
  uStack_c0 = lStack_308;
  uStack_b0 = uStack_2f8;
  local_a8 = uStack_2f0;
  do {
    plVar21 = local_1e8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      local_426 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_426);
    }
    if (((TStack_1e0.CurrentBitIndex == uStack_b0._4_4_) && (TStack_1e0.Array == local_b8)) &&
       (plVar21 == local_c8)) {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)&local_228);
      local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_358.Data.ArrayNum = 0;
      local_358.Data.ArrayMax = 0;
      TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>(&local_168,&local_358,0);
      local_168._padding_ = (longlong)&___7FJsonUETypeWriter_JsonUtilities_UE__6B_;
      pTVar8 = &local_168;
      if (param_2) {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteObjectStart<wchar_t_const_(&)[14]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)&local_228,
                   (wchar_t (*) [14])L"FFieldClasses");
        pTVar8 = &local_228;
      }
      else {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)pTVar8);
      }
      pTVar18 = FFieldClass::GetAllFieldClasses();
      local_3d8.Data = (FScriptContainerElement *)0x0;
      local_3d0 = pTVar18->ArrayNum;
      lVar25 = (longlong)(int)local_3d0;
      pFVar6 = (pTVar18->AllocatorInstance).Data;
      if (local_3d0 == 0) {
        local_3cc = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_3d0,0,&local_3d8,local_3d0,&local_3cc);
        memcpy(local_3d8.Data,pFVar6,lVar25 << 3);
      }
      AlgoImpl::
      IntroSortInternal<FFieldClass_*,int,FIdentityFunctor,TDereferenceWrapper<FFieldClass_*,_UE::JsonUtilities::DumpUETypeInformation_::__l25::<lambda_2>_>_>
                ((FFieldClass **)local_3d8.Data,local_3d0,local_423[0],(<lambda_2> *)local_423);
      uVar22 = local_3d0;
      uVar31 = (ulonglong)(int)local_3d0;
      pFVar6 = local_3d8.Data + uVar31 * 8;
      FVar33.Data = local_3d8.Data;
      while( true ) {
        if ((uint)uVar31 != uVar22) {
          local_424 = 0;
          `TCheckedPointerIterator<FFieldClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_424);
        }
        if (FVar33.Data == pFVar6) {
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)pTVar8);
          pFVar15 = local_370;
          if (!param_2) {
            TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::Close(&local_168);
            pFVar16 = FPaths::ProjectSavedDir();
            pFVar15 = local_370;
            pTVar19 = &::operator/(&local_108,pFVar16,local_370)->Data;
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                      (&local_320,pTVar19,0x13 - (uint)(pTVar19->ArrayNum != 0));
            ::FString::PathAppend((FString *)&local_320,L"FieldClasses.json",0x11);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            pIVar17 = IFileManager::Get();
            local_178 = local_358.Data.AllocatorInstance.Data;
            FVar33.Data = (FScriptContainerElement *)L"";
            if (local_320.ArrayNum != 0) {
              FVar33.Data = local_320.AllocatorInstance.Data;
            }
            iStack_170 = local_358.Data.ArrayNum + -1;
            if (local_358.Data.ArrayNum == 0) {
              iStack_170 = 0;
            }
            local_f8._12_4_ = uStack_16c;
            local_f8.Size = iStack_170;
            local_f8.DataPtr = (wchar_t *)local_358.Data.AllocatorInstance.Data;
            FFileHelper::SaveStringToFile
                      (&local_f8,(wchar_t *)FVar33.Data,ForceUTF8WithoutBOM,pIVar17,0);
            if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_320.AllocatorInstance.Data);
            }
          }
          if (local_3d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data);
          }
          local_168._padding_ =
               (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
          cVar11 = (**(code **)(*(longlong *)local_168._padding_ + 0x210))();
          if ((cVar11 == '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("this->Stream->Close()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x2ef,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((longlong *)local_168._padding_ != (longlong *)0x0) {
            (*(code *)**(undefined8 **)local_168._padding_)(local_168._padding_,1);
          }
          if (local_168.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Bytes.AllocatorInstance.Data);
          }
          local_168._padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)&local_228);
          TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::Close(&local_228);
          local_228._padding_ =
               (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
          cVar11 = (**(code **)(*(longlong *)local_228._padding_ + 0x210))();
          if ((cVar11 == '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("this->Stream->Close()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x2ef,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((longlong *)local_228._padding_ != (longlong *)0x0) {
            (*(code *)**(undefined8 **)local_228._padding_)(local_228._padding_,1);
          }
          if (local_228.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Bytes.AllocatorInstance.Data);
          }
          local_228._padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
          if ((void *)local_228._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_228._padding_);
          }
          if (param_2) {
            pFVar16 = FPaths::ProjectSavedDir();
            ::operator/(&local_2a0,pFVar16,pFVar15);
            pIVar17 = IFileManager::Get();
            local_1b8 = local_348.Data.AllocatorInstance.Data;
            FVar33.Data = (FScriptContainerElement *)L"";
            if (local_2a0.Data.ArrayNum != 0) {
              FVar33.Data = local_2a0.Data.AllocatorInstance.Data;
            }
            iStack_1b0 = local_348.Data.ArrayNum + -1;
            if (local_348.Data.ArrayNum == 0) {
              iStack_1b0 = 0;
            }
            local_e8._12_4_ = uStack_1ac;
            local_e8.Size = iStack_1b0;
            local_e8.DataPtr = (wchar_t *)local_348.Data.AllocatorInstance.Data;
            FFileHelper::SaveStringToFile
                      (&local_e8,(wchar_t *)FVar33.Data,ForceUTF8WithoutBOM,pIVar17,0);
            if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
            }
          }
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          local_50 = 0;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UPackage_*,TArray<UField_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          return;
        }
        this_00 = *(FFieldClass **)FVar33.Data;
        ::FName::ToString(&this_00->Name,&local_188);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)pTVar8,&local_188);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        WriteFFieldClass(this_00,(FJsonUETypeWriter *)pTVar8);
        iVar13 = (int)pTVar8->_padding_;
        uVar23 = iVar13 - 1;
        uVar28 = 0;
        if ((int)uVar23 < iVar13) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(pTVar8->_padding_ + -4 + (longlong)(int)pTVar8->_padding_ * 4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x8e,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                  ((longlong *)pTVar8->_padding_,L"\r\n",4);
        puVar32 = (undefined1 *)((longlong)&pTVar8->_padding_ + 4);
        *(int *)puVar32 = *(int *)puVar32 + -1;
        uVar28 = *(uint *)((longlong)&pTVar8->_padding_ + 4);
        plVar21 = (longlong *)pTVar8->_padding_;
        if (0 < (int)uVar28) {
          uVar31 = (ulonglong)uVar28;
          do {
            local_3e8[0] = 9;
            (**(code **)(*plVar21 + 0x188))(plVar21,local_3e8,2);
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        local_3e0[0] = 0x7d;
        (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                  ((longlong *)pTVar8->_padding_,local_3e0,2);
        if (((int)pTVar8->_padding_ < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) break;
        iVar13 = (int)pTVar8->_padding_;
        uVar28 = iVar13 - 1;
        pvVar3 = (void *)(pTVar8->_padding_ + (longlong)(int)uVar28 * 4);
        iVar13 = ~uVar28 + iVar13;
        if (iVar13 != 0) {
          memmove(pvVar3,(void *)((longlong)pvVar3 + 4),(longlong)iVar13 << 2);
        }
        *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)&pTVar8->_padding_,(int)pTVar8->_padding_,
                   (int *)((longlong)&pTVar8->_padding_ + 4));
        uVar31 = (ulonglong)local_3d0;
        FVar33.Data = FVar33.Data + 8;
        *(undefined4 *)&pTVar8->_padding_ = 3;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar21 = (longlong *)((longlong)TStack_1e0.CurrentBitIndex * 0x20 + *plVar21);
    local_2b8 = plVar21;
    if ((!param_3) || ((*(uint *)(*plVar21 + 0x2c) & 0x10) != 0)) {
      local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.Data.ArrayNum = 0;
      local_368.Data.ArrayMax = 0;
      TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>(&local_268,&local_368,0);
      local_268._padding_ = (longlong)&___7FJsonUETypeWriter_JsonUtilities_UE__6B_;
      pTVar8 = &local_268;
      if (param_2) {
        local_2c0 = *(FName *)(*plVar21 + 0x18);
        ::FName::ToString(&local_2c0,&local_1a8);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)&local_228,&local_1a8);
        pTVar8 = &local_228;
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      else {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)pTVar8);
      }
      AlgoImpl::
      IntroSortInternal<UField_const_*,int,FIdentityFunctor,TDereferenceWrapper<UField_const_*,_UE::JsonUtilities::DumpUETypeInformation_::__l9::<lambda_1>_>_>
                ((UField **)plVar21[1],(int)plVar21[2],(FIdentityFunctor)param_2,
                 (<lambda_1> *)local_41c);
      puVar29 = (undefined8 *)plVar21[1];
      lVar25 = plVar21[2];
      local_290 = puVar29 + (int)lVar25;
      while( true ) {
        puVar9 = local_290;
        local_338 = puVar29;
        if ((int)plVar21[2] != (int)lVar25) {
          local_425 = 0;
          `TCheckedPointerIterator<UField_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_425);
        }
        if (puVar29 == puVar9) break;
        this = (UField *)*puVar29;
        pFVar15 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this,&local_128,(UObject *)0x0);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar30 = L"";
        }
        else {
          pwVar30 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        iVar13 = (int)pTVar8->_padding_;
        uVar28 = iVar13 - 1;
        uVar22 = 0;
        if ((int)uVar28 < iVar13) {
          uVar22 = ~uVar28 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(pTVar8->_padding_ + -4 + (longlong)(int)pTVar8->_padding_ * 4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x81,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)pTVar8,pwVar30);
        (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                  ((longlong *)pTVar8->_padding_,L"\r\n",4);
        uVar22 = *(uint *)((longlong)&pTVar8->_padding_ + 4);
        plVar21 = (longlong *)pTVar8->_padding_;
        if (0 < (int)uVar22) {
          uVar31 = (ulonglong)uVar22;
          do {
            local_418[0] = 9;
            (**(code **)(*plVar21 + 0x188))(plVar21,local_418,2);
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        plVar21 = &pTVar8->_padding_;
        local_410[0] = 0x7b;
        (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                  ((longlong *)pTVar8->_padding_,local_410,2);
        puVar32 = (undefined1 *)((longlong)&pTVar8->_padding_ + 4);
        *(int *)puVar32 = *(int *)puVar32 + 1;
        local_420 = 6;
        if ((((undefined4 *)*plVar21 <= &local_420) &&
            (&local_420 < (undefined4 *)*plVar21 + *(int *)((longlong)&pTVar8->_padding_ + 4))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = (int)pTVar8->_padding_;
        piVar2 = (int *)((longlong)&pTVar8->_padding_ + 4);
        if (iVar13 == *piVar2) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)plVar21,piVar2);
        }
        *(int *)&pTVar8->_padding_ = iVar13 + 1;
        *(undefined4 *)(*plVar21 + (longlong)iVar13 * 4) = local_420;
        *(undefined4 *)&pTVar8->_padding_ = 2;
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        WriteUField(this,(FJsonUETypeWriter *)pTVar8);
        iVar13 = (int)pTVar8->_padding_;
        uVar28 = iVar13 - 1;
        uVar22 = 0;
        if ((int)uVar28 < iVar13) {
          uVar22 = ~uVar28 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(*plVar21 + (longlong)(int)pTVar8->_padding_ * 4 + -4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x8e,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                  ((longlong *)pTVar8->_padding_,L"\r\n",4);
        puVar32 = (undefined1 *)((longlong)&pTVar8->_padding_ + 4);
        *(int *)puVar32 = *(int *)puVar32 + -1;
        uVar22 = *(uint *)((longlong)&pTVar8->_padding_ + 4);
        plVar5 = (longlong *)pTVar8->_padding_;
        if (0 < (int)uVar22) {
          uVar31 = (ulonglong)uVar22;
          do {
            local_408[0] = 9;
            (**(code **)(*plVar5 + 0x188))(plVar5,local_408,2);
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        local_400[0] = 0x7d;
        (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                  ((longlong *)pTVar8->_padding_,local_400,2);
        if (((int)pTVar8->_padding_ < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = (int)pTVar8->_padding_;
        uVar22 = iVar13 - 1;
        pvVar3 = (void *)(*plVar21 + (longlong)(int)uVar22 * 4);
        iVar13 = ~uVar22 + iVar13;
        if (iVar13 != 0) {
          memmove(pvVar3,(void *)((longlong)pvVar3 + 4),(longlong)iVar13 << 2);
        }
        *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)plVar21,(int)pTVar8->_padding_,
                   (int *)((longlong)&pTVar8->_padding_ + 4));
        puVar29 = local_338 + 1;
        *(undefined4 *)&pTVar8->_padding_ = 3;
        plVar21 = local_2b8;
      }
      iVar13 = (int)pTVar8->_padding_;
      uVar28 = iVar13 - 1;
      uVar22 = 0;
      if ((int)uVar28 < iVar13) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(pTVar8->_padding_ + -4 + (longlong)(int)pTVar8->_padding_ * 4) != 6) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x8e,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))((longlong *)pTVar8->_padding_,L"\r\n",4)
      ;
      puVar32 = (undefined1 *)((longlong)&pTVar8->_padding_ + 4);
      *(int *)puVar32 = *(int *)puVar32 + -1;
      uVar22 = *(uint *)((longlong)&pTVar8->_padding_ + 4);
      plVar5 = (longlong *)pTVar8->_padding_;
      if (0 < (int)uVar22) {
        uVar31 = (ulonglong)uVar22;
        do {
          local_3f8[0] = 9;
          (**(code **)(*plVar5 + 0x188))(plVar5,local_3f8,2);
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      local_3f0[0] = 0x7d;
      (**(code **)(*(longlong *)pTVar8->_padding_ + 0x188))
                ((longlong *)pTVar8->_padding_,local_3f0,2);
      if (((int)pTVar8->_padding_ < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (int)pTVar8->_padding_;
      uVar22 = iVar13 - 1;
      pvVar3 = (void *)(pTVar8->_padding_ + (longlong)(int)uVar22 * 4);
      iVar13 = ~uVar22 + iVar13;
      if (iVar13 != 0) {
        memmove(pvVar3,(void *)((longlong)pvVar3 + 4),(longlong)iVar13 << 2);
      }
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)&pTVar8->_padding_,(int)pTVar8->_padding_,
                 (int *)((longlong)&pTVar8->_padding_ + 4));
      *(undefined4 *)&pTVar8->_padding_ = 3;
      if (!param_2) {
        ::FString::Reset(local_268.OutString,
                         (int)((ulonglong)(longlong)local_268.Bytes.ArrayNum >> 1));
        uVar27 = 0;
        uVar31 = uVar27;
        if (0 < local_268.Bytes.ArrayNum) {
          do {
            uVar28 = (uint)uVar31;
            uVar22 = 0;
            if ((int)uVar28 < local_268.Bytes.ArrayNum) {
              uVar22 = ~uVar28 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            ::FString::AppendChar
                      (local_268.OutString,
                       *(wchar_t *)(local_268.Bytes.AllocatorInstance.Data + uVar27));
            uVar27 = uVar27 + 2;
            uVar31 = (ulonglong)(uVar28 + 2);
          } while ((int)(uVar28 + 2) < local_268.Bytes.ArrayNum);
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*plVar21,&local_d8,(UObject *)0x0);
        ::FString::PrintfImpl(&local_2b0,L"%s.json");
        pFVar16 = FPaths::ProjectSavedDir();
        pFVar15 = local_370;
        iVar13 = (local_370->Data).ArrayNum;
        iVar26 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar26 = 0;
        }
        if (((pFVar16->Data).ArrayNum != 0) || (iVar13 = 2, iVar26 == -1)) {
          iVar13 = 1;
        }
        local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar4 = (pFVar16->Data).ArrayNum;
        pFVar6 = (pFVar16->Data).AllocatorInstance.Data;
        local_3c8.ArrayNum = iVar4;
        if ((iVar4 == 0) && (iVar13 + iVar26 == 0)) {
          local_3c8.ArrayMax = 0;
        }
        else {
          uVar22 = iVar4 + iVar13 + iVar26;
          if ((int)uVar22 < iVar4) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
          }
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar22,0,&local_3c8.AllocatorInstance,iVar4,&local_3c8.ArrayMax);
          if (iVar4 != 0) {
            memcpy(local_3c8.AllocatorInstance.Data,pFVar6,(longlong)iVar4 * 2);
          }
        }
        ::FString::PathAppend
                  ((FString *)&local_3c8,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,iVar26);
        uVar22 = local_2b0.Data.ArrayNum - 1;
        if (local_2b0.Data.ArrayNum == 0) {
          uVar22 = 0;
        }
        if ((local_3c8.ArrayNum != 0) || (iVar13 = 2, uVar22 == 0xffffffff)) {
          iVar13 = 1;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_330,&local_3c8,uVar22 + iVar13);
        ::FString::PathAppend
                  ((FString *)&local_330,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,uVar22);
        if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.AllocatorInstance.Data);
        }
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        pIVar17 = IFileManager::Get();
        local_198 = local_368.Data.AllocatorInstance.Data;
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_330.ArrayNum != 0) {
          FVar33.Data = local_330.AllocatorInstance.Data;
        }
        iStack_190 = local_368.Data.ArrayNum + -1;
        if (local_368.Data.ArrayNum == 0) {
          iStack_190 = 0;
        }
        local_118._12_4_ = uStack_18c;
        local_118.Size = iStack_190;
        local_118.DataPtr = (wchar_t *)local_368.Data.AllocatorInstance.Data;
        FFileHelper::SaveStringToFile
                  (&local_118,(wchar_t *)FVar33.Data,ForceUTF8WithoutBOM,pIVar17,0);
        if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.AllocatorInstance.Data);
        }
      }
      local_268._padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
      cVar11 = (**(code **)(*(longlong *)local_268._padding_ + 0x210))();
      if ((cVar11 == '\0') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("this->Stream->Close()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x2ef,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((longlong *)local_268._padding_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_268._padding_)(local_268._padding_,1);
      }
      if (local_268.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Bytes.AllocatorInstance.Data);
      }
      local_268._padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  } while( true );
}

// GetStructConverterInterface @ 14462d590

IJsonObjectStructConverter * __cdecl
UE::Json::Private::GetStructConverterInterface(UScriptStruct *param_1)

{
  TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*> *pTVar1;
  IJsonObjectStructConverter *pIVar2;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&JsonObjectStructInterface::GStructConvertersMapCriticalSection);
  pTVar1 = TSet<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,IJsonObjectStructConverter_const_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,IJsonObjectStructConverter_const_*,0>,FDefaultSetAllocator>
                   *)&JsonObjectStructInterface::GStructConvertersMap,param_1);
  if (pTVar1 == (TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*> *)0x0) {
    pIVar2 = (IJsonObjectStructConverter *)0x0;
  }
  else {
    pIVar2 = *(IJsonObjectStructConverter **)&pTVar1->field_0x8;
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&JsonObjectStructInterface::GStructConvertersMapCriticalSection);
  return pIVar2;
}

// WriteFField @ 144630450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::JsonUtilities::WriteFField(FField *param_1,FJsonUETypeWriter *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  EClassCastFlags EVar4;
  FField *pFVar5;
  code *pcVar6;
  bool bVar7;
  EJsonToken EVar8;
  int iVar9;
  FString *pFVar10;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar11;
  FProperty *pFVar12;
  uint uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_4b8 [32];
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_490;
  longlong local_488;
  longlong local_480;
  undefined8 local_478;
  FScriptContainerElement local_468;
  FScriptContainerElement local_467 [7];
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_460;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_450;
  undefined2 local_440 [4];
  undefined2 local_438 [4];
  undefined2 local_430 [4];
  undefined2 local_428 [4];
  undefined2 local_420 [4];
  undefined2 local_418 [4];
  undefined2 local_410 [4];
  undefined2 local_408 [4];
  undefined2 local_400 [4];
  undefined2 local_3f8 [4];
  undefined2 local_3f0 [4];
  undefined2 local_3e8 [4];
  undefined2 local_3e0 [4];
  undefined2 local_3d8 [4];
  undefined2 local_3d0 [4];
  undefined2 local_3c8 [4];
  undefined2 local_3c0 [4];
  undefined2 local_3b8 [4];
  undefined2 local_3b0 [4];
  undefined2 local_3a8 [4];
  undefined2 local_3a0 [4];
  undefined2 local_398 [4];
  undefined2 local_390 [4];
  undefined2 local_388 [4];
  undefined2 local_380 [4];
  undefined2 local_378 [4];
  undefined2 local_370 [4];
  undefined2 local_368 [4];
  FName local_360;
  FName local_358;
  FName local_350;
  FString local_348;
  FString local_338;
  FString local_328;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  wchar_t *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  FString local_278;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FString local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FString local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FString local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  FString local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  FString local_178;
  FString local_168;
  FMD5Hash local_158;
  FArchiveState local_138;
  FMD5 local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  FArchiveState::FArchiveState(&local_138);
  local_138._padding_ = (longlong)&___7FArchiveMD5Generator_JsonUtilities_UE__6B_;
  FMD5::FMD5(&local_a8);
  (**(code **)(local_138._padding_ + 200))(&local_138,0);
  (**(code **)(local_138._padding_ + 0xd8))(&local_138,1);
  (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_138);
  local_158.bIsValid = false;
  FMD5::Final(&local_a8,local_158.Bytes);
  local_158.bIsValid = true;
  FMD5Hash::LexToString(&local_158,&local_338);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[4]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [4])L"MD5",&local_338);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  bVar7 = IsThisNotNull(param_1,"FField::GetName");
  if (bVar7) {
    ::FName::ToString(&param_1->NamePrivate,&local_348);
  }
  else {
    ::FString::FString(&local_348,L"None");
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[5]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [5])L"Name",&local_348);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&param_1->ClassPrivate->Name,&local_328);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[10]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [10])L"ClassName",&local_328);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::LexToString(&local_258,param_1->FlagsPrivate);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[6]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [6])L"Flags",pFVar10);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if ((((uint)(int)param_1->ClassPrivate->CastFlags >> 0xf & 1) != 0) && (param_1 != (FField *)0x0))
  {
    iVar9 = *(int *)&param_2->field_0x18;
    FVar15.Data = (FScriptContainerElement *)0x0;
    uVar13 = 0;
    uVar14 = iVar9 - 1;
    uVar18 = uVar13;
    if ((int)uVar14 < iVar9) {
      uVar18 = ~uVar14 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_498 = (FScriptContainerElement *)(longlong)(int)uVar14;
      local_490 = (FScriptContainerElement *)(longlong)iVar9;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar18 = *(uint *)&param_2->field_0x20;
    if ((uVar18 != 2) && ((0xc < uVar18 || ((0x1013U >> (uVar18 & 0x1f) & 1) == 0)))) {
      local_440[0] = 0x2c;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_440,2);
      *(undefined4 *)&param_2->field_0x20 = 1;
    }
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,L"\r\n",4);
    plVar3 = *(longlong **)&param_2->field_0x8;
    if (0 < (int)*(uint *)&param_2->field_0x24) {
      uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
      do {
        local_438[0] = 9;
        (**(code **)(*plVar3 + 0x188))(plVar3,local_438,2);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    uStack_310 = 8;
    local_318 = L"ArrayDim";
    local_248 = 0x50d927c8;
    uStack_244 = 1;
    uStack_240 = 8;
    uStack_23c = uStack_30c;
    (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_248);
    local_430[0] = 0x3a;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_430,2);
    *(undefined4 *)&param_2->field_0x20 = 0xc;
    local_428[0] = 0x20;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_428,2);
    EVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (int)param_1[1]._padding_);
    *(EJsonToken *)&param_2->field_0x20 = EVar8;
    iVar9 = *(int *)&param_2->field_0x18;
    iVar2 = *(int *)((longlong)&param_1[1]._padding_ + 4);
    uVar14 = iVar9 - 1;
    uVar18 = uVar13;
    if ((int)uVar14 < iVar9) {
      uVar18 = ~uVar14 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_498 = (FScriptContainerElement *)(longlong)(int)uVar14;
      local_490 = (FScriptContainerElement *)(longlong)iVar9;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar18 = *(uint *)&param_2->field_0x20;
    if ((uVar18 != 2) && ((0xc < uVar18 || ((0x1013U >> (uVar18 & 0x1f) & 1) == 0)))) {
      local_420[0] = 0x2c;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_420,2);
      *(undefined4 *)&param_2->field_0x20 = 1;
    }
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,L"\r\n",4);
    plVar3 = *(longlong **)&param_2->field_0x8;
    if (0 < (int)*(uint *)&param_2->field_0x24) {
      uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
      do {
        local_418[0] = 9;
        (**(code **)(*plVar3 + 0x188))(plVar3,local_418,2);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    uStack_300 = 0xb;
    local_308 = L"ElementSize";
    local_238 = 0x50d927e0;
    uStack_234 = 1;
    uStack_230 = 0xb;
    uStack_22c = uStack_2fc;
    (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_238);
    local_410[0] = 0x3a;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_410,2);
    *(undefined4 *)&param_2->field_0x20 = 0xc;
    local_408[0] = 0x20;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_408,2);
    EVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,iVar2);
    *(EJsonToken *)&param_2->field_0x20 = EVar8;
    pTVar11 = FindUsedBits<enum_EPropertyFlags>(&local_228,(EPropertyFlags)param_1[1].ClassPrivate);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[14]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [14])L"PropertyFlags",pTVar11);
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    iVar9 = *(int *)&param_2->field_0x18;
    uVar14 = iVar9 - 1;
    uVar18 = uVar13;
    if ((int)uVar14 < iVar9) {
      uVar18 = ~uVar14 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_498 = (FScriptContainerElement *)(longlong)(int)uVar14;
      local_490 = (FScriptContainerElement *)(longlong)iVar9;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar18 = *(uint *)&param_2->field_0x20;
    if ((uVar18 != 2) && ((0xc < uVar18 || ((0x1013U >> (uVar18 & 0x1f) & 1) == 0)))) {
      local_400[0] = 0x2c;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_400,2);
      *(undefined4 *)&param_2->field_0x20 = 1;
    }
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,L"\r\n",4);
    plVar3 = *(longlong **)&param_2->field_0x8;
    if (0 < (int)*(uint *)&param_2->field_0x24) {
      uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
      do {
        local_3f8[0] = 9;
        (**(code **)(*plVar3 + 0x188))(plVar3,local_3f8,2);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    uStack_2f0 = 8;
    local_2f8 = L"RepIndex";
    local_218 = 0x50d92818;
    uStack_214 = 1;
    uStack_210 = 8;
    uStack_20c = uStack_2ec;
    (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_218);
    local_3f0[0] = 0x3a;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_3f0,2);
    *(undefined4 *)&param_2->field_0x20 = 0xc;
    local_3e8[0] = 0x20;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_3e8,2);
    EVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (uint)*(ushort *)&param_1[1].Owner.Container);
    *(EJsonToken *)&param_2->field_0x20 = EVar8;
    pFVar10 = ::FName::ToString((FName *)&param_1[2].ClassPrivate,&local_208);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[14]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [14])L"RepNotifyFunc",pFVar10);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    iVar9 = *(int *)&param_2->field_0x18;
    iVar2 = *(int *)((longlong)&param_1[1].Owner.Container + 4);
    uVar14 = iVar9 - 1;
    uVar18 = uVar13;
    if ((int)uVar14 < iVar9) {
      uVar18 = ~uVar14 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_498 = (FScriptContainerElement *)(longlong)(int)uVar14;
      local_490 = (FScriptContainerElement *)(longlong)iVar9;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar18 = *(uint *)&param_2->field_0x20;
    if ((uVar18 != 2) && ((0xc < uVar18 || ((0x1013U >> (uVar18 & 0x1f) & 1) == 0)))) {
      local_3e0[0] = 0x2c;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_3e0,2);
      *(undefined4 *)&param_2->field_0x20 = 1;
    }
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,L"\r\n",4);
    plVar3 = *(longlong **)&param_2->field_0x8;
    if (0 < (int)*(uint *)&param_2->field_0x24) {
      uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
      do {
        local_3d8[0] = 9;
        (**(code **)(*plVar3 + 0x188))(plVar3,local_3d8,2);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    uStack_2e0 = 0xf;
    local_2e8 = L"Offset_Internal";
    local_1f8 = 0x50d92850;
    uStack_1f4 = 1;
    uStack_1f0 = 0xf;
    uStack_1ec = uStack_2dc;
    (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_1f8);
    local_3d0[0] = 0x3a;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_3d0,2);
    *(undefined4 *)&param_2->field_0x20 = 0xc;
    local_3c8[0] = 0x20;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_3c8);
    EVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,iVar2);
    *(EJsonToken *)&param_2->field_0x20 = EVar8;
    EVar4 = param_1->ClassPrivate->CastFlags;
    if ((EVar4 >> 0x11 & 1) == 0) {
      if ((EVar4 >> 0x30 & 1) == 0) {
        if ((EVar4 >> 0x1a & 1) == 0) {
          uVar18 = 0;
          if ((EVar4 >> 0x14 & 1) == 0) {
            if ((EVar4 >> 0x19 & 1) == 0) {
              if ((EVar4 & CASTCLASS_FByteProperty) == CASTCLASS_None) {
                if ((EVar4 >> 0x2e & 1) != 0) {
                  if (param_1[2].Owner.Container.Field != (FField *)0x0) {
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                    WriteObjectStart<wchar_t_const_(&)[8]>
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                               (wchar_t (*) [8])L"KeyProp");
                    WriteFField(param_1[2].Owner.Container.Field,param_2);
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                  }
                  if (param_1[2].Next != (FField *)0x0) {
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                    WriteObjectStart<wchar_t_const_(&)[10]>
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                               (wchar_t (*) [10])L"ValueProp");
                    WriteFField(param_1[2].Next,param_2);
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                  }
                  bVar1 = *(byte *)&param_1[3].ClassPrivate;
                  local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_468 = (FScriptContainerElement)0x0;
                  local_450.ArrayNum = 0;
                  local_450.ArrayMax = 0;
                  pFVar17 = FVar15.Data;
                  do {
                    iVar9 = (int)pFVar17;
                    if ((bVar1 >> ((ulonglong)(byte)local_468 & 0x3f) & 1) != 0) {
                      if (FVar15.Data <= &local_468) {
                        if (&local_468 < FVar15.Data + local_450.ArrayMax) {
                          local_480 = (longlong)iVar9;
                          local_478 = 1;
                          local_498 = &local_468;
                          local_490 = FVar15.Data;
                          local_488 = (longlong)local_450.ArrayMax;
                          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            );
                          if (bVar7) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          FVar15.Data = local_450.AllocatorInstance.Data;
                          iVar9 = local_450.ArrayNum;
                        }
                      }
                      if (iVar9 == local_450.ArrayMax) {
                        iVar9 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x101,&local_450.AllocatorInstance,&local_450.ArrayMax);
                        FVar15.Data = local_450.AllocatorInstance.Data;
                      }
                      local_450.ArrayNum = iVar9 + 1U;
                      FVar15.Data[iVar9] = local_468;
                      pFVar17 = (FScriptContainerElement *)(ulonglong)(iVar9 + 1U);
                      FVar15.Data = local_450.AllocatorInstance.Data;
                    }
                    local_468 = (FScriptContainerElement)((char)local_468 + '\x01');
                  } while ((char)local_468 < '@');
                  iVar9 = *(int *)&param_2->field_0x18;
                  uVar13 = iVar9 - 1;
                  if ((int)uVar13 < iVar9) {
                    uVar18 = ~uVar13 >> 0x1f;
                  }
                  if (uVar18 == 0) {
                    local_498 = (FScriptContainerElement *)(longlong)(int)uVar13;
                    local_490 = (FScriptContainerElement *)(longlong)iVar9;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                               (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Stack.Top() == EJson::Object",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                         ,0x110,L""), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar18 = *(uint *)&param_2->field_0x20;
                  if ((uVar18 != 2) && ((0xc < uVar18 || ((0x1013U >> (uVar18 & 0x1f) & 1) == 0))))
                  {
                    local_368[0] = 0x2c;
                    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                              (*(longlong **)&param_2->field_0x8,local_368,2);
                    *(undefined4 *)&param_2->field_0x20 = 1;
                  }
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
                  plVar3 = *(longlong **)&param_2->field_0x8;
                  if (0 < (int)*(uint *)&param_2->field_0x24) {
                    uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
                    do {
                      local_380[0] = 9;
                      (**(code **)(*plVar3 + 0x188))(plVar3,local_380,2);
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  uStack_260 = 8;
                  local_268 = L"MapFlags";
                  local_188 = 0x50d92980;
                  uStack_184 = 1;
                  uStack_180 = 8;
                  uStack_17c = uStack_25c;
                  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_188);
                  local_378[0] = 0x3a;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_378,2);
                  *(undefined4 *)&param_2->field_0x20 = 0xc;
                  local_370[0] = 0x20;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_370,2);
                  EVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                          WriteValueOnly<signed_char>
                                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
                                     param_2,&local_450);
                  *(EJsonToken *)&param_2->field_0x20 = EVar8;
                  if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_450.AllocatorInstance.Data);
                  }
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                  WriteObjectStart<wchar_t_const_(&)[10]>
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                             (wchar_t (*) [10])L"MapLayout");
                  WriteFScriptMapLayout((FScriptMapLayout *)&param_1[2].NamePrivate,param_2);
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                  goto LAB_144631899;
                }
                if ((EVar4 >> 0x2f & 1) != 0) {
                  if (param_1[2].Owner.Container.Field != (FField *)0x0) {
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                    WriteObjectStart<wchar_t_const_(&)[12]>
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                               (wchar_t (*) [12])L"ElementProp");
                    WriteFField(param_1[2].Owner.Container.Field,param_2);
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                  }
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                  WriteObjectStart<wchar_t_const_(&)[10]>
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                             (wchar_t (*) [10])L"SetLayout");
                  WriteFScriptSetLayout((FScriptSparseSetLayout *)&param_1[2].Next,param_2);
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                  goto LAB_144631899;
                }
                if ((EVar4 >> 0x17 & 1) == 0) {
                  if ((EVar4 >> 0x15 & 1) != 0) {
                    bVar1 = *(byte *)&param_1[2].Owner.Container;
                    local_460.ArrayNum = 0;
                    local_467[0] = (FScriptContainerElement)0x0;
                    local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_460.ArrayMax = 0;
                    FVar16.Data = FVar15.Data;
                    do {
                      uVar18 = (uint)FVar15.Data;
                      if ((bVar1 >> ((ulonglong)(byte)local_467[0] & 0x3f) & 1) != 0) {
                        if ((FVar16.Data <= local_467) &&
                           (local_467 < FVar16.Data + local_460.ArrayMax)) {
                          local_480 = (longlong)(int)uVar18;
                          local_478 = 1;
                          local_498 = local_467;
                          local_490 = FVar16.Data;
                          local_488 = (longlong)local_460.ArrayMax;
                          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            );
                          FVar16.Data = local_460.AllocatorInstance.Data;
                          uVar18 = local_460.ArrayNum;
                          if (bVar7) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                        }
                        if (uVar18 == local_460.ArrayMax) {
                          uVar18 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x101,&local_460.AllocatorInstance,&local_460.ArrayMax
                                             );
                          FVar16.Data = local_460.AllocatorInstance.Data;
                        }
                        local_460.ArrayNum = uVar18 + 1;
                        FVar16.Data[(int)uVar18] = local_467[0];
                        FVar15.Data = (FScriptContainerElement *)(ulonglong)(uint)local_460.ArrayNum
                        ;
                        FVar16.Data = local_460.AllocatorInstance.Data;
                      }
                      local_467[0] = (FScriptContainerElement)((char)local_467[0] + '\x01');
                    } while ((char)local_467[0] < '@');
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                    WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[11]>
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                               (wchar_t (*) [11])L"ArrayFlags",&local_460);
                    if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_460.AllocatorInstance.Data);
                    }
                    if (param_1[2].Next != (FField *)0x0) {
                      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                      WriteObjectStart<wchar_t_const_(&)[6]>
                                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                                 (wchar_t (*) [6])L"Inner");
                      WriteFField(param_1[2].Next,param_2);
                      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                    }
                    goto LAB_144631899;
                  }
                  if ((EVar4 >> 0x38 & 1) != 0) {
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                    WriteObjectStart<wchar_t_const_(&)[14]>
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                               (wchar_t (*) [14])L"ValueProperty");
                    pFVar12 = FOptionalPropertyLayout::GetValueProperty
                                        ((FOptionalPropertyLayout *)&param_1[2].Owner);
                    WriteFField((FField *)pFVar12,param_2);
                    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                    goto LAB_144631899;
                  }
                  if (((EVar4 >> 0xc & 1) == 0) ||
                     (pFVar5 = param_1[2].Owner.Container.Field, pFVar5 == (FField *)0x0))
                  goto LAB_144631899;
                  pFVar10 = UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)pFVar5,&local_168,(UObject *)0x0);
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                  WriteValue<FString,wchar_t_const_(&)[15]>
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                             (wchar_t (*) [15])L"InterfaceClass",pFVar10);
                  local_1d8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
                }
                else {
                  pFVar5 = param_1[2].Owner.Container.Field;
                  if (pFVar5 == (FField *)0x0) goto LAB_144631899;
                  pFVar10 = UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)pFVar5,&local_178,(UObject *)0x0);
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                  WriteValue<FString,wchar_t_const_(&)[18]>
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                             (wchar_t (*) [18])L"SignatureFunction",pFVar10);
                  local_1d8.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
                }
              }
              else {
                if (param_1[2].Owner.Container.Field == (FField *)0x0) goto LAB_144631899;
                FObjectPtr::GetPathName((FObjectPtr *)&param_1[2].Owner,&local_278);
                TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                WriteValue<FString,wchar_t_const_(&)[5]>
                          ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                           (wchar_t (*) [5])L"Enum",&local_278);
                local_1d8.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
              }
            }
            else {
              pFVar5 = param_1[2].Owner.Container.Field;
              if (pFVar5 == (FField *)0x0) goto LAB_144631899;
              pFVar10 = UObjectBaseUtility::GetPathName
                                  ((UObjectBaseUtility *)pFVar5,&local_198,(UObject *)0x0);
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
              WriteValue<FString,wchar_t_const_(&)[18]>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         (wchar_t (*) [18])L"SignatureFunction",pFVar10);
              local_1d8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar5 = param_1[2].Owner.Container.Field;
            if (pFVar5 == (FField *)0x0) goto LAB_144631899;
            pFVar10 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pFVar5,&local_1a8,(UObject *)0x0);
            iVar9 = *(int *)&param_2->field_0x18;
            uVar14 = iVar9 - 1;
            uVar13 = uVar18;
            if ((int)uVar14 < iVar9) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if (uVar13 == 0) {
              local_498 = (FScriptContainerElement *)(longlong)(int)uVar14;
              local_490 = (FScriptContainerElement *)(longlong)iVar9;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                         (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Stack.Top() == EJson::Object",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                   ,0x110,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar13 = *(uint *)&param_2->field_0x20;
            if ((uVar13 != 2) && ((0xc < uVar13 || ((0x1013U >> (uVar13 & 0x1f) & 1) == 0)))) {
              local_3a0[0] = 0x2c;
              (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                        (*(longlong **)&param_2->field_0x8,local_3a0,2);
              *(undefined4 *)&param_2->field_0x20 = 1;
            }
            (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                      (*(longlong **)&param_2->field_0x8,L"\r\n",4);
            plVar3 = *(longlong **)&param_2->field_0x8;
            if (0 < (int)*(uint *)&param_2->field_0x24) {
              uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
              do {
                local_398[0] = 9;
                (**(code **)(*plVar3 + 0x188))(plVar3,local_398,2);
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            uStack_290 = 6;
            local_298 = L"Struct";
            local_1c8 = 0x50624d38;
            uStack_1c4 = 1;
            uStack_1c0 = 6;
            uStack_1bc = uStack_28c;
            (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_1c8);
            local_390[0] = 0x3a;
            (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                      (*(longlong **)&param_2->field_0x8,local_390,2);
            *(undefined4 *)&param_2->field_0x20 = 0xc;
            local_388[0] = 0x20;
            (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                      (*(longlong **)&param_2->field_0x8,local_388,2);
            pFVar17 = (pFVar10->Data).AllocatorInstance.Data;
            iVar9 = (pFVar10->Data).ArrayNum;
            uStack_280 = iVar9 - 1;
            if (iVar9 == 0) {
              uStack_280 = uVar18;
            }
            local_288._0_4_ = SUB84(pFVar17,0);
            local_288._4_4_ = (undefined4)((ulonglong)pFVar17 >> 0x20);
            local_1b8 = (undefined4)local_288;
            uStack_1b4 = local_288._4_4_;
            uStack_1ac = uStack_27c;
            local_288 = pFVar17;
            uStack_1b0 = uStack_280;
            (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_1b8);
            *(undefined4 *)&param_2->field_0x20 = 7;
            local_1d8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar5 = param_1[2].Owner.Container.Field;
          if (pFVar5 != (FField *)0x0) {
            local_360 = (FName)pFVar5->Next;
            ::FName::ToString(&local_360,&local_2c8);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<FString,wchar_t_const_(&)[14]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [14])L"PropertyClass",&local_2c8);
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
          }
          EVar4 = param_1->ClassPrivate->CastFlags;
          if ((EVar4 >> 10 & 1) == 0) {
            if (((EVar4 >> 0x21 & 1) == 0) || (param_1[2].Next == (FField *)0x0))
            goto LAB_144631899;
            local_350 = (FName)(param_1[2].Next)->Next;
            ::FName::ToString(&local_350,&local_2a8);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<FString,wchar_t_const_(&)[10]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [10])L"MetaClass",&local_2a8);
            local_1d8.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
          }
          else {
            if (param_1[2].Next == (FField *)0x0) goto LAB_144631899;
            local_358 = (FName)(param_1[2].Next)->Next;
            ::FName::ToString(&local_358,&local_2b8);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<FString,wchar_t_const_(&)[10]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [10])L"MetaClass",&local_2b8);
            local_1d8.Data.AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        pFVar5 = param_1[2].Owner.Container.Field;
        if (pFVar5 != (FField *)0x0) {
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
          WriteObjectStart<wchar_t_const_(&)[19]>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     (wchar_t (*) [19])L"UnderlyingProperty");
          WriteFField(pFVar5,param_2);
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
        }
        if (param_1[2].Next == (FField *)0x0) goto LAB_144631899;
        pFVar10 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_1[2].Next,&local_1d8,(UObject *)0x0);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[5]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [5])L"Enum",pFVar10);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    else {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<wchar_t_const_(&)[10]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [10])L"FieldSize",*(uchar *)&param_1[2].Owner.Container);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<wchar_t_const_(&)[10]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [10])L"FieldMask",
                 *(uchar *)((longlong)&param_1[2].Owner.Container + 3));
      iVar9 = *(int *)&param_2->field_0x18;
      bVar1 = *(byte *)((longlong)&param_1[2].Owner.Container + 1);
      uVar18 = iVar9 - 1;
      if ((int)uVar18 < iVar9) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_498 = (FScriptContainerElement *)(longlong)(int)uVar18;
        local_490 = (FScriptContainerElement *)(longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x106,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar18 = *(uint *)&param_2->field_0x20;
      if ((uVar18 != 2) && ((0xc < uVar18 || ((0x1013U >> (uVar18 & 0x1f) & 1) == 0)))) {
        local_3c0[0] = 0x2c;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_3c0,2);
        *(undefined4 *)&param_2->field_0x20 = 1;
      }
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,L"\r\n",4);
      plVar3 = *(longlong **)&param_2->field_0x8;
      if (0 < (int)*(uint *)&param_2->field_0x24) {
        uVar19 = (ulonglong)*(uint *)&param_2->field_0x24;
        do {
          local_3b8[0] = 9;
          (**(code **)(*plVar3 + 0x188))(plVar3,local_3b8,2);
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      uStack_2d0 = 10;
      local_2d8 = L"ByteOffset";
      local_1e8 = 0x50d928a0;
      uStack_1e4 = 1;
      uStack_1e0 = 10;
      uStack_1dc = uStack_2cc;
      (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_1e8);
      local_3b0[0] = 0x3a;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_3b0,2);
      *(undefined4 *)&param_2->field_0x20 = 0xc;
      local_3a8[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_3a8,2);
      EVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         (ulonglong)bVar1);
      *(EJsonToken *)&param_2->field_0x20 = EVar8;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<wchar_t_const_(&)[9]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [9])L"ByteMask",*(uchar *)((longlong)&param_1[2].Owner.Container + 2))
      ;
    }
  }
LAB_144631899:
  FMD5::~FMD5(&local_a8);
  FArchive::~FArchive((FArchive *)&local_138);
  return;
}

// WriteFFieldClass @ 1446318e0

void __cdecl UE::JsonUtilities::WriteFFieldClass(FFieldClass *param_1,FJsonUETypeWriter *param_2)

{
  ulong64 uVar1;
  EClassCastFlags EVar2;
  longlong *plVar3;
  code *pcVar4;
  EClassFlags EVar5;
  bool bVar6;
  EJsonToken EVar7;
  int iVar8;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar9;
  FField *pFVar10;
  uint uVar11;
  EClassFlags EVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  EClassFlags EVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  FScriptContainerElement local_b8 [8];
  undefined2 local_b0 [4];
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FString local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_58;
  
  ::FName::ToString(&param_1->Name,&local_98);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[5]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [5])L"Name",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar19 = (FScriptContainerElement *)0x0;
  uVar1 = param_1->Id;
  uVar13 = *(int *)&param_2->field_0x18 - 1;
  uVar11 = 0;
  if ((int)uVar13 < *(int *)&param_2->field_0x18) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&param_2->field_0x10 + -4 + (longlong)*(int *)&param_2->field_0x18 * 4)
      != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"Id");
  local_res8[0] = 0x20;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res8,2);
  EVar7 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,uVar1);
  *(EJsonToken *)&param_2->field_0x20 = EVar7;
  EVar2 = param_1->CastFlags;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8[0] = (FScriptContainerElement)0x0;
  EVar16 = CLASS_Abstract;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FVar14.Data = pFVar19;
  pFVar17 = pFVar19;
  do {
    if ((EVar2 >> ((ulonglong)(byte)local_b8[0] & 0x3f) & 1) != 0) {
      iVar8 = (int)pFVar17;
      if ((FVar14.Data <= local_b8) && (local_b8 < FVar14.Data + local_a8.ArrayMax)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar14.Data = local_a8.AllocatorInstance.Data;
        iVar8 = local_a8.ArrayNum;
      }
      if (iVar8 == local_a8.ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
        FVar14.Data = local_a8.AllocatorInstance.Data;
      }
      local_a8.ArrayNum = iVar8 + 1U;
      FVar14.Data[iVar8] = local_b8[0];
      pFVar17 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1U);
      FVar14.Data = local_a8.AllocatorInstance.Data;
    }
    local_b8[0] = (FScriptContainerElement)((char)local_b8[0] + '\x01');
  } while ((char)local_b8[0] < '@');
  uVar13 = *(int *)&param_2->field_0x18 - 1;
  uVar11 = 0;
  if ((int)uVar13 < *(int *)&param_2->field_0x18) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&param_2->field_0x10 + -4 + (longlong)*(int *)&param_2->field_0x18 * 4)
      != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar11 = *(uint *)&param_2->field_0x20;
  if ((uVar11 != 2) && ((0xc < uVar11 || ((0x1013U >> (uVar11 & 0x1f) & 1) == 0)))) {
    local_res10[0] = 0x2c;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_res10,2);
    *(undefined4 *)&param_2->field_0x20 = 1;
  }
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
  plVar3 = *(longlong **)&param_2->field_0x8;
  if (0 < (int)*(uint *)&param_2->field_0x24) {
    uVar15 = (ulonglong)*(uint *)&param_2->field_0x24;
    do {
      local_res18[0] = 9;
      (**(code **)(*plVar3 + 0x188))(plVar3,local_res18,2);
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  uStack_80 = 9;
  local_88 = L"CastFlags";
  local_68 = 0x50d92a30;
  uStack_64 = 1;
  uStack_60 = 9;
  uStack_5c = uStack_7c;
  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_68);
  local_res20[0] = 0x3a;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res20,2);
  *(undefined4 *)&param_2->field_0x20 = 0xc;
  local_b0[0] = 0x20;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_b0,2);
  EVar7 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<signed_char>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,&local_a8);
  *(EJsonToken *)&param_2->field_0x20 = EVar7;
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  lVar18 = 0x10;
  do {
    EVar12 = EVar16 | (EClassFlags)pFVar19;
    if ((EVar16 & param_1->ClassFlags) == CLASS_None) {
      EVar12 = (EClassFlags)pFVar19;
    }
    EVar5 = EVar16 << 1 | EVar12;
    if ((param_1->ClassFlags & EVar16 << 1) == CLASS_None) {
      EVar5 = EVar12;
    }
    EVar16 = EVar16 << 2 | EVar16 >> 0x1e;
    pFVar19 = (FScriptContainerElement *)(ulonglong)EVar5;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  pTVar9 = FindUsedBits<enum_EClassFlags>(&local_58,EVar5);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[11]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [11])L"ClassFlags",pTVar9);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (param_1->SuperClass != (FFieldClass *)0x0) {
    ::FName::ToString(&param_1->SuperClass->Name,&local_78);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[11]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [11])L"SuperClass",&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (EVar5 != CLASS_None) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[14]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [14])L"DefaultObject");
    if (param_1->DefaultObject == (FField *)0x0) {
      pFVar10 = FFieldClass::ConstructDefaultObject(param_1);
      param_1->DefaultObject = pFVar10;
      if (pFVar10 == (FField *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0xb3,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    WriteFField(param_1->DefaultObject,param_2);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
  }
  return;
}

// WriteFScriptMapLayout @ 144631d80

void __cdecl
UE::JsonUtilities::WriteFScriptMapLayout(FScriptMapLayout *param_1,FJsonUETypeWriter *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar6 = *(int *)&param_2->field_0x18 - 1;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)&param_2->field_0x18) {
    uVar4 = ~uVar6 >> 0x1f;
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
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 + (longlong)*(int *)&param_2->field_0x18 * 4)
       != 6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x20;
  if ((uVar4 != 2) && ((0xc < uVar4 || ((0x1013U >> (uVar4 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_res8,2);
    *(undefined4 *)&param_2->field_0x20 = 1;
  }
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
  plVar1 = *(longlong **)&param_2->field_0x8;
  if (0 < (int)*(uint *)&param_2->field_0x24) {
    uVar7 = (ulonglong)*(uint *)&param_2->field_0x24;
    do {
      local_res10[0] = 9;
      (**(code **)(*plVar1 + 0x188))(plVar1,local_res10,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_38 = 0x50d92790;
  uStack_34 = 1;
  uStack_30 = 0xb;
  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_38);
  local_res18[0] = 0x3a;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res18,2);
  *(undefined4 *)&param_2->field_0x20 = 0xc;
  local_res20[0] = 0x20;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res20,2);
  EVar5 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     param_1->ValueOffset);
  *(EJsonToken *)&param_2->field_0x20 = EVar5;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[10]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [10])L"SetLayout");
  WriteFScriptSetLayout(&param_1->SetLayout,param_2);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
  return;
}

// WriteFScriptSetLayout @ 144631f90

void __cdecl
UE::JsonUtilities::WriteFScriptSetLayout(FScriptSparseSetLayout *param_1,FJsonUETypeWriter *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  EJsonToken EVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_a8 [4];
  undefined2 local_a0 [4];
  undefined2 local_98 [4];
  undefined2 local_90 [4];
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<int_const_&,wchar_t_const_(&)[5]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [5])L"Size",&param_1->Size);
  uVar6 = *(int *)&param_2->field_0x18 - 1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)&param_2->field_0x18) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&param_2->field_0x10 + -4 + (longlong)*(int *)&param_2->field_0x18 * 4)
      != 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = *(uint *)&param_2->field_0x20;
  if ((uVar5 != 2) && ((0xc < uVar5 || ((0x1013U >> (uVar5 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_res8,2);
    *(undefined4 *)&param_2->field_0x20 = 1;
  }
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
  plVar1 = *(longlong **)&param_2->field_0x8;
  if (0 < (int)*(uint *)&param_2->field_0x24) {
    uVar7 = (ulonglong)*(uint *)&param_2->field_0x24;
    do {
      local_res10[0] = 9;
      (**(code **)(*plVar1 + 0x188))(plVar1,local_res10,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uStack_80 = 0x10;
  local_88 = L"HashNextIdOffset";
  local_68 = 0x50d92720;
  uStack_64 = 1;
  uStack_60 = 0x10;
  uStack_5c = uStack_7c;
  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_68);
  local_res18[0] = 0x3a;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res18,2);
  *(undefined4 *)&param_2->field_0x20 = 0xc;
  local_res20[0] = 0x20;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res20,2);
  EVar4 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     param_1->HashNextIdOffset);
  *(EJsonToken *)&param_2->field_0x20 = EVar4;
  uVar6 = *(int *)&param_2->field_0x18 - 1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)&param_2->field_0x18) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&param_2->field_0x10 + -4 + (longlong)*(int *)&param_2->field_0x18 * 4)
      != 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = *(uint *)&param_2->field_0x20;
  if ((uVar5 != 2) && ((0xc < uVar5 || ((0x1013U >> (uVar5 & 0x1f) & 1) == 0)))) {
    local_a8[0] = 0x2c;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_a8,2);
    *(undefined4 *)&param_2->field_0x20 = 1;
  }
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
  plVar1 = *(longlong **)&param_2->field_0x8;
  if (0 < (int)*(uint *)&param_2->field_0x24) {
    uVar7 = (ulonglong)*(uint *)&param_2->field_0x24;
    do {
      local_a0[0] = 9;
      (**(code **)(*plVar1 + 0x188))(plVar1,local_a0,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uStack_70 = 0xf;
  local_78 = L"HashIndexOffset";
  local_58 = 0x50d92748;
  uStack_54 = 1;
  uStack_50 = 0xf;
  uStack_4c = uStack_6c;
  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_58);
  local_98[0] = 0x3a;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_98,2);
  *(undefined4 *)&param_2->field_0x20 = 0xc;
  local_90[0] = 0x20;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_90,2);
  EVar4 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     param_1->HashIndexOffset);
  *(EJsonToken *)&param_2->field_0x20 = EVar4;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[18]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [18])L"SparseArrayLayout");
  WriteFScriptSparseArrayLayout(&param_1->SparseArrayLayout,param_2);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
  return;
}

// WriteFScriptSparseArrayLayout @ 144632380

void __cdecl
UE::JsonUtilities::WriteFScriptSparseArrayLayout
          (FScriptSparseArrayLayout *param_1,FJsonUETypeWriter *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar6 = *(int *)&param_2->field_0x18 - 1;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)&param_2->field_0x18) {
    uVar4 = ~uVar6 >> 0x1f;
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
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 + (longlong)*(int *)&param_2->field_0x18 * 4)
       != 6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x20;
  if ((uVar4 != 2) && ((0xc < uVar4 || ((0x1013U >> (uVar4 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_res8,2);
    *(undefined4 *)&param_2->field_0x20 = 1;
  }
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
  plVar1 = *(longlong **)&param_2->field_0x8;
  if (0 < (int)*(uint *)&param_2->field_0x24) {
    uVar7 = (ulonglong)*(uint *)&param_2->field_0x24;
    do {
      local_res10[0] = 9;
      (**(code **)(*plVar1 + 0x188))(plVar1,local_res10,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_38 = 0x50d92708;
  uStack_34 = 1;
  uStack_30 = 9;
  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_38);
  local_res18[0] = 0x3a;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res18,2);
  *(undefined4 *)&param_2->field_0x20 = 0xc;
  local_res20[0] = 0x20;
  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
            (*(longlong **)&param_2->field_0x8,local_res20,2);
  EVar5 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     param_1->Alignment);
  *(EJsonToken *)&param_2->field_0x20 = EVar5;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<int_const_&,wchar_t_const_(&)[5]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [5])L"Size",&param_1->Size);
  return;
}

// WriteUField @ 144632630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144633ccc) */

void __cdecl UE::JsonUtilities::WriteUField(UField *param_1,FJsonUETypeWriter *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  EStructFlags EVar4;
  EVerseFunctionFlags EVar5;
  UObjectBaseUtility *pUVar6;
  FField *pFVar7;
  EClassCastFlags EVar8;
  undefined8 uVar9;
  FWeakObjectPtr this;
  longlong *plVar10;
  code *pcVar11;
  EPropertyFlags EVar12;
  undefined4 uVar13;
  void *pvVar14;
  FJsonUETypeWriter *pFVar15;
  UObject *pUVar16;
  bool bVar17;
  bool bVar18;
  EJsonToken EVar19;
  int iVar20;
  FString *pFVar21;
  UClass *pUVar22;
  TTuple<FName,__int64> *pTVar23;
  FText *this_00;
  FScriptContainerElement *pFVar24;
  TTuple<FName,int> *pTVar25;
  FGuid *this_01;
  ICppStructOps *pIVar26;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar27;
  wchar_t *pwVar28;
  UClass *pUVar29;
  size_t sVar30;
  UEnum *this_02;
  FScriptContainerElement *pFVar31;
  UScriptStruct *this_03;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar32;
  ForAnyElementType FVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  FScriptContainerElement *pFVar40;
  FName *pFVar41;
  undefined4 *puVar42;
  FScriptContainerElement *pFVar43;
  int iVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  uint uVar47;
  FName FVar48;
  UObject *this_04;
  byte bVar49;
  longlong *plVar50;
  FFieldPath *pFVar51;
  FFieldPath *pFVar52;
  FName *pFVar53;
  undefined1 auStackY_11f8 [32];
  FScriptContainerElement local_11a8;
  FScriptContainerElement local_11a7;
  FScriptContainerElement local_11a6 [6];
  TArray<FString,TSizedDefaultAllocator<32>_> local_11a0;
  UClass *local_1190;
  undefined1 local_1188;
  undefined1 local_1187;
  undefined1 local_1186;
  undefined1 local_1185;
  undefined1 local_1184;
  undefined1 local_1183;
  undefined1 local_1182;
  bool local_1181;
  bool local_1180;
  bool local_117f;
  bool local_117e;
  bool local_117d;
  bool local_117c;
  bool local_117b;
  bool local_117a;
  bool local_1179;
  bool local_1178;
  bool local_1177;
  bool local_1176;
  bool local_1175;
  bool local_1174;
  bool local_1173;
  bool local_1172;
  bool local_1171;
  bool local_1170;
  undefined1 local_116f;
  undefined1 local_116e;
  undefined1 local_116d;
  undefined1 local_116c;
  undefined1 local_116b;
  undefined1 local_116a;
  undefined1 local_1169;
  undefined1 local_1168;
  undefined1 local_1167;
  undefined1 local_1166;
  undefined1 local_1165;
  undefined1 local_1164;
  undefined1 local_1163 [3];
  FFieldPath *local_1160;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1158;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1148;
  ForAnyElementType local_1138;
  uint local_1130;
  uint local_112c;
  TArray<FField_const_*,TSizedDefaultAllocator<32>_> local_1128;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_1118;
  EPropertyFlags local_1108;
  undefined8 uStack_1100;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_10f8;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_10e8;
  undefined1 local_10d8;
  FIdentityFunctor local_10d7;
  FIdentityFunctor local_10d6;
  <lambda_2> local_10d5;
  FIdentityFunctor local_10d4;
  FIdentityFunctor local_10d3;
  FIdentityFunctor local_10d2;
  FIdentityFunctor local_10d1;
  FIdentityFunctor local_10d0;
  <lambda_5> local_10cf;
  FIdentityFunctor local_10ce;
  undefined2 local_10c8 [4];
  undefined2 local_10c0 [4];
  undefined2 local_10b8 [4];
  undefined2 local_10b0 [4];
  undefined2 local_10a8 [4];
  undefined2 local_10a0 [4];
  undefined2 local_1098 [4];
  undefined2 local_1090 [4];
  undefined2 local_1088 [4];
  undefined2 local_1080 [4];
  undefined2 local_1078 [4];
  undefined2 local_1070 [4];
  undefined2 local_1068 [4];
  undefined2 local_1060 [4];
  undefined2 local_1058 [4];
  undefined2 local_1050 [4];
  undefined2 local_1048 [4];
  undefined2 local_1040 [4];
  undefined2 local_1038 [4];
  undefined2 local_1030 [4];
  undefined2 local_1028 [4];
  undefined2 local_1020 [4];
  undefined2 local_1018 [4];
  undefined2 local_1010 [4];
  undefined2 local_1008 [4];
  undefined2 local_1000 [4];
  undefined2 local_ff8 [4];
  undefined2 local_ff0 [4];
  undefined2 local_fe8 [4];
  undefined2 local_fe0 [4];
  undefined2 local_fd8 [4];
  undefined2 local_fd0 [4];
  undefined2 local_fc8 [4];
  undefined2 local_fc0 [4];
  undefined2 local_fb8 [4];
  undefined2 local_fb0 [4];
  undefined2 local_fa8 [4];
  undefined2 local_fa0 [4];
  undefined2 local_f98 [4];
  undefined2 local_f90 [4];
  undefined2 local_f88 [4];
  undefined2 local_f80 [4];
  undefined2 local_f78 [4];
  undefined2 local_f70 [4];
  undefined2 local_f68 [4];
  undefined2 local_f60 [4];
  undefined2 local_f58 [4];
  undefined2 local_f50 [4];
  undefined2 local_f48 [4];
  undefined2 local_f40 [4];
  undefined2 local_f38 [4];
  undefined2 local_f30 [4];
  undefined2 local_f28 [4];
  undefined2 local_f20 [4];
  longlong local_f18;
  FName *local_f10;
  FString local_f08;
  int local_ef8;
  uint uStack_ef4;
  FName FStack_ef0;
  uint local_ee8;
  uint uStack_ee4;
  uint uStack_ee0;
  undefined4 uStack_edc;
  FJsonUETypeWriter *local_ed8;
  TTuple<FName,int> local_ed0;
  FString local_ec0;
  int local_eb0;
  uint uStack_eac;
  FName FStack_ea8;
  undefined4 local_ea0;
  uint uStack_e9c;
  int iStack_e98;
  undefined4 uStack_e94;
  void *local_e90;
  undefined8 local_e88;
  FString local_e80;
  FString local_e70;
  undefined8 local_e60;
  longlong local_e58;
  FJsonUETypeWriter *local_e50;
  FJsonUETypeWriter *local_e48;
  FString local_e40;
  FString local_e30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e00;
  undefined4 local_de0;
  int local_ddc;
  int local_dd8;
  FName local_dd4;
  FName local_dcc;
  <lambda_3> local_dc0;
  void **local_db8;
  FName local_db0;
  <lambda_6> local_da8;
  UObject *local_da0;
  FName local_d98;
  FName *local_d90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d88;
  undefined8 uStack_d68;
  FName *local_d60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d58;
  undefined8 uStack_d38;
  longlong *local_d28;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d20;
  undefined8 uStack_d00;
  FString local_cf8;
  wchar_t *local_ce8;
  undefined4 local_ce0;
  wchar_t *local_cd8;
  undefined4 local_cd0;
  wchar_t *local_cc8;
  undefined4 local_cc0;
  undefined8 local_cb8;
  uint uStack_cb0;
  undefined4 uStack_cac;
  FString local_ca8;
  wchar_t *local_c98;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined8 local_c88;
  uint uStack_c80;
  undefined4 uStack_c7c;
  FString local_c78;
  undefined8 local_c68;
  uint uStack_c60;
  undefined4 uStack_c5c;
  undefined8 local_c58;
  uint uStack_c50;
  undefined4 uStack_c4c;
  undefined *local_c48;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  FScriptContainerElement *local_c38;
  uint uStack_c30;
  undefined4 uStack_c2c;
  code *local_c28;
  void ***local_c20;
  undefined8 local_c18;
  uint uStack_c10;
  undefined4 uStack_c0c;
  undefined8 local_c08;
  uint uStack_c00;
  undefined4 uStack_bfc;
  wchar_t *local_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  wchar_t *local_be8;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined8 local_bd8;
  int iStack_bd0;
  undefined4 uStack_bcc;
  undefined8 local_bc8;
  uint uStack_bc0;
  undefined4 uStack_bbc;
  undefined8 local_bb8;
  int iStack_bb0;
  undefined4 uStack_bac;
  wchar_t *local_ba8;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined8 local_b98;
  int iStack_b90;
  undefined4 uStack_b8c;
  FString local_b88;
  wchar_t *local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  wchar_t *local_b68;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  wchar_t *local_b58;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined8 local_b48;
  uint uStack_b40;
  undefined4 uStack_b3c;
  undefined8 local_b38;
  int iStack_b30;
  undefined4 uStack_b2c;
  undefined8 local_b28;
  uint uStack_b20;
  undefined4 uStack_b1c;
  FString local_b18;
  undefined8 local_b08;
  uint uStack_b00;
  undefined4 uStack_afc;
  longlong *local_af8;
  longlong lStack_af0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  int local_ad0;
  undefined4 uStack_acc;
  longlong *local_ac8;
  longlong lStack_ac0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  int local_aa0;
  undefined4 uStack_a9c;
  FName *local_a98;
  longlong lStack_a90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  int local_a70;
  undefined4 uStack_a6c;
  FName *local_a68;
  longlong lStack_a60;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  int local_a40;
  undefined4 uStack_a3c;
  FName *local_a38;
  longlong lStack_a30;
  FName FStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  int local_a10;
  undefined4 uStack_a0c;
  FName *local_a08;
  undefined8 uStack_a00;
  FName FStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  int local_9e0;
  undefined4 uStack_9dc;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  undefined4 local_978;
  undefined4 uStack_974;
  uint uStack_970;
  undefined4 uStack_96c;
  FString local_968;
  void *local_958 [2];
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_948;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  uint uStack_8d0;
  undefined4 uStack_8cc;
  FString local_8c8;
  FString local_8b8;
  TStringView<wchar_t> local_8a8;
  TStringView<wchar_t> local_898;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 local_878;
  undefined4 uStack_874;
  uint uStack_870;
  undefined4 uStack_86c;
  FString local_868;
  FString local_858;
  FString local_848;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  uint uStack_7f0;
  undefined4 uStack_7ec;
  FString local_7e8;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_7d8;
  FString local_7c8;
  TStringView<wchar_t> local_7b8;
  wchar_t *local_7a8;
  undefined8 uStack_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  int iStack_790;
  undefined4 uStack_78c;
  FString local_788;
  undefined4 local_778;
  undefined4 uStack_774;
  int iStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  int iStack_760;
  undefined4 uStack_75c;
  FString local_758;
  TStringView<wchar_t> local_748;
  undefined4 local_738;
  undefined4 uStack_734;
  int iStack_730;
  undefined4 uStack_72c;
  FString local_728;
  FString local_718;
  undefined1 *local_708;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  FString local_6e8;
  FString local_6d8;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  uint uStack_6c0;
  undefined4 uStack_6bc;
  TStringView<wchar_t> local_6b8;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  uint uStack_6a0;
  undefined4 uStack_69c;
  FString local_698;
  TStringView<wchar_t> local_688;
  wchar_t *local_678;
  undefined8 uStack_670;
  wchar_t *local_668;
  undefined4 local_660;
  undefined4 local_658;
  undefined4 uStack_654;
  uint uStack_650;
  undefined4 uStack_64c;
  FString local_648;
  undefined4 local_638;
  undefined4 uStack_634;
  uint uStack_630;
  undefined4 uStack_62c;
  FString local_628;
  undefined1 *local_618;
  FString local_610;
  undefined1 *local_600;
  undefined1 *local_5f8;
  undefined1 *local_5f0;
  undefined1 *local_5e8;
  undefined1 *local_5e0;
  FString local_5d8;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  uint uStack_5c0;
  undefined4 uStack_5bc;
  FString local_5b8;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  uint uStack_5a0;
  undefined4 uStack_59c;
  FText local_598;
  FString local_588;
  longlong *local_578;
  longlong lStack_570;
  TBitArray<FDefaultBitArrayAllocator> *local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  FName *local_548;
  longlong lStack_540;
  TBitArray<FDefaultBitArrayAllocator> *local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  FName *local_518;
  undefined8 uStack_510;
  FName local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  TTuple<FName,__int64> local_4e8;
  undefined1 local_4d8 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4a8;
  FMD5Hash local_488;
  FArchiveMD5Generator local_468;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  char local_258 [512];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_11f8;
  local_1190 = (UClass *)param_1;
  local_e48 = param_2;
  FArchiveMD5Generator::FArchiveMD5Generator(&local_468);
  (**(code **)(param_1->_padding_ + 200))(param_1,&local_468);
  local_488.bIsValid = false;
  FMD5::Final(&local_468.HashBuilder,local_488.Bytes);
  local_488.bIsValid = true;
  FMD5Hash::LexToString(&local_488,&local_ca8);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[4]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [4])L"MD5",&local_ca8);
  if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[8]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [8])L"UObject");
  local_dd4 = (FName)param_1->_padding_;
  ::FName::ToString(&local_dd4,&local_b18);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[5]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [5])L"Name",&local_b18);
  if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b18.Data.AllocatorInstance.Data);
  }
  pFVar21 = ::LexToString(&local_5d8,(EObjectFlags)param_1->_padding_);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[6]>
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
             (wchar_t (*) [6])L"Flags",pFVar21);
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
  pUVar22 = Z_Construct_UClass_UEnum_NoRegister();
  iVar44 = (int)pUVar22->_padding_;
  if (((*(int *)(param_1->_padding_ + 0x38) < iVar44) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar44 * 8)
       != &pUVar22->_padding_)) || (param_1 == (UField *)0x0)) {
    pUVar22 = Z_Construct_UClass_UStruct_NoRegister();
    iVar44 = (int)pUVar22->_padding_;
    if (((*(int *)(param_1->_padding_ + 0x38) < iVar44) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar44 * 8) !=
         &pUVar22->_padding_)) || (param_1 == (UField *)0x0)) goto LAB_14463862f;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[8]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [8])L"UStruct");
    if (param_1[1]._padding_ != 0) {
      local_dcc = *(FName *)(param_1[1]._padding_ + 0x18);
      ::FName::ToString(&local_dcc,&local_c78);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[12]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [12])L"SuperStruct",&local_c78);
      if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c78.Data.AllocatorInstance.Data);
      }
    }
    FVar33.Data = (FScriptContainerElement *)0x0;
    uVar36 = 0;
    local_1148.ArrayMax = 0;
    local_1148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1148.ArrayNum = 0;
    pUVar29 = (UClass *)param_1;
    pUVar22 = local_1190;
    for (pUVar6 = (UObjectBaseUtility *)param_1[1]._padding_; local_1190 = pUVar29,
        pUVar6 != (UObjectBaseUtility *)0x0; pUVar6 = *(UObjectBaseUtility **)(pUVar6 + 1)) {
      pFVar24 = (FScriptContainerElement *)
                UObjectBaseUtility::GetPathName(pUVar6,&local_9d8,(UObject *)0x0);
      if (((local_1148.AllocatorInstance.Data <= pFVar24) &&
          (pFVar24 < local_1148.AllocatorInstance.Data + (longlong)local_1148.ArrayMax * 0x10)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_1148.ArrayNum == local_1148.ArrayMax) {
        local_1148.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_1148.AllocatorInstance,&local_1148.ArrayMax);
        pFVar40 = local_1148.AllocatorInstance.Data + (longlong)local_1148.ArrayNum * 0x10;
      }
      else {
        pFVar40 = local_1148.AllocatorInstance.Data + (longlong)local_1148.ArrayNum * 0x10;
      }
      local_1148.ArrayNum = local_1148.ArrayNum + 1;
      *(undefined8 *)pFVar40 = 0;
      *(undefined8 *)pFVar40 = *(undefined8 *)pFVar24;
      *(undefined8 *)pFVar24 = 0;
      *(int *)(pFVar40 + 8) = *(int *)(pFVar24 + 8);
      *(int *)(pFVar40 + 0xc) = *(int *)(pFVar24 + 0xc);
      *(undefined8 *)(pFVar24 + 8) = 0;
      if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
      }
      pUVar29 = local_1190;
      pUVar22 = local_1190;
    }
    local_708 = &local_1164;
    local_1190 = pUVar22;
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_1148.AllocatorInstance.Data,local_1148.ArrayNum,local_10d6,
               (TLess<void> *)&local_1164);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_(&)[9]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [9])L"Children",&local_1148);
    DestructItems<FString,int>((FString *)local_1148.AllocatorInstance.Data,local_1148.ArrayNum);
    if (local_1148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1148.AllocatorInstance.Data);
    }
    local_1128.ArrayNum = 0;
    local_1128.ArrayMax = 0;
    local_1128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f18 = param_1[1]._padding_;
    pFVar24 = FVar33.Data;
    if (local_f18 != 0) {
      while( true ) {
        iVar44 = (int)pFVar24;
        if ((local_1128.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f18) &&
           ((FScriptContainerElement *)&local_f18 <
            local_1128.AllocatorInstance.Data + (longlong)local_1128.ArrayMax * 8)) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar44 = local_1128.ArrayNum;
        }
        if (iVar44 == local_1128.ArrayMax) {
          iVar44 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1128.AllocatorInstance,&local_1128.ArrayMax);
        }
        local_1128.ArrayNum = iVar44 + 1U;
        *(longlong *)(local_1128.AllocatorInstance.Data + (longlong)iVar44 * 8) = local_f18;
        local_f18 = *(longlong *)(local_f18 + 0x18);
        if (local_f18 == 0) break;
        pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar44 + 1U);
      }
    }
    local_dc0.Writer = param_2;
    WriteSortedObjectHelper<FField_const_*,_UE::JsonUtilities::WriteUField_::__l28::<lambda_2>,_UE::JsonUtilities::WriteUField_::__l28::<lambda_3>_>
              (L"ChildProperties",&local_1128,param_2,&local_10d5,&local_dc0);
    if (local_1128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1128.AllocatorInstance.Data);
    }
    uVar35 = *(int *)&param_2->field_0x18 - 1;
    uVar38 = uVar36;
    if ((int)uVar35 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar35 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"PropertiesSize");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                        *(int *)&param_1[1].Next.field0_0x0);
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    uVar35 = *(int *)&param_2->field_0x18 - 1;
    uVar38 = uVar36;
    if ((int)uVar35 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar35 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"MinAlignment");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                        (int)*(short *)((longlong)&param_1[1].Next.field0_0x0 + 4));
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    local_11a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_11a0.ArrayNum = 0;
    local_11a0.ArrayMax = 0;
    for (pFVar7 = (FField *)param_1[2]._padding_; pFVar7 != (FField *)0x0; pFVar7 = pFVar7[1].Next)
    {
      pTVar25 = (TTuple<FName,int> *)FField::GetFullName(pFVar7,&local_9c8);
      if (((local_11a0.AllocatorInstance.Data <= pTVar25) &&
          (pTVar25 < (TTuple<FName,int> *)
                     (local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayMax * 0x10))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_11a0.ArrayNum == local_11a0.ArrayMax) {
        local_11a0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_11a0.AllocatorInstance,&local_11a0.ArrayMax);
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      else {
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      local_11a0.ArrayNum = local_11a0.ArrayNum + 1;
      pFVar41->ComparisonIndex = 0;
      pFVar41->Number = 0;
      uVar13 = *(undefined4 *)&pTVar25->field_0x4;
      pFVar41->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar25->field_0x0;
      pFVar41->Number = uVar13;
      *(uint *)&pTVar25->field_0x0 = 0;
      *(uint *)&pTVar25->field_0x4 = 0;
      pFVar41[1].ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
      pFVar41[1].Number = *(uint *)(pTVar25 + 1);
      *(undefined8 *)&pTVar25->field_0x8 = 0;
      if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
      }
    }
    local_5e0 = &local_1188;
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_11a0.AllocatorInstance.Data,local_11a0.ArrayNum,local_10d4,
               (TLess<void> *)&local_1188);
    uVar37 = *(int *)&param_2->field_0x18 - 1;
    uVar35 = 0;
    uVar38 = uVar35;
    if ((int)uVar37 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar37 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"PropertyLinks");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<FString>
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,&local_11a0
                       );
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    TArray<FString,TSizedDefaultAllocator<32>_>::Reset(&local_11a0,0);
    for (FVar48 = (FName)param_1[2]._padding_; FVar48 != (FName)0x0;
        FVar48 = *(FName *)((longlong)FVar48 + 0x50)) {
      pTVar25 = (TTuple<FName,int> *)FField::GetFullName((FField *)FVar48,&local_9b8);
      if (((local_11a0.AllocatorInstance.Data <= pTVar25) &&
          (pTVar25 < (TTuple<FName,int> *)
                     (local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayMax * 0x10))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_11a0.ArrayNum == local_11a0.ArrayMax) {
        local_11a0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_11a0.AllocatorInstance,&local_11a0.ArrayMax);
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      else {
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      local_11a0.ArrayNum = local_11a0.ArrayNum + 1;
      pFVar41->ComparisonIndex = 0;
      pFVar41->Number = 0;
      uVar13 = *(undefined4 *)&pTVar25->field_0x4;
      pFVar41->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar25->field_0x0;
      pFVar41->Number = uVar13;
      *(uint *)&pTVar25->field_0x0 = 0;
      *(uint *)&pTVar25->field_0x4 = 0;
      pFVar41[1].ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
      pFVar41[1].Number = *(uint *)(pTVar25 + 1);
      *(undefined8 *)&pTVar25->field_0x8 = 0;
      if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
      }
    }
    local_5e8 = &local_1187;
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_11a0.AllocatorInstance.Data,local_11a0.ArrayNum,local_10d3,
               (TLess<void> *)&local_1187);
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_(&)[9]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [9])L"RefLinks",&local_11a0);
    TArray<FString,TSizedDefaultAllocator<32>_>::Reset(&local_11a0,0);
    for (pFVar7 = (FField *)param_1[2]._padding_; pFVar7 != (FField *)0x0;
        pFVar7 = *(FField **)&pFVar7[1].FlagsPrivate) {
      pTVar25 = (TTuple<FName,int> *)FField::GetFullName(pFVar7,&local_9a8);
      if (((local_11a0.AllocatorInstance.Data <= pTVar25) &&
          (pTVar25 < (TTuple<FName,int> *)
                     (local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayMax * 0x10))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_11a0.ArrayNum == local_11a0.ArrayMax) {
        local_11a0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_11a0.AllocatorInstance,&local_11a0.ArrayMax);
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      else {
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      local_11a0.ArrayNum = local_11a0.ArrayNum + 1;
      pFVar41->ComparisonIndex = 0;
      pFVar41->Number = 0;
      uVar13 = *(undefined4 *)&pTVar25->field_0x4;
      pFVar41->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar25->field_0x0;
      pFVar41->Number = uVar13;
      *(uint *)&pTVar25->field_0x0 = 0;
      *(uint *)&pTVar25->field_0x4 = 0;
      pFVar41[1].ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
      pFVar41[1].Number = *(uint *)(pTVar25 + 1);
      *(undefined8 *)&pTVar25->field_0x8 = 0;
      if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
      }
    }
    local_5f0 = &local_1186;
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_11a0.AllocatorInstance.Data,local_11a0.ArrayNum,local_10d2,
               (TLess<void> *)&local_1186);
    uVar37 = *(int *)&param_2->field_0x18 - 1;
    uVar38 = uVar35;
    if ((int)uVar37 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar37 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"DestructorLinks");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<FString>
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,&local_11a0
                       );
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    TArray<FString,TSizedDefaultAllocator<32>_>::Reset(&local_11a0,0);
    for (pFVar7 = (FField *)param_1[2].Next.field0_0x0.DebugPtr; pFVar7 != (FField *)0x0;
        pFVar7 = (FField *)pFVar7[2]._padding_) {
      pTVar25 = (TTuple<FName,int> *)FField::GetFullName(pFVar7,&local_998);
      if (((local_11a0.AllocatorInstance.Data <= pTVar25) &&
          (pTVar25 < (TTuple<FName,int> *)
                     (local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayMax * 0x10))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_11a0.ArrayNum == local_11a0.ArrayMax) {
        local_11a0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_11a0.AllocatorInstance,&local_11a0.ArrayMax);
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      else {
        pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10
                           );
      }
      local_11a0.ArrayNum = local_11a0.ArrayNum + 1;
      pFVar41->ComparisonIndex = 0;
      pFVar41->Number = 0;
      uVar13 = *(undefined4 *)&pTVar25->field_0x4;
      pFVar41->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar25->field_0x0;
      pFVar41->Number = uVar13;
      *(uint *)&pTVar25->field_0x0 = 0;
      *(uint *)&pTVar25->field_0x4 = 0;
      pFVar41[1].ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
      pFVar41[1].Number = *(uint *)(pTVar25 + 1);
      *(undefined8 *)&pTVar25->field_0x8 = 0;
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
    }
    local_5f8 = &local_1185;
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_11a0.AllocatorInstance.Data,local_11a0.ArrayNum,local_10d1,
               (TLess<void> *)&local_1185);
    uVar37 = *(int *)&param_2->field_0x18 - 1;
    uVar38 = uVar35;
    if ((int)uVar37 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar37 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               L"PostConstructLinks");
    local_10c8[0] = 0x20;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_10c8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<FString>
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,&local_11a0
                       );
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    TArray<FString,TSizedDefaultAllocator<32>_>::Reset(&local_11a0,0);
    pFVar52 = (FFieldPath *)param_1[3]._padding_;
    iVar44 = (int)param_1[3]._padding_;
    pFVar51 = (FFieldPath *)(&pFVar52->ResolvedField + iVar44);
    local_1160 = pFVar51;
    while( true ) {
      if ((int)param_1[3]._padding_ != iVar44) {
        local_1184 = 0;
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1184);
      }
      if (pFVar52 == pFVar51) break;
      pUVar6 = (UObjectBaseUtility *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar52->ResolvedField)->
               AllocatorInstance).Data;
      if (pUVar6 == (UObjectBaseUtility *)0x0) {
        ::FString::FString(&local_f08,L"(null)");
        if (((local_11a0.AllocatorInstance.Data <= (TTuple<FName,int> *)&local_f08) &&
            ((FScriptContainerElement *)&local_f08 <
             local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (local_11a0.ArrayNum == local_11a0.ArrayMax) {
          local_11a0.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_11a0.AllocatorInstance,&local_11a0.ArrayMax);
          pFVar24 = local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10;
        }
        else {
          pFVar24 = local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayNum * 0x10;
        }
        local_11a0.ArrayNum = local_11a0.ArrayNum + 1;
        *(undefined8 *)pFVar24 = 0;
        *(FScriptContainerElement **)pFVar24 = local_f08.Data.AllocatorInstance.Data;
        local_f08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar24[8].field_0x0 = local_f08.Data.ArrayNum;
        *(int *)(pFVar24 + 0xc) = local_f08.Data.ArrayMax;
        local_f08.Data.ArrayNum = 0;
        local_f08.Data.ArrayMax = 0;
      }
      else {
        pTVar25 = (TTuple<FName,int> *)
                  UObjectBaseUtility::GetPathName(pUVar6,&local_988,(UObject *)0x0);
        if (((local_11a0.AllocatorInstance.Data <= pTVar25) &&
            (pTVar25 < (TTuple<FName,int> *)
                       (local_11a0.AllocatorInstance.Data + (longlong)local_11a0.ArrayMax * 0x10)))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (local_11a0.ArrayNum == local_11a0.ArrayMax) {
          local_11a0.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_11a0.AllocatorInstance,&local_11a0.ArrayMax);
          pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data +
                             (longlong)local_11a0.ArrayNum * 0x10);
        }
        else {
          pFVar41 = (FName *)(local_11a0.AllocatorInstance.Data +
                             (longlong)local_11a0.ArrayNum * 0x10);
        }
        local_11a0.ArrayNum = local_11a0.ArrayNum + 1;
        pFVar41->ComparisonIndex = 0;
        pFVar41->Number = 0;
        uVar13 = *(undefined4 *)&pTVar25->field_0x4;
        pFVar41->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar25->field_0x0;
        pFVar41->Number = uVar13;
        *(uint *)&pTVar25->field_0x0 = 0;
        *(uint *)&pTVar25->field_0x4 = 0;
        pFVar41[1].ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
        pFVar41[1].Number = *(uint *)(pTVar25 + 1);
        *(undefined8 *)&pTVar25->field_0x8 = 0;
        pFVar51 = local_1160;
        if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_988.Data.AllocatorInstance.Data);
          pFVar51 = local_1160;
        }
      }
      pFVar52 = (FFieldPath *)&pFVar52->ResolvedOwner;
    }
    local_600 = &local_1183;
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_11a0.AllocatorInstance.Data,local_11a0.ArrayNum,local_10d0,
               (TLess<void> *)&local_1183);
    uVar37 = *(int *)&param_2->field_0x18 - 1;
    uVar38 = uVar35;
    if ((int)uVar37 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar37 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               L"ScriptAndPropertyObjectReferences");
    local_10c0[0] = 0x20;
    (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
              (*(longlong **)&param_2->field_0x8,local_10c0,2);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<FString>
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,&local_11a0
                       );
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    uVar38 = 0;
    if (param_1[3]._padding_ != 0) {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[27]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [27])L"UnresolvedScriptProperties");
      plVar50 = (longlong *)param_1[3]._padding_;
      lVar34 = plVar50[1];
      pFVar51 = (FFieldPath *)*plVar50;
      local_1160 = (FFieldPath *)((longlong)pFVar51 + (longlong)(int)lVar34 * 0x28);
      while( true ) {
        pFVar52 = local_1160;
        if ((int)plVar50[1] != (int)lVar34) {
          local_1182 = 0;
          `TCheckedPointerIterator<TTuple<TFieldPath<FField>,int>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1182);
        }
        if (pFVar51 == pFVar52) break;
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
        pFVar21 = FFieldPath::ToString(pFVar51,&local_968);
        uVar47 = *(int *)&param_2->field_0x18 - 1;
        uVar37 = uVar35;
        if ((int)uVar47 < *(int *)&param_2->field_0x18) {
          uVar37 = ~uVar47 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"Path");
        local_10b8[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_10b8,2);
        pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
        iVar44 = (pFVar21->Data).ArrayNum;
        uStack_c60 = iVar44 - 1;
        if (iVar44 == 0) {
          uStack_c60 = uVar38;
        }
        local_c68._0_4_ = SUB84(pFVar24,0);
        local_c68._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
        local_978 = (undefined4)local_c68;
        uStack_974 = local_c68._4_4_;
        uStack_96c = uStack_c5c;
        local_c68 = pFVar24;
        uStack_970 = uStack_c60;
        (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_978);
        *(undefined4 *)&param_2->field_0x20 = 7;
        if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_968.Data.AllocatorInstance.Data);
        }
        uVar47 = *(int *)&param_2->field_0x18 - 1;
        uVar37 = uVar38;
        if ((int)uVar47 < *(int *)&param_2->field_0x18) {
          uVar37 = ~uVar47 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"Value");
        local_10b0[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_10b0,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            *(int *)&pFVar51[1].ResolvedField);
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
        pFVar51 = (FFieldPath *)&pFVar51[1].ResolvedOwner;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
      param_1 = (UField *)local_1190;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
    pUVar22 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar44 = (int)pUVar22->_padding_;
    uVar35 = 0;
    if ((*(int *)(((UClass *)param_1)->_padding_ + 0x38) < iVar44) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UClass *)param_1)->_padding_ + 0x30) + (longlong)iVar44 * 8) !=
        &pUVar22->_padding_)) {
      pUVar22 = Z_Construct_UClass_UFunction_NoRegister();
      iVar44 = (int)pUVar22->_padding_;
      if ((*(int *)(((UClass *)param_1)->_padding_ + 0x38) < iVar44) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((UClass *)param_1)->_padding_ + 0x30) + (longlong)iVar44 * 8) !=
          &pUVar22->_padding_)) {
        pUVar22 = Z_Construct_UClass_UClass_NoRegister();
        iVar44 = (int)pUVar22->_padding_;
        if ((iVar44 <= *(int *)(((UClass *)param_1)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(((UClass *)param_1)->_padding_ + 0x30) + (longlong)iVar44 * 8) ==
            &pUVar22->_padding_)) {
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
          WriteObjectStart<wchar_t_const_(&)[7]>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     (wchar_t (*) [7])L"UClass");
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
          WriteValue<bool_const_&,wchar_t_const_(&)[8]>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     (wchar_t (*) [8])L"bCooked",&((UClass *)param_1)->bCooked);
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
          WriteValue<bool_const_&,wchar_t_const_(&)[16]>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     (wchar_t (*) [16])L"bLayoutChanging",&((UClass *)param_1)->bLayoutChanging);
          pTVar27 = FindUsedBits<enum_EClassFlags>(&local_838,((UClass *)param_1)->ClassFlags);
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
          WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[11]>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     (wchar_t (*) [11])L"ClassFlags",pTVar27);
          if (local_838.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_838.AllocatorInstance.Data);
          }
          EVar8 = ((UClass *)param_1)->ClassCastFlags;
          local_10e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_11a6[0] = (FScriptContainerElement)0x0;
          local_10e8.ArrayNum = 0;
          local_10e8.ArrayMax = 0;
          pFVar24 = FVar33.Data;
          do {
            if ((EVar8 >> ((ulonglong)(byte)local_11a6[0] & 0x3f) & 1) != 0) {
              iVar44 = (int)pFVar24;
              if ((FVar33.Data <= local_11a6) && (local_11a6 < FVar33.Data + local_10e8.ArrayMax)) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar17) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                FVar33.Data = local_10e8.AllocatorInstance.Data;
                iVar44 = local_10e8.ArrayNum;
              }
              if (iVar44 == local_10e8.ArrayMax) {
                iVar44 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,&local_10e8.AllocatorInstance,&local_10e8.ArrayMax);
                FVar33.Data = local_10e8.AllocatorInstance.Data;
              }
              local_10e8.ArrayNum = iVar44 + 1U;
              FVar33.Data[iVar44] = local_11a6[0];
              pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar44 + 1U);
              FVar33.Data = local_10e8.AllocatorInstance.Data;
            }
            pUVar22 = local_1190;
            local_11a6[0] = (FScriptContainerElement)((char)local_11a6[0] + '\x01');
          } while ((char)local_11a6[0] < '@');
          uVar38 = *(int *)&param_2->field_0x18 - 1;
          uVar36 = uVar35;
          if ((int)uVar38 < *(int *)&param_2->field_0x18) {
            uVar36 = ~uVar38 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                       (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     L"ClassCastFlags");
          local_fe0[0] = 0x20;
          (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                    (*(longlong **)&param_2->field_0x8,local_fe0);
          EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                   WriteValueOnly<signed_char>
                             ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                              &local_10e8);
          *(EJsonToken *)&param_2->field_0x20 = EVar19;
          if (local_10e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10e8.AllocatorInstance.Data);
          }
          pUVar29 = (pUVar22->ClassWithin).field0_0x0.DebugPtr;
          if (pUVar29 != (UClass *)0x0) {
            pFVar21 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar29,&local_828,(UObject *)0x0);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<FString,wchar_t_const_(&)[12]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [12])L"ClassWithin",pFVar21);
            if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_828.Data.AllocatorInstance.Data);
            }
          }
          pFVar21 = ::FName::ToString(&pUVar22->ClassConfigName,&local_818);
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
          WriteValue<FString,wchar_t_const_(&)[16]>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                     (wchar_t (*) [16])L"ClassConfigName",pFVar21);
          if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_818.Data.AllocatorInstance.Data);
          }
          local_da8.Writer = param_2;
          WriteSortedObjectHelper<FRepRecord,_UE::JsonUtilities::WriteUField_::__l113::<lambda_5>,_UE::JsonUtilities::WriteUField_::__l113::<lambda_6>_>
                    (L"ClassReps",&pUVar22->ClassReps,param_2,&local_10cf,&local_da8);
          local_1158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1158.ArrayNum = 0;
          local_1158.ArrayMax = 0;
          pFVar40 = (pUVar22->NetFields).AllocatorInstance.Data;
          iVar44 = (pUVar22->NetFields).ArrayNum;
          pFVar24 = pFVar40 + (longlong)iVar44 * 8;
          while( true ) {
            if ((pUVar22->NetFields).ArrayNum != iVar44) {
              local_116f = 0;
              `TCheckedPointerIterator<TObjectPtr<UField>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_116f);
            }
            if (pFVar40 == pFVar24) break;
            pFVar31 = (FScriptContainerElement *)
                      UObjectBaseUtility::GetPathName
                                (*(UObjectBaseUtility **)pFVar40,&local_808,(UObject *)0x0);
            if (((local_1158.AllocatorInstance.Data <= pFVar31) &&
                (pFVar31 < local_1158.AllocatorInstance.Data + (longlong)local_1158.ArrayMax * 0x10)
                ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar34 = (longlong)local_1158.ArrayNum;
            if (local_1158.ArrayNum == local_1158.ArrayMax) {
              iVar20 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_1158.AllocatorInstance,&local_1158.ArrayMax);
              pFVar43 = local_1158.AllocatorInstance.Data + (longlong)iVar20 * 0x10;
              local_1158.ArrayNum = iVar20 + 1;
            }
            else {
              local_1158.ArrayNum = local_1158.ArrayNum + 1;
              pFVar43 = local_1158.AllocatorInstance.Data + lVar34 * 0x10;
            }
            *(undefined8 *)pFVar43 = 0;
            *(undefined8 *)pFVar43 = *(undefined8 *)pFVar31;
            *(undefined8 *)pFVar31 = 0;
            *(int *)(pFVar43 + 8) = *(int *)(pFVar31 + 8);
            *(int *)(pFVar43 + 0xc) = *(int *)(pFVar31 + 0xc);
            *(undefined8 *)(pFVar31 + 8) = 0;
            if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_808.Data.AllocatorInstance.Data);
            }
            pFVar40 = pFVar40 + 8;
          }
          local_618 = &local_116e;
          AlgoImpl::
          IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                    ((FString *)local_1158.AllocatorInstance.Data,local_1158.ArrayNum,local_10ce,
                     (TLess<void> *)&local_116e);
          uVar38 = *(int *)&param_2->field_0x18 - 1;
          uVar36 = uVar35;
          if ((int)uVar38 < *(int *)&param_2->field_0x18) {
            uVar36 = ~uVar38 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                       (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"NetFields");
          local_fd8[0] = 0x20;
          (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                    (*(longlong **)&param_2->field_0x8,local_fd8);
          EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<FString>
                             ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                              &local_1158);
          *(EJsonToken *)&param_2->field_0x20 = EVar19;
          this_03 = UClass::GetSparseClassDataStruct(pUVar22);
          if (this_03 != (UScriptStruct *)0x0) {
            pFVar21 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)this_03,&local_7e8,(UObject *)0x0);
            uVar38 = *(int *)&param_2->field_0x18 - 1;
            uVar36 = uVar35;
            if ((int)uVar38 < *(int *)&param_2->field_0x18) {
              uVar36 = ~uVar38 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                         (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Stack.Top() == EJson::Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                    ,0x110,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       L"SparseClassDataStruct");
            local_fd0[0] = 0x20;
            (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                      (*(longlong **)&param_2->field_0x8,local_fd0,2);
            pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
            iVar44 = (pFVar21->Data).ArrayNum;
            uStack_c00 = iVar44 - 1;
            if (iVar44 == 0) {
              uStack_c00 = uVar35;
            }
            local_c08._0_4_ = SUB84(pFVar24,0);
            local_c08._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
            local_7f8 = (undefined4)local_c08;
            uStack_7f4 = local_c08._4_4_;
            uStack_7ec = uStack_bfc;
            local_c08 = pFVar24;
            uStack_7f0 = uStack_c00;
            (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_7f8);
            *(undefined4 *)&param_2->field_0x20 = 7;
            if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
            }
          }
          pUVar29 = Z_Construct_UClass_UVerseClass_NoRegister();
          iVar44 = (int)pUVar29->_padding_;
          if ((iVar44 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar44 * 8) ==
              &pUVar29->_padding_)) {
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteObjectStart<wchar_t_const_(&)[12]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [12])L"UVerseClass");
            pTVar27 = FindUsedBits<unsigned_int>(&local_7d8,(uint)pUVar22[1]._padding_);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[14]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [14])L"SolClassFlags",pTVar27);
            if (local_7d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7d8.AllocatorInstance.Data);
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteArrayStart<wchar_t_const_(&)[12]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [12])L"TaskClasses");
            puVar45 = (undefined8 *)pUVar22[1]._padding_;
            iVar44 = (int)pUVar22[1]._padding_;
            puVar46 = puVar45 + iVar44;
            while( true ) {
              if ((int)pUVar22[1]._padding_ != iVar44) {
                local_116d = 0;
                `TCheckedPointerIterator<TObjectPtr<UVerseClass>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_116d);
              }
              if (puVar45 == puVar46) break;
              if ((UObjectBaseUtility *)*puVar45 == (UObjectBaseUtility *)0x0) {
                local_bf8 = L"null";
                uStack_bf0 = 4;
                uVar9 = CONCAT44(uStack_bec,4);
                bVar17 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                         CanWriteValueWithoutIdentifier
                                   ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2
                                   );
                if ((!bVar17) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CanWriteValueWithoutIdentifier()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                        ,0xf0,L""), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar36 = *(uint *)&param_2->field_0x20;
                if ((uVar36 != 2) && ((0xc < uVar36 || ((0x1013U >> (uVar36 & 0x1f) & 1) == 0)))) {
                  TJsonPrintPolicy<wchar_t>::WriteChar(*(FArchive **)&param_2->field_0x8,L',');
                  *(undefined4 *)&param_2->field_0x20 = 1;
                }
                local_be8 = L"\r\n";
                uStack_be0 = 2;
                local_7b8._12_4_ = uStack_bdc;
                local_7b8.Size = 2;
                local_7b8.DataPtr = L"\r\n";
                TJsonPrintPolicy<wchar_t>::WriteString(*(FArchive **)&param_2->field_0x8,&local_7b8)
                ;
                TPrettyJsonPrintPolicy<wchar_t>::WriteTabs
                          (*(FArchive **)&param_2->field_0x8,*(int *)&param_2->field_0x24);
                local_7a8 = L"null";
                uStack_7a0 = uVar9;
                (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_7a8);
                *(undefined4 *)&param_2->field_0x20 = 7;
LAB_1446369a0:
                puVar45 = puVar45 + 1;
              }
              else {
                pFVar21 = UObjectBaseUtility::GetPathName
                                    ((UObjectBaseUtility *)*puVar45,&local_7c8,(UObject *)0x0);
                TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString>
                          ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pFVar21)
                ;
                if (local_7c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                goto LAB_1446369a0;
                FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
                puVar45 = puVar45 + 1;
              }
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            if ((UObjectBaseUtility *)pUVar22[1]._padding_ != (UObjectBaseUtility *)0x0) {
              pFVar21 = UObjectBaseUtility::GetPathName
                                  ((UObjectBaseUtility *)pUVar22[1]._padding_,&local_788,
                                   (UObject *)0x0);
              uVar38 = *(int *)&param_2->field_0x18 - 1;
              uVar36 = 0;
              if ((int)uVar38 < *(int *)&param_2->field_0x18) {
                uVar36 = ~uVar38 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                           (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Stack.Top() == EJson::Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                      ,0x110,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         L"InitInstanceFunction");
              local_fc8[0] = 0x20;
              (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                        (*(longlong **)&param_2->field_0x8,local_fc8,2);
              pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
              iVar44 = (pFVar21->Data).ArrayNum;
              iStack_bd0 = iVar44 + -1;
              if (iVar44 == 0) {
                iStack_bd0 = 0;
              }
              local_bd8._0_4_ = SUB84(pFVar24,0);
              local_bd8._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
              local_798 = (undefined4)local_bd8;
              uStack_794 = local_bd8._4_4_;
              uStack_78c = uStack_bcc;
              local_bd8 = pFVar24;
              iStack_790 = iStack_bd0;
              (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_798);
              *(undefined4 *)&param_2->field_0x20 = 7;
              if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_788.Data.AllocatorInstance.Data);
              }
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteArrayStart<wchar_t_const_(&)[15]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [15])L"PersistentVars");
            iVar44 = (int)pUVar22[1]._padding_;
            uVar39 = (ulonglong)iVar44;
            puVar46 = (undefined8 *)pUVar22[1]._padding_;
            local_1190 = (UClass *)CONCAT44(local_1190._4_4_,iVar44);
            puVar45 = puVar46 + uVar39 * 6;
            while( true ) {
              if ((int)pUVar22[1]._padding_ != (int)uVar39) {
                local_116c = 0;
                `TCheckedPointerIterator<FVersePersistentVar_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_116c);
              }
              if (puVar46 == puVar45) break;
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
              uVar38 = *(int *)&param_2->field_0x18 - 1;
              uVar36 = 0;
              if ((int)uVar38 < *(int *)&param_2->field_0x18) {
                uVar36 = ~uVar38 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                           (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Stack.Top() == EJson::Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                      ,0x110,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"Path");
              local_fc0[0] = 0x20;
              (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                        (*(longlong **)&param_2->field_0x8,local_fc0,2);
              uVar9 = *puVar46;
              iStack_b30 = *(int *)(puVar46 + 1) + -1;
              if (*(int *)(puVar46 + 1) == 0) {
                iStack_b30 = 0;
              }
              local_b38._0_4_ = (undefined4)uVar9;
              local_b38._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
              local_778 = (undefined4)local_b38;
              uStack_774 = local_b38._4_4_;
              uStack_76c = uStack_b2c;
              local_b38 = uVar9;
              iStack_770 = iStack_b30;
              (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_778);
              *(undefined4 *)&param_2->field_0x20 = 7;
              pFVar21 = FFieldPath::ToString((FFieldPath *)(puVar46 + 2),&local_758);
              uVar38 = *(int *)&param_2->field_0x18 - 1;
              uVar36 = 0;
              if ((int)uVar38 < *(int *)&param_2->field_0x18) {
                uVar36 = ~uVar38 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                           (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Stack.Top() == EJson::Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                      ,0x110,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         L"Property");
              local_fb8[0] = 0x20;
              (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                        (*(longlong **)&param_2->field_0x8,local_fb8,2);
              pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
              iVar44 = (pFVar21->Data).ArrayNum;
              iStack_bb0 = iVar44 + -1;
              if (iVar44 == 0) {
                iStack_bb0 = 0;
              }
              local_bb8._0_4_ = SUB84(pFVar24,0);
              local_bb8._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
              local_768 = (undefined4)local_bb8;
              uStack_764 = local_bb8._4_4_;
              uStack_75c = uStack_bac;
              local_bb8 = pFVar24;
              iStack_760 = iStack_bb0;
              (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_768);
              *(undefined4 *)&param_2->field_0x20 = 7;
              if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_758.Data.AllocatorInstance.Data);
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
              uVar39 = (ulonglong)local_1190 & 0xffffffff;
              puVar46 = puVar46 + 6;
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteArrayStart<wchar_t_const_(&)[12]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [12])L"SessionVars");
            iVar44 = (int)pUVar22[1]._padding_;
            pFVar51 = (FFieldPath *)pUVar22[1]._padding_;
            pFVar52 = pFVar51 + iVar44;
            while( true ) {
              if ((int)pUVar22[1]._padding_ != iVar44) {
                local_116b = 0;
                `TCheckedPointerIterator<FVerseSessionVar_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_116b);
              }
              if (pFVar51 == pFVar52) break;
              pFVar21 = FFieldPath::ToString(pFVar51,&local_728);
              bVar17 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                       CanWriteValueWithoutIdentifier
                                 ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
              if ((!bVar17) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CanWriteValueWithoutIdentifier()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                      ,0xde,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar20 = *(int *)&param_2->field_0x20;
              if ((((iVar20 == 2) || (iVar20 == 4)) || (iVar20 == 0xc)) ||
                 ((iVar20 == 1 || (iVar20 == 0)))) {
                if (3 < iVar20 - 8U) goto LAB_144636e6a;
                local_fb0[0] = 0x20;
                (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                          (*(longlong **)&param_2->field_0x8,local_fb0,2);
              }
              else {
                TJsonPrintPolicy<wchar_t>::WriteChar(*(FArchive **)&param_2->field_0x8,L',');
                *(undefined4 *)&param_2->field_0x20 = 1;
LAB_144636e6a:
                local_ba8 = L"\r\n";
                uStack_ba0 = 2;
                local_748._12_4_ = uStack_b9c;
                local_748.Size = 2;
                local_748.DataPtr = L"\r\n";
                TJsonPrintPolicy<wchar_t>::WriteString(*(FArchive **)&param_2->field_0x8,&local_748)
                ;
                TPrettyJsonPrintPolicy<wchar_t>::WriteTabs
                          (*(FArchive **)&param_2->field_0x8,*(int *)&param_2->field_0x24);
              }
              pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
              iVar20 = (pFVar21->Data).ArrayNum;
              iStack_b90 = iVar20 + -1;
              if (iVar20 == 0) {
                iStack_b90 = 0;
              }
              local_b98._0_4_ = SUB84(pFVar24,0);
              local_b98._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
              local_738 = (undefined4)local_b98;
              uStack_734 = local_b98._4_4_;
              uStack_72c = uStack_b8c;
              local_b98 = pFVar24;
              iStack_730 = iStack_b90;
              (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_738);
              *(undefined4 *)&param_2->field_0x20 = 7;
              if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_728.Data.AllocatorInstance.Data);
              }
              pFVar51 = pFVar51 + 1;
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteObjectStart<wchar_t_const_(&)[13]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [13])L"VarAccessors");
            plVar10 = &pUVar22[1]._padding_;
            local_e20._padding_._0_4_ = 0;
            plVar3 = &pUVar22[1]._padding_;
            local_e20._padding_._4_4_ = 1;
            plVar50 = (longlong *)&param_2->field_0x10;
            local_e20.UnvisitedBitMask = 0xffffffff;
            local_e20.CurrentBitIndex = 0;
            local_e20.BaseBitIndex = 0;
            local_e20.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar10;
            if ((int)pUVar22[1]._padding_ != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e20);
            }
            local_ad0 = (int)pUVar22[1]._padding_ - *(int *)((longlong)&pUVar22[1]._padding_ + 4);
            TStack_d20._padding_ =
                 CONCAT44(local_e20._padding_._4_4_,(undefined4)local_e20._padding_);
            TStack_d20.CurrentBitIndex = local_e20.CurrentBitIndex;
            TStack_d20.UnvisitedBitMask = local_e20.UnvisitedBitMask;
            TStack_d20._28_4_ = local_e20._28_4_;
            TStack_d20.BaseBitIndex = local_e20.BaseBitIndex;
            pTStack_ae8 = local_e20.Array;
            uStack_d00 = CONCAT44(uStack_acc,local_ad0);
            TStack_d20.Array = local_e20.Array;
            local_d28 = plVar3;
            local_af8 = plVar3;
            lStack_af0 = TStack_d20._padding_;
            uStack_ae0 = TStack_d20._16_8_;
            uStack_ad8 = TStack_d20._24_8_;
            pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_4c8,(TBitArray<FDefaultBitArrayAllocator> *)plVar10,
                                 (int)pUVar22[1]._padding_);
            lStack_ac0 = pTVar32->_padding_;
            pTStack_ab8 = pTVar32->Array;
            uStack_ab0._0_4_ = pTVar32->UnvisitedBitMask;
            uStack_ab0._4_4_ = pTVar32->CurrentBitIndex;
            uStack_aa8 = *(undefined8 *)&pTVar32->BaseBitIndex;
            local_aa0 = (int)pUVar22[1]._padding_ - *(int *)((longlong)&pUVar22[1]._padding_ + 4);
            uStack_550 = CONCAT44(uStack_a9c,local_aa0);
            local_ac8 = plVar3;
            local_578 = plVar3;
            lStack_570 = lStack_ac0;
            local_568 = pTStack_ab8;
            uStack_560 = uStack_ab0;
            local_558 = uStack_aa8;
            while( true ) {
              if ((int)local_d28[1] - *(int *)((longlong)local_d28 + 0x34) != (int)uStack_d00) {
                local_116a = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,FVerseClassVarAccessors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_116a);
              }
              uVar36 = 0;
              if (((TStack_d20.CurrentBitIndex == uStack_560._4_4_) &&
                  (TStack_d20.Array == local_568)) && (local_d28 == local_578)) break;
              pFVar41 = (FName *)((longlong)TStack_d20.CurrentBitIndex * 0xb0 + *local_d28);
              pFVar21 = ::FName::ToString(pFVar41,&local_718);
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pFVar21);
              if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_718.Data.AllocatorInstance.Data);
              }
              local_ed8 = param_2;
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
              WriteObjectStart<wchar_t_const_(&)[8]>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         (wchar_t (*) [8])L"Getters");
              pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar41 + 3);
              local_e00._padding_._0_4_ = 0;
              pFVar53 = pFVar41 + 1;
              local_e00._padding_._4_4_ = 1;
              local_e00.UnvisitedBitMask = 0xffffffff;
              local_e00.CurrentBitIndex = 0;
              local_e00.BaseBitIndex = 0;
              local_e00.Array = pTVar1;
              if (pFVar41[6].ComparisonIndex.Value != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e00);
              }
              local_a70 = pFVar41[2].ComparisonIndex.Value - pFVar41[7].Number;
              TStack_d88._padding_ =
                   CONCAT44(local_e00._padding_._4_4_,(undefined4)local_e00._padding_);
              TStack_d88.CurrentBitIndex = local_e00.CurrentBitIndex;
              TStack_d88.UnvisitedBitMask = local_e00.UnvisitedBitMask;
              TStack_d88._28_4_ = local_e00._28_4_;
              TStack_d88.BaseBitIndex = local_e00.BaseBitIndex;
              pTStack_a88 = local_e00.Array;
              uStack_d68 = CONCAT44(uStack_a6c,local_a70);
              TStack_d88.Array = local_e00.Array;
              local_d90 = pFVar53;
              local_a98 = pFVar53;
              lStack_a90 = TStack_d88._padding_;
              uStack_a80 = TStack_d88._16_8_;
              uStack_a78 = TStack_d88._24_8_;
              pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_4a8,pTVar1,pFVar41[6].ComparisonIndex.Value);
              lStack_a60 = pTVar32->_padding_;
              pTStack_a58 = pTVar32->Array;
              uStack_a50._0_4_ = pTVar32->UnvisitedBitMask;
              uStack_a50._4_4_ = pTVar32->CurrentBitIndex;
              uStack_a48 = *(undefined8 *)&pTVar32->BaseBitIndex;
              local_a40 = pFVar41[2].ComparisonIndex.Value - pFVar41[7].Number;
              uStack_520 = CONCAT44(uStack_a3c,local_a40);
              local_a68 = pFVar53;
              local_548 = pFVar53;
              lStack_540 = lStack_a60;
              local_538 = pTStack_a58;
              uStack_530 = uStack_a50;
              local_528 = uStack_a48;
              while( true ) {
                if (local_d90[1].ComparisonIndex.Value - local_d90[6].Number != (int)uStack_d68) {
                  local_1169 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<int,FVerseClassVarAccessor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1169);
                }
                if (((TStack_d88.CurrentBitIndex == uStack_530._4_4_) &&
                    (TStack_d88.Array == local_538)) && (local_d90 == local_548)) break;
                `UE::JsonUtilities::WriteUField'::__l150::<lambda_7>::operator()
                          (&local_ed8,
                           (TTuple<int,FVerseClassVarAccessor> *)
                           ((longlong)TStack_d88.CurrentBitIndex * 0x20 + (longlong)*local_d90));
                TStack_d88.UnvisitedBitMask =
                     TStack_d88.UnvisitedBitMask & ~TStack_d88._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d88);
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
              WriteObjectStart<wchar_t_const_(&)[8]>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         (wchar_t (*) [8])L"Setters");
              FStack_ef0 = (FName)(pFVar41 + 0xd);
              uStack_eac = 1;
              local_eb0 = 0;
              pFVar53 = pFVar41 + 0xb;
              uStack_e9c = 0;
              iStack_e98 = 0;
              uVar36 = pFVar41[0x10].ComparisonIndex.Value;
              if (uVar36 != 0) {
                FVar48 = FStack_ef0;
                if (pFVar41[0xf] != (FName)0x0) {
                  FVar48 = pFVar41[0xf];
                }
                uVar38 = *(uint *)FVar48;
                while (uVar38 == 0) {
                  iStack_e98 = iStack_e98 + 0x20;
                  lVar34 = (longlong)local_eb0;
                  local_eb0 = local_eb0 + 1;
                  uStack_e9c = uVar36;
                  if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < local_eb0)
                  goto LAB_1446373a3;
                  uVar38 = ((uint *)((longlong)FVar48 + 4))[lVar34];
                }
                uStack_eac = ~(uVar38 - 1) & uVar38;
                uVar39 = (ulonglong)uStack_eac * 2 + 1;
                lVar34 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                local_ddc = (int)lVar34;
                uStack_e9c = local_ddc + -1 + iStack_e98;
                if ((int)uVar36 < (int)uStack_e9c) {
                  uStack_e9c = uVar36;
                }
              }
LAB_1446373a3:
              local_ea0 = 0xffffffff;
              local_a10 = pFVar41[0xc].ComparisonIndex.Value - pFVar41[0x11].Number;
              TStack_d58._padding_ = CONCAT44(uStack_eac,local_eb0);
              TStack_d58.CurrentBitIndex = uStack_e9c;
              TStack_d58.UnvisitedBitMask = 0xffffffff;
              TStack_d58._28_4_ = uStack_e94;
              TStack_d58.BaseBitIndex = iStack_e98;
              uStack_d38 = CONCAT44(uStack_a0c,local_a10);
              uVar36 = pFVar41[0x10].ComparisonIndex.Value;
              bVar49 = (byte)uVar36 & 0x1f;
              uStack_ef4 = 1 << bVar49;
              local_ef8 = (int)uVar36 >> 5;
              uStack_ee0 = uVar36 & 0xffffffe0;
              local_ee8 = -1 << bVar49;
              local_1190 = pUVar22;
              uStack_ee4 = uVar36;
              FStack_ea8 = FStack_ef0;
              local_d60 = pFVar53;
              TStack_d58.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_ef0;
              local_a38 = pFVar53;
              lStack_a30 = TStack_d58._padding_;
              FStack_a28 = FStack_ef0;
              uStack_a20 = TStack_d58._16_8_;
              uStack_a18 = TStack_d58._24_8_;
              if ((((int)uVar36 < 0) || ((int)pFVar41[0x10].ComparisonIndex.Value < (int)uVar36)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pUVar22 = local_1190;
              uVar38 = (((FName *)((longlong)FStack_ef0 + 0x18))->ComparisonIndex).Value;
              if (uVar36 != uVar38) {
                FVar48 = FStack_ef0;
                if (*(FName *)((longlong)FStack_ef0 + 0x10) != (FName)0x0) {
                  FVar48 = *(FName *)((longlong)FStack_ef0 + 0x10);
                }
                uVar36 = local_ee8 & *(uint *)((longlong)FVar48 + (longlong)local_ef8 * 4);
                while (uVar36 == 0) {
                  local_ef8 = local_ef8 + 1;
                  uStack_ee0 = uStack_ee0 + 0x20;
                  uStack_ee4 = uVar38;
                  if ((int)(((int)(uVar38 - 1) >> 0x1f & 0x1fU) + (uVar38 - 1)) >> 5 < local_ef8)
                  goto LAB_144637545;
                  uVar36 = *(uint *)((longlong)FVar48 + (longlong)local_ef8 * 4);
                  local_ee8 = 0xffffffff;
                }
                uStack_ef4 = ~(uVar36 - 1) & uVar36;
                uVar39 = (ulonglong)uStack_ef4 * 2 + 1;
                lVar34 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                local_dd8 = (int)lVar34;
                uStack_ee4 = local_dd8 + -1 + uStack_ee0;
                if ((int)uVar38 < (int)uStack_ee4) {
                  uStack_ee4 = uVar38;
                }
              }
LAB_144637545:
              local_9e0 = pFVar41[0xc].ComparisonIndex.Value - pFVar41[0x11].Number;
              uStack_a00 = CONCAT44(uStack_ef4,local_ef8);
              uStack_9f0 = CONCAT44(uStack_ee4,local_ee8);
              uStack_9e8 = CONCAT44(uStack_edc,uStack_ee0);
              FStack_9f8 = FStack_ef0;
              uStack_4f0 = CONCAT44(uStack_9dc,local_9e0);
              local_508 = FStack_ef0;
              local_a08 = pFVar53;
              local_518 = pFVar53;
              uStack_510 = uStack_a00;
              uStack_500 = uStack_9f0;
              local_4f8 = uStack_9e8;
              while( true ) {
                if (local_d60[1].ComparisonIndex.Value - local_d60[6].Number != (int)uStack_d38) {
                  local_1168 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<int,FVerseClassVarAccessor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1168);
                }
                pFVar15 = local_e48;
                uVar36 = 0;
                if (((TStack_d58.CurrentBitIndex == uStack_500._4_4_) &&
                    ((FName)TStack_d58.Array == local_508)) && (local_d60 == local_518)) break;
                pFVar51 = (FFieldPath *)
                          ((longlong)TStack_d58.CurrentBitIndex * 0x20 + (longlong)*local_d60);
                local_1160 = pFVar51;
                ::FString::PrintfImpl(&local_b88,L"%d");
                TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                          ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                           &local_b88);
                if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b88.Data.AllocatorInstance.Data);
                }
                this = (pFVar51->ResolvedOwner).WeakPtr;
                if (this != (FWeakObjectPtr)0x0) {
                  pFVar21 = UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)this,&local_610,(UObject *)0x0);
                  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                  WriteValue<FString,wchar_t_const_(&)[5]>
                            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                             (wchar_t (*) [5])L"Func",pFVar21);
                  if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_610.Data.AllocatorInstance.Data);
                  }
                }
                TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                WriteValue<bool_const_&,wchar_t_const_(&)[18]>
                          ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                           (wchar_t (*) [18])L"bIsInstanceMember",(bool *)&pFVar51->Path);
                uVar38 = *(int *)&param_2->field_0x18 - 1;
                if ((int)uVar38 < *(int *)&param_2->field_0x18) {
                  uVar36 = ~uVar38 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                             (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Stack.Top() == EJson::Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                        ,0x110,L""), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar36 = *(uint *)&param_2->field_0x20;
                if ((uVar36 != 2) && ((0xc < uVar36 || ((0x1013U >> (uVar36 & 0x1f) & 1) == 0)))) {
                  local_fa8[0] = 0x2c;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_fa8,2);
                  *(undefined4 *)&param_2->field_0x20 = 1;
                }
                local_ce8 = L"\r\n";
                pUVar29 = (UClass *)&param_2->field_0x8;
                local_ce0 = 2;
                local_1190 = pUVar29;
                (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                          (*(longlong **)&param_2->field_0x8,L"\r\n",4);
                plVar50 = *(longlong **)pUVar29;
                if (0 < (int)*(uint *)&param_2->field_0x24) {
                  uVar39 = (ulonglong)*(uint *)&param_2->field_0x24;
                  do {
                    local_fa0[0] = 9;
                    (**(code **)(*plVar50 + 0x188))(plVar50,local_fa0,2);
                    uVar39 = uVar39 - 1;
                    pUVar29 = local_1190;
                  } while (uVar39 != 0);
                }
                local_b78 = L"bIsFallible";
                uStack_b70 = 0xb;
                local_6f8 = 0x50d92a98;
                uStack_6f4 = 1;
                uStack_6f0 = 0xb;
                uStack_6ec = uStack_b6c;
                (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_6f8);
                local_f98[0] = 0x3a;
                (**(code **)(*(longlong *)pUVar29->_padding_ + 0x188))
                          ((longlong *)pUVar29->_padding_,local_f98,2);
                *(undefined4 *)&param_2->field_0x20 = 0xc;
                local_f90[0] = 0x20;
                (**(code **)(*(longlong *)pUVar29->_padding_ + 0x188))
                          ((longlong *)pUVar29->_padding_,local_f90,2);
                EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                                   ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2
                                    ,*(bool *)((longlong)&(local_1160->Path).AllocatorInstance.Data
                                              + 1));
                *(EJsonToken *)&param_2->field_0x20 = EVar19;
                TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                          ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
                TStack_d58.UnvisitedBitMask =
                     TStack_d58.UnvisitedBitMask & ~TStack_d58._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d58);
              }
              puVar2 = &local_e48->field_0x10;
              uVar35 = *(int *)&local_e48->field_0x18 - 1;
              uVar38 = uVar36;
              if ((int)uVar35 < *(int *)&local_e48->field_0x18) {
                uVar38 = ~uVar35 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((*(int *)(*(longlong *)puVar2 + -4 + (longlong)*(int *)&pFVar15->field_0x18 * 4)
                   != 6) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Stack.Top() == EJson::Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                      ,0x8e,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              local_cd8 = L"\r\n";
              iVar44 = 2;
              local_cd0 = 2;
              if (u___[1] == L'\0') {
                iVar44 = 1;
              }
              (**(code **)(**(longlong **)&pFVar15->field_0x8 + 0x188))
                        (*(longlong **)&pFVar15->field_0x8,L"\r\n",(longlong)iVar44 * 2);
              *(int *)&pFVar15->field_0x24 = *(int *)&pFVar15->field_0x24 + -1;
              plVar50 = *(longlong **)&pFVar15->field_0x8;
              if (0 < (int)*(uint *)&pFVar15->field_0x24) {
                uVar39 = (ulonglong)*(uint *)&pFVar15->field_0x24;
                do {
                  local_f88[0] = 9;
                  (**(code **)(*plVar50 + 0x188))(plVar50,local_f88,2);
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
              plVar50 = (longlong *)&pFVar15->field_0x10;
              local_f80[0] = 0x7d;
              (**(code **)(**(longlong **)&pFVar15->field_0x8 + 0x188))
                        (*(longlong **)&pFVar15->field_0x8,local_f80,2);
              if ((*(int *)&pFVar15->field_0x18 < 1) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              *(int *)&pFVar15->field_0x18 = *(int *)&pFVar15->field_0x18 + -1;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)plVar50,*(int *)&pFVar15->field_0x18,
                         (int *)&pFVar15->field_0x1c);
              *(undefined4 *)&pFVar15->field_0x20 = 3;
              uVar38 = *(int *)&pFVar15->field_0x18 - 1;
              if ((int)uVar38 < *(int *)&pFVar15->field_0x18) {
                uVar36 = ~uVar38 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((*(int *)(*plVar50 + (longlong)*(int *)&pFVar15->field_0x18 * 4 + -4) != 6) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Stack.Top() == EJson::Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                      ,0x8e,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              local_cc8 = L"\r\n";
              iVar44 = 2;
              local_cc0 = 2;
              if (u___[1] == L'\0') {
                iVar44 = 1;
              }
              (**(code **)(**(longlong **)&pFVar15->field_0x8 + 0x188))
                        (*(longlong **)&pFVar15->field_0x8,L"\r\n",(longlong)iVar44 * 2);
              *(int *)&pFVar15->field_0x24 = *(int *)&pFVar15->field_0x24 + -1;
              plVar10 = *(longlong **)&pFVar15->field_0x8;
              if (0 < (int)*(uint *)&pFVar15->field_0x24) {
                uVar39 = (ulonglong)*(uint *)&pFVar15->field_0x24;
                do {
                  local_f78[0] = 9;
                  (**(code **)(*plVar10 + 0x188))(plVar10,local_f78,2);
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
              local_f70[0] = 0x7d;
              (**(code **)(**(longlong **)&pFVar15->field_0x8 + 0x188))
                        (*(longlong **)&pFVar15->field_0x8,local_f70,2);
              if ((*(int *)&pFVar15->field_0x18 < 1) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              *(int *)&pFVar15->field_0x18 = *(int *)&pFVar15->field_0x18 + -1;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)plVar50,*(int *)&pFVar15->field_0x18,
                         (int *)&pFVar15->field_0x1c);
              *(undefined4 *)&pFVar15->field_0x20 = 3;
              TStack_d20.UnvisitedBitMask =
                   TStack_d20.UnvisitedBitMask & ~TStack_d20._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d20);
              param_2 = pFVar15;
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            pFVar21 = UEnumFlagsToString<enum_EVerseEffectSet>
                                (&local_6e8,(EVerseEffectSet)pUVar22[1]._padding_);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<FString,wchar_t_const_(&)[19]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [19])L"ConstructorEffects",pFVar21);
            if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
            }
            pFVar21 = ::FName::ToString((FName *)((longlong)&pUVar22[1]._padding_ + 4),&local_6d8);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteValue<FString,wchar_t_const_(&)[24]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [24])L"MangledPackageVersePath",pFVar21);
            if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
            }
            uVar35 = (int)plVar50[1] - 1;
            uVar38 = uVar36;
            if ((int)uVar35 < (int)plVar50[1]) {
              uVar38 = ~uVar35 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((*(int *)(*plVar50 + (longlong)(int)plVar50[1] * 4 + -4) != 6) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Stack.Top() == EJson::Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                    ,0x110,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       L"PackageRelativeVersePath");
            local_f68[0] = 0x20;
            (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                      (*(longlong **)&param_2->field_0x8,local_f68,2);
            lVar34 = pUVar22[1]._padding_;
            iVar44 = (int)pUVar22[1]._padding_;
            uStack_cb0 = iVar44 - 1;
            if (iVar44 == 0) {
              uStack_cb0 = uVar36;
            }
            local_cb8._0_4_ = (undefined4)lVar34;
            local_cb8._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
            local_6c8 = (undefined4)local_cb8;
            uStack_6c4 = local_cb8._4_4_;
            uStack_6bc = uStack_cac;
            local_cb8 = lVar34;
            uStack_6c0 = uStack_cb0;
            (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_6c8);
            *(undefined4 *)&param_2->field_0x20 = 7;
            local_e50 = param_2;
            `UE::JsonUtilities::WriteUField'::__l126::<lambda_8>::operator()
                      (&local_e50,L"DisplayNameToUENameFunctionMap",
                       (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)&pUVar22[1].ClassConstructor);
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
            WriteArrayStart<wchar_t_const_(&)[17]>
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                       (wchar_t (*) [17])L"DirectInterfaces");
            pFVar51 = (FFieldPath *)pUVar22[1].NetFields.AllocatorInstance.Data;
            iVar44 = pUVar22[1].NetFields.ArrayNum;
            local_1160 = (FFieldPath *)(&pFVar51->ResolvedField + iVar44);
            pFVar52 = local_1160;
            while( true ) {
              if (pUVar22[1].NetFields.ArrayNum != iVar44) {
                local_1167 = 0;
                `TCheckedPointerIterator<TObjectPtr<UVerseClass>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_1167);
              }
              if (pFVar51 == pFVar52) break;
              pUVar6 = (UObjectBaseUtility *)
                       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar51->ResolvedField)->
                       AllocatorInstance).Data;
              if (pUVar6 == (UObjectBaseUtility *)0x0) {
                uStack_b50 = 4;
                local_b58 = L"null";
                uVar9 = CONCAT44(uStack_b4c,4);
                bVar17 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                         CanWriteValueWithoutIdentifier
                                   ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2
                                   );
                if ((!bVar17) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CanWriteValueWithoutIdentifier()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                        ,0xf0,L""), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar38 = *(uint *)&param_2->field_0x20;
                if ((uVar38 != 2) && ((0xc < uVar38 || ((0x1013U >> (uVar38 & 0x1f) & 1) == 0)))) {
                  local_f50[0] = 0x2c;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f50,2);
                  *(undefined4 *)&param_2->field_0x20 = 1;
                }
                local_b68 = L"\r\n";
                uStack_b60 = 2;
                local_688._12_4_ = uStack_b5c;
                local_688.Size = 2;
                local_688.DataPtr = L"\r\n";
                TJsonPrintPolicy<wchar_t>::WriteString(*(FArchive **)&param_2->field_0x8,&local_688)
                ;
                TPrettyJsonPrintPolicy<wchar_t>::WriteTabs
                          (*(FArchive **)&param_2->field_0x8,*(int *)&param_2->field_0x24);
                local_678 = L"null";
                uStack_670 = uVar9;
                (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_678);
                pFVar51 = (FFieldPath *)&pFVar51->ResolvedOwner;
                *(undefined4 *)&param_2->field_0x20 = 7;
              }
              else {
                pFVar21 = UObjectBaseUtility::GetPathName(pUVar6,&local_698,(UObject *)0x0);
                bVar17 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                         CanWriteValueWithoutIdentifier
                                   ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2
                                   );
                if ((!bVar17) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CanWriteValueWithoutIdentifier()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                        ,0xde,L""), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar20 = *(int *)&param_2->field_0x20;
                if ((((iVar20 == 2) || (iVar20 == 4)) || (iVar20 == 0xc)) ||
                   ((iVar20 == 1 || (iVar20 == 0)))) {
                  if (3 < iVar20 - 8U) goto LAB_144637f02;
                  local_f58[0] = 0x20;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f58,2);
                }
                else {
                  local_f60[0] = 0x2c;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f60,2);
                  *(undefined4 *)&param_2->field_0x20 = 1;
LAB_144637f02:
                  local_c98 = L"\r\n";
                  uStack_c90 = 2;
                  local_6b8._12_4_ = uStack_c8c;
                  local_6b8.Size = 2;
                  local_6b8.DataPtr = L"\r\n";
                  TJsonPrintPolicy<wchar_t>::WriteString
                            (*(FArchive **)&param_2->field_0x8,&local_6b8);
                  TPrettyJsonPrintPolicy<wchar_t>::WriteTabs
                            (*(FArchive **)&param_2->field_0x8,*(int *)&param_2->field_0x24);
                }
                pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
                iVar20 = (pFVar21->Data).ArrayNum;
                uStack_b40 = iVar20 - 1;
                if (iVar20 == 0) {
                  uStack_b40 = uVar36;
                }
                local_b48._0_4_ = SUB84(pFVar24,0);
                local_b48._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
                local_6a8 = (undefined4)local_b48;
                uStack_6a4 = local_b48._4_4_;
                uStack_69c = uStack_b3c;
                local_b48 = pFVar24;
                uStack_6a0 = uStack_b40;
                (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_6a8);
                *(undefined4 *)&param_2->field_0x20 = 7;
                if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_698.Data.AllocatorInstance.Data);
                }
                pFVar51 = (FFieldPath *)&pFVar51->ResolvedOwner;
                pFVar52 = local_1160;
              }
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            if (*(int *)&pUVar22[1].SparseClassData != 0) {
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
              WriteArrayStart<wchar_t_const_(&)[27]>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         (wchar_t (*) [27])L"PropertiesWrittenByInitCDO");
              this_04 = pUVar22[1].ClassDefaultObject.field0_0x0.DebugPtr;
              local_f10 = (FName *)&pUVar22[1].SparseClassData;
              uVar39 = (ulonglong)*(int *)local_f10;
              local_da0 = (UObject *)((longlong)&this_04->field_0x0 + uVar39 * 4 * 8);
              local_1190 = (UClass *)CONCAT44(local_1190._4_4_,*(int *)local_f10);
              while( true ) {
                pUVar16 = local_da0;
                if ((local_f10->ComparisonIndex).Value != (int)uVar39) {
                  local_1163[0] = 0;
                  `TCheckedPointerIterator<TFieldPath<FProperty>_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_1163);
                }
                if (this_04 == pUVar16) break;
                pFVar51 = (FFieldPath *)FFieldPath::ToString((FFieldPath *)this_04,&local_648);
                local_1160 = pFVar51;
                if (0 < *(int *)&param_2->field_0x18) {
                  uVar35 = *(int *)&param_2->field_0x18 - 1;
                  uVar38 = 0;
                  if ((int)uVar35 < *(int *)&param_2->field_0x18) {
                    uVar38 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                                (longlong)*(int *)&param_2->field_0x18 * 4) != 5) &&
                      (*(int *)&param_2->field_0x20 != 0xc)) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("CanWriteValueWithoutIdentifier()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                          ,0xde,L""), bVar17)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                iVar44 = *(int *)&param_2->field_0x20;
                if (((iVar44 == 2) || (iVar44 == 4)) ||
                   ((iVar44 == 0xc || ((iVar44 == 1 || (iVar44 == 0)))))) {
                  if (3 < iVar44 - 8U) goto LAB_144638266;
                  local_f40[0] = 0x20;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f40,2);
                }
                else {
                  local_f48[0] = 0x2c;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f48,2);
                  *(undefined4 *)&param_2->field_0x20 = 1;
LAB_144638266:
                  local_668 = L"\r\n";
                  local_660 = 2;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
                  plVar50 = *(longlong **)&param_2->field_0x8;
                  if (0 < (int)*(uint *)&param_2->field_0x24) {
                    uVar39 = (ulonglong)*(uint *)&param_2->field_0x24;
                    do {
                      local_f20[0] = 9;
                      (**(code **)(*plVar50 + 0x188))(plVar50,local_f20,2);
                      uVar39 = uVar39 - 1;
                      pFVar51 = local_1160;
                    } while (uVar39 != 0);
                  }
                }
                pFVar24 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar51->ResolvedField)
                          ->AllocatorInstance).Data;
                iVar44 = (pFVar51->ResolvedOwner).WeakPtr.ObjectIndex;
                uStack_bc0 = iVar44 - 1;
                if (iVar44 == 0) {
                  uStack_bc0 = 0;
                }
                local_bc8._0_4_ = SUB84(pFVar24,0);
                local_bc8._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
                local_658 = (undefined4)local_bc8;
                uStack_654 = local_bc8._4_4_;
                uStack_64c = uStack_bbc;
                local_bc8 = pFVar24;
                uStack_650 = uStack_bc0;
                (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_658);
                *(undefined4 *)&param_2->field_0x20 = 7;
                if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_648.Data.AllocatorInstance.Data);
                }
                this_04 = (UObject *)&this_04->field_0x20;
                uVar39 = (ulonglong)local_1190 & 0xffffffff;
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            }
            `UE::JsonUtilities::WriteUField'::__l126::<lambda_8>::operator()
                      (&local_e50,L"FunctionMangledNames",
                       (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)&pUVar22[1].SparseClassDataStruct);
            if (*(int *)&pUVar22[1].FuncMap.field_0x48 != 0) {
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
              WriteArrayStart<wchar_t_const_(&)[22]>
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                         (wchar_t (*) [22])L"PredictsFunctionNames");
              iVar44 = *(int *)&pUVar22[1].FuncMap.field_0x48;
              uVar39 = (ulonglong)iVar44;
              pFVar53 = *(FName **)&pUVar22[1].FuncMap.field_0x40;
              local_1190 = (UClass *)CONCAT44(local_1190._4_4_,iVar44);
              pFVar41 = pFVar53 + uVar39;
              local_f10 = pFVar41;
              while( true ) {
                if (*(int *)&pUVar22[1].FuncMap.field_0x48 != (int)uVar39) {
                  local_1165 = 0;
                  `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_1165);
                }
                if (pFVar53 == pFVar41) break;
                local_d98 = *pFVar53;
                pFVar21 = ::FName::ToString(&local_d98,&local_628);
                bVar17 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                         CanWriteValueWithoutIdentifier
                                   ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2
                                   );
                if ((!bVar17) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CanWriteValueWithoutIdentifier()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                        ,0xde,L""), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar44 = *(int *)&param_2->field_0x20;
                if ((((iVar44 == 2) || (iVar44 == 4)) || (iVar44 == 0xc)) ||
                   ((iVar44 == 1 || (iVar44 == 0)))) {
                  if (3 < iVar44 - 8U) goto LAB_1446384c4;
                  local_f30[0] = 0x20;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f30,2);
                }
                else {
                  local_f38[0] = 0x2c;
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,local_f38,2);
                  *(undefined4 *)&param_2->field_0x20 = 1;
LAB_1446384c4:
                  (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                            (*(longlong **)&param_2->field_0x8,L"\r\n",4);
                  plVar50 = *(longlong **)&param_2->field_0x8;
                  if (0 < (int)*(uint *)&param_2->field_0x24) {
                    uVar39 = (ulonglong)*(uint *)&param_2->field_0x24;
                    do {
                      local_f28[0] = 9;
                      (**(code **)(*plVar50 + 0x188))(plVar50,local_f28,2);
                      uVar39 = uVar39 - 1;
                      pFVar41 = local_f10;
                      param_2 = local_e48;
                    } while (uVar39 != 0);
                  }
                }
                pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
                iVar44 = (pFVar21->Data).ArrayNum;
                uStack_b20 = iVar44 - 1;
                if (iVar44 == 0) {
                  uStack_b20 = uVar36;
                }
                local_b28._0_4_ = SUB84(pFVar24,0);
                local_b28._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
                local_638 = (undefined4)local_b28;
                uStack_634 = local_b28._4_4_;
                uStack_62c = uStack_b1c;
                local_b28 = pFVar24;
                uStack_630 = uStack_b20;
                (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_638);
                *(undefined4 *)&param_2->field_0x20 = 7;
                if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_628.Data.AllocatorInstance.Data);
                }
                uVar39 = (ulonglong)local_1190 & 0xffffffff;
                pFVar53 = pFVar53 + 1;
              }
              TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                        ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
            }
            TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                      ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
          DestructItems<FString,int>
                    ((FString *)local_1158.AllocatorInstance.Data,local_1158.ArrayNum);
          if (local_1158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1158.AllocatorInstance.Data);
          }
        }
        goto LAB_14463860a;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[10]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [10])L"UFunction");
      EVar4 = *(EStructFlags *)&((UClass *)param_1)->ClassConstructor;
      local_1118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_11a7 = (FScriptContainerElement)0x0;
      local_1118.ArrayNum = 0;
      local_1118.ArrayMax = 0;
      pFVar24 = FVar33.Data;
      do {
        if ((EVar4 >> ((ulonglong)(byte)local_11a7 & 0x3f) & 1) != 0) {
          iVar44 = (int)pFVar24;
          if ((FVar33.Data <= &local_11a7) && (&local_11a7 < FVar33.Data + local_1118.ArrayMax)) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar17) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar33.Data = local_1118.AllocatorInstance.Data;
            iVar44 = local_1118.ArrayNum;
          }
          if (iVar44 == local_1118.ArrayMax) {
            iVar44 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_1118.AllocatorInstance,&local_1118.ArrayMax);
            FVar33.Data = local_1118.AllocatorInstance.Data;
          }
          local_1118.ArrayNum = iVar44 + 1U;
          FVar33.Data[iVar44] = local_11a7;
          pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar44 + 1U);
          FVar33.Data = local_1118.AllocatorInstance.Data;
        }
        local_11a7 = (FScriptContainerElement)((char)local_11a7 + '\x01');
      } while ((char)local_11a7 < '@');
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[14]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [14])L"FunctionFlags",&local_1118);
      if (local_1118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1118.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<wchar_t_const_(&)[9]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [9])L"NumParms",
                 *(bool *)((longlong)&((UClass *)param_1)->ClassConstructor + 4));
      uVar47 = *(int *)&param_2->field_0x18 - 1;
      uVar37 = uVar38;
      if ((int)uVar47 < *(int *)&param_2->field_0x18) {
        uVar37 = ~uVar47 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"ParmsSize");
      local_1038[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_1038,2);
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                          (uint)*(ushort *)((longlong)&((UClass *)param_1)->ClassConstructor + 6));
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      uVar47 = *(int *)&param_2->field_0x18 - 1;
      uVar37 = uVar38;
      if ((int)uVar47 < *(int *)&param_2->field_0x18) {
        uVar37 = ~uVar47 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 L"ReturnValueOffset");
      local_1030[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_1030,2);
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                          (uint)*(ushort *)&((UClass *)param_1)->ClassVTableHelperCtorCaller);
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      uVar47 = *(int *)&param_2->field_0x18 - 1;
      uVar37 = uVar38;
      if ((int)uVar47 < *(int *)&param_2->field_0x18) {
        uVar37 = ~uVar47 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"RPCId");
      local_1028[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_1028,2);
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                          (uint)*(ushort *)
                                 ((longlong)&((UClass *)param_1)->ClassVTableHelperCtorCaller + 2));
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      uVar37 = *(int *)&param_2->field_0x18 - 1;
      if ((int)uVar37 < *(int *)&param_2->field_0x18) {
        uVar38 = ~uVar37 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"RPCResponseId");
      local_1020[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_1020);
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                          (uint)*(ushort *)
                                 ((longlong)&((UClass *)param_1)->ClassVTableHelperCtorCaller + 4));
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      if ((((UClass *)param_1)->CppClassStaticFunctions).AddReferencedObjects !=
          (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) {
        pFVar21 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)param_1,&local_8c8,(UObject *)0x0,None);
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar38 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"FirstPropertyToInit");
        local_1018[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1018,2);
        pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
        iVar44 = (pFVar21->Data).ArrayNum;
        uStack_c50 = iVar44 - 1;
        if (iVar44 == 0) {
          uStack_c50 = uVar35;
        }
        local_c58._0_4_ = SUB84(pFVar24,0);
        local_c58._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
        local_8d8 = (undefined4)local_c58;
        uStack_8d4 = local_c58._4_4_;
        uStack_8cc = uStack_c4c;
        local_c58 = pFVar24;
        uStack_8d0 = uStack_c50;
        (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_8d8);
        *(undefined4 *)&param_2->field_0x20 = 7;
        if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
        }
      }
      if (*(UObjectBaseUtility **)&((UClass *)param_1)->ClassUnique != (UObjectBaseUtility *)0x0) {
        pFVar21 = UObjectBaseUtility::GetPathName
                            (*(UObjectBaseUtility **)&((UClass *)param_1)->ClassUnique,&local_8b8,
                             (UObject *)0x0);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[19]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [19])L"EventGraphFunction",pFVar21);
        if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
        }
      }
      uVar37 = *(int *)&param_2->field_0x18 - 1;
      uVar38 = uVar35;
      if ((int)uVar37 < *(int *)&param_2->field_0x18) {
        uVar38 = ~uVar37 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 L"EventGraphCallOffset");
      local_1010[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_1010,2);
      iVar44._0_1_ = ((UClass *)param_1)->bCooked;
      iVar44._1_1_ = ((UClass *)param_1)->bLayoutChanging;
      iVar44._2_2_ = *(undefined2 *)&((UClass *)param_1)->field_0xd2;
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,iVar44);
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      if ((longlong *)((UClass *)param_1)->ClassCastFlags != (longlong *)0x0) {
        pUVar22 = *(UClass **)((UClass *)param_1)->ClassCastFlags;
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar38 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"SingletonPtrEqualsThis");
        local_1008[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1008,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            pUVar22 == (UClass *)param_1);
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
      }
      memset(local_258,0,0x200);
      pUVar22 = (((UClass *)param_1)->ClassWithin).field0_0x0.DebugPtr;
      if (pUVar22 == (UClass *)0x0) {
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar38 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"NativeFunc");
        local_1000[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1000,2);
        pwVar28 = L"nullptr";
LAB_144635e84:
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pwVar28
                           );
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
      }
      else {
        bVar17 = FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                           (0,(ulong64)pUVar22,local_258,0x200,(FGenericCrashContext *)0x0);
        if (!bVar17) {
          uVar37 = *(int *)&param_2->field_0x18 - 1;
          uVar38 = uVar35;
          if ((int)uVar37 < *(int *)&param_2->field_0x18) {
            uVar38 = ~uVar37 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                       (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"NativeFunc")
          ;
          local_fe8[0] = 0x20;
          (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                    (*(longlong **)&param_2->field_0x8,local_fe8,2);
          pwVar28 = L"Unknown Set Function";
          goto LAB_144635e84;
        }
        local_378._padding_ = 0;
        sVar30 = strlen(local_258);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,local_258,(int)sVar30,Yes);
        ::FString::FString(&local_e70,local_378.Ptr);
        if ((void *)local_378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_378._padding_);
        }
        local_db8 = &local_e90;
        local_e90 = (void *)0x0;
        local_c20 = &local_db8;
        local_c28 = Core::Private::Function::
                    TFunctionRefCaller<`UE::JsonUtilities::WriteUField'::__l96::<lambda_4>,void,TStringView<wchar_t>_>
                    ::Call;
        local_c48 = &::u__;
        local_c38 = local_e70.Data.AllocatorInstance.Data;
        local_e88 = 0;
        uStack_c40 = 1;
        uStack_c30 = uVar36;
        if (local_e70.Data.ArrayNum != 0) {
          uStack_c30 = local_e70.Data.ArrayNum - 1;
        }
        local_8a8._12_4_ = uStack_c3c;
        local_8a8.Size = 1;
        local_898._12_4_ = uStack_c2c;
        local_898.Size = uStack_c30;
        local_898.DataPtr = (wchar_t *)local_e70.Data.AllocatorInstance.Data;
        local_8a8.DataPtr = L" ";
        String::ParseTokens(&local_898,&local_8a8,
                            (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_c28,None);
        pvVar14 = local_e90;
        iVar44 = *(int *)&param_2->field_0x18;
        uVar38 = iVar44 - 1;
        if ((int)local_e88 < 2) {
          uVar37 = uVar35;
          if ((int)uVar38 < iVar44) {
            uVar37 = ~uVar38 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                       (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"NativeFunc")
          ;
          local_ff0[0] = 0x20;
          (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                    (*(longlong **)&param_2->field_0x8,local_ff0,2);
          local_c18 = local_e70.Data.AllocatorInstance.Data;
          pFVar24 = local_c18;
          uStack_c10 = uVar36;
          if (local_e70.Data.ArrayNum != 0) {
            uStack_c10 = local_e70.Data.ArrayNum - 1;
          }
          puVar42 = &local_878;
          local_c18._0_4_ = SUB84(local_e70.Data.AllocatorInstance.Data,0);
          local_c18._4_4_ = (undefined4)((ulonglong)local_e70.Data.AllocatorInstance.Data >> 0x20);
          local_878 = (undefined4)local_c18;
          uStack_874 = local_c18._4_4_;
          uStack_86c = uStack_c0c;
          local_c18 = pFVar24;
          uStack_870 = uStack_c10;
        }
        else {
          uVar37 = uVar35;
          if ((int)uVar38 < iVar44) {
            uVar37 = ~uVar38 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                       (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack.Top() == EJson::Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                  ,0x110,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                    ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"NativeFunc")
          ;
          local_ff8[0] = 0x20;
          (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                    (*(longlong **)&param_2->field_0x8,local_ff8,2);
          local_888 = *(undefined4 *)((longlong)pvVar14 + 0x10);
          uStack_884 = *(undefined4 *)((longlong)pvVar14 + 0x14);
          uStack_880 = *(undefined4 *)((longlong)pvVar14 + 0x18);
          uStack_87c = *(undefined4 *)((longlong)pvVar14 + 0x1c);
          puVar42 = &local_888;
        }
        (**(code **)(*(longlong *)param_2 + 0x28))(param_2,puVar42);
        *(undefined4 *)&param_2->field_0x20 = 7;
        if (local_e90 != (void *)0x0) {
          FMemory::Free(local_e90);
        }
        if (local_e70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e70.Data.AllocatorInstance.Data);
        }
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
      pUVar22 = Z_Construct_UClass_USparseDelegateFunction_NoRegister();
      iVar44 = (int)pUVar22->_padding_;
      if ((iVar44 <= *(int *)(((UClass *)param_1)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((UClass *)param_1)->_padding_ + 0x30) + (longlong)iVar44 * 8) ==
          &pUVar22->_padding_)) {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteObjectStart<wchar_t_const_(&)[24]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [24])L"USparseDelegateFunction");
        pFVar21 = ::FName::ToString(&((UClass *)param_1)->ClassConfigName,&local_868);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[16]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [16])L"OwningClassName",pFVar21);
        if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_868.Data.AllocatorInstance.Data);
        }
        pFVar21 = ::FName::ToString((FName *)&((UClass *)param_1)->ClassReps,&local_858);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[13]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [13])L"DelegateName",pFVar21);
        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_858.Data.AllocatorInstance.Data);
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
      }
      pUVar22 = Z_Construct_UClass_UVerseFunction_NoRegister();
      iVar44 = (int)pUVar22->_padding_;
      if ((*(int *)(((UClass *)param_1)->_padding_ + 0x38) < iVar44) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((UClass *)param_1)->_padding_ + 0x30) + (longlong)iVar44 * 8) !=
          &pUVar22->_padding_)) goto LAB_14463860a;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[15]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [15])L"UVerseFunction");
      pFVar21 = ::FName::ToString(&((UClass *)param_1)->ClassConfigName,&local_848);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[14]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [14])L"AlternateName",pFVar21);
      if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.Data.AllocatorInstance.Data);
      }
      EVar5 = *(EVerseFunctionFlags *)&(((UClass *)param_1)->ClassReps).AllocatorInstance.Data;
      UEnum::GetValueAsString<enum_EVerseFunctionFlags>(&local_ec0,EVar5);
      if (local_ec0.Data.ArrayNum < 2) {
LAB_144636001:
        bVar49 = 0;
        do {
          if (((EVerseFunctionFlags)(1L << (bVar49 & 0x3f)) & EVar5) != None) {
            this_02 = StaticEnum<enum_EVerseFunctionFlags>();
            if ((this_02 == (UEnum *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EnumClass != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                    ,0xca4,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            UEnum::GetNameByValue(this_02,(long64)&local_db0);
            ::FName::ToString(&local_db0,&local_e30);
            if (1 < local_e30.Data.ArrayNum) {
              if (1 < local_ec0.Data.ArrayNum) {
                ::FString::AppendChars(&local_ec0,L" | ",3);
              }
              uVar38 = local_e30.Data.ArrayNum - 1;
              if (local_e30.Data.ArrayNum == 0) {
                uVar38 = uVar35;
              }
              ::FString::AppendChars
                        (&local_ec0,(wchar_t *)local_e30.Data.AllocatorInstance.Data,uVar38);
            }
            if (local_e30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e30.Data.AllocatorInstance.Data);
            }
          }
          bVar49 = bVar49 + 1;
        } while ((char)bVar49 < '@');
      }
      else {
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_ec0.Data.ArrayNum != 0) {
          FVar33.Data = local_ec0.Data.AllocatorInstance.Data;
        }
        iVar44 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar33.Data,L"None");
        if (iVar44 == 0) goto LAB_144636001;
      }
      ::FString::PrintfImpl(&local_cf8,L" (0x%x)");
      if (local_cf8.Data.ArrayNum != 0) {
        uVar36 = local_cf8.Data.ArrayNum - 1;
      }
      ::FString::AppendChars(&local_ec0,(wchar_t *)local_cf8.Data.AllocatorInstance.Data,uVar36);
      if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[19]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [19])L"VerseFunctionFlags",&local_ec0);
      if (local_ec0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ec0.Data.AllocatorInstance.Data);
      }
LAB_144636161:
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
    }
    else {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[14]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [14])L"UScriptStruct");
      EVar4 = *(EStructFlags *)&((UClass *)param_1)->ClassConstructor;
      local_10f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_11a8 = (FScriptContainerElement)0x0;
      local_10f8.ArrayNum = 0;
      local_10f8.ArrayMax = 0;
      pFVar24 = FVar33.Data;
      do {
        if (((ulonglong)(longlong)(int)EVar4 >> ((ulonglong)(byte)local_11a8 & 0x3f) & 1) != 0) {
          iVar44 = (int)pFVar24;
          if ((FVar33.Data <= &local_11a8) && (&local_11a8 < FVar33.Data + local_10f8.ArrayMax)) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar17) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar33.Data = local_10f8.AllocatorInstance.Data;
            iVar44 = local_10f8.ArrayNum;
          }
          if (iVar44 == local_10f8.ArrayMax) {
            iVar44 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_10f8.AllocatorInstance,&local_10f8.ArrayMax);
            FVar33.Data = local_10f8.AllocatorInstance.Data;
          }
          local_10f8.ArrayNum = iVar44 + 1U;
          FVar33.Data[iVar44] = local_11a8;
          pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar44 + 1U);
          FVar33.Data = local_10f8.AllocatorInstance.Data;
        }
        pUVar22 = local_1190;
        local_11a8 = (FScriptContainerElement)((char)local_11a8 + '\x01');
      } while ((char)local_11a8 < '@');
      uVar37 = *(int *)&param_2->field_0x18 - 1;
      uVar36 = uVar35;
      if ((int)uVar37 < *(int *)&param_2->field_0x18) {
        uVar36 = ~uVar37 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"StructFlags");
      local_10a8[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_10a8,2);
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<signed_char>
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                          &local_10f8);
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      if (local_10f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10f8.AllocatorInstance.Data);
      }
      this_01 = (FGuid *)(**(code **)(pUVar22->_padding_ + 0x380))(pUVar22,local_4d8);
      local_e40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e40.Data.ArrayNum = 0;
      local_e40.Data.ArrayMax = 0;
      FGuid::AppendString(this_01,&local_e40,Digits);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[11]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [11])L"CustomGuid",&local_e40);
      if (local_e40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e40.Data.AllocatorInstance.Data);
      }
      pFVar21 = (FString *)(**(code **)(pUVar22->_padding_ + 0x388))(pUVar22,local_958,0);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[14]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [14])L"StructCppName",pFVar21);
      if (local_958[0] != (void *)0x0) {
        FMemory::Free(local_958[0]);
      }
      pIVar26 = UScriptStruct::GetCppStructOps((UScriptStruct *)pUVar22);
      if (pIVar26 != (ICppStructOps *)0x0) {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteObjectStart<wchar_t_const_(&)[10]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [10])L"StructOps");
        iVar44 = pIVar26->Size;
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"Size");
        local_10a0[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_10a0,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,iVar44)
        ;
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        iVar44 = pIVar26->Alignment;
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"Alignment");
        local_1098[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1098,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,iVar44)
        ;
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        EVar12 = (pIVar26->FakeVPtr->Capabilities).ComputedPropertyFlags;
        uStack_1100 = *(undefined8 *)
                       &(pIVar26->FakeVPtr->Capabilities).HasSerializerObjectReferences;
        local_1108 = EVar12;
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteObjectStart<wchar_t_const_(&)[13]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [13])L"Capabilities");
        pTVar27 = FindUsedBits<enum_EPropertyFlags>(&local_948,EVar12);
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"ComputedPropertyFlags");
        local_1090[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1090,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<signed_char>
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pTVar27
                           );
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        if (local_948.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_948.AllocatorInstance.Data);
        }
        pwVar28 = ::LexToString((EPropertyObjectReferenceType)uStack_1100);
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasSerializerObjectReferences");
        local_1088[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1088,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pwVar28
                           );
        bVar49 = uStack_1100._4_1_;
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        local_1181 = (bool)(uStack_1100._4_1_ & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[19]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [19])L"HasNoopConstructor",&local_1181);
        local_1180 = (bool)(bVar49 >> 1 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[19]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [19])L"HasZeroConstructor",&local_1180);
        local_117f = (bool)(bVar49 >> 2 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[14]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [14])L"HasDestructor",&local_117f);
        local_117e = (bool)(bVar49 >> 3 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[14]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [14])L"HasSerializer",&local_117e);
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasStructuredSerializer");
        local_1080[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1080,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            (bool)(bVar49 >> 4 & 1));
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        local_117d = (bool)(bVar49 >> 5 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[17]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [17])L"HasPostSerialize",&local_117d);
        local_117c = (bool)(bVar49 >> 6 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[17]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [17])L"HasNetSerializer",&local_117c);
        uVar37 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar35;
        if ((int)uVar37 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasNetSharedSerialization");
        local_1078[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1078,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            (bool)(bVar49 >> 7));
        bVar49 = uStack_1100._5_1_;
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        bVar17 = (bool)(uStack_1100._5_1_ & 1);
        uVar36 = *(int *)&param_2->field_0x18 - 1;
        if ((int)uVar36 < *(int *)&param_2->field_0x18) {
          uVar35 = ~uVar36 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasNetDeltaSerializer");
        local_1070[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1070,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,bVar17)
        ;
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        uVar35 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar38;
        if ((int)uVar35 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasPostScriptConstruct");
        local_1068[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1068,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            (bool)(bVar49 >> 1 & 1));
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        local_117b = (bool)(bVar49 >> 2 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[15]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [15])L"IsPlainOldData",&local_117b);
        local_117a = (bool)(bVar49 >> 3 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[13]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [13])L"IsUECoreType",&local_117a);
        local_1179 = (bool)(bVar49 >> 4 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[16]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [16])L"IsUECoreVariant",&local_1179);
        local_1178 = (bool)(bVar49 >> 5 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[8]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [8])L"HasCopy",&local_1178);
        local_1177 = (bool)(bVar49 >> 6 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[13]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [13])L"HasIdentical",&local_1177);
        local_1176 = (bool)(bVar49 >> 7);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[18]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [18])L"HasExportTextItem",&local_1176);
        bVar49 = uStack_1100._6_1_;
        local_1175 = (bool)(uStack_1100._6_1_ & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[18]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [18])L"HasImportTextItem",&local_1175);
        local_1174 = (bool)(bVar49 >> 1 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[30]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [30])L"HasAddStructReferencedObjects",&local_1174);
        local_1173 = (bool)(bVar49 >> 2 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[30]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [30])L"HasSerializeFromMismatchedTag",&local_1173);
        uVar35 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar38;
        if ((int)uVar35 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasStructuredSerializeFromMismatchedTag");
        local_1060[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1060,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            (bool)(bVar49 >> 3 & 1));
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        local_1172 = (bool)(bVar49 >> 4 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[15]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [15])L"HasGetTypeHash",&local_1172);
        uVar35 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar38;
        if ((int)uVar35 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasIntrusiveUnsetOptionalState");
        local_1058[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1058,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            (bool)(bVar49 >> 5 & 1));
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        local_1171 = (bool)(bVar49 >> 6 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[11]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [11])L"IsAbstract",&local_1171);
        uVar35 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar38;
        if ((int)uVar35 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"HasFindInnerPropertyInstance");
        local_1050[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1050,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                            (bool)(bVar49 >> 7));
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        bVar17 = (bool)(uStack_1100._7_1_ & 1);
        uVar35 = *(int *)&param_2->field_0x18 - 1;
        uVar36 = uVar38;
        if ((int)uVar35 < *(int *)&param_2->field_0x18) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                     (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x110,L""), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   L"ClearOnFinishDestroy");
        local_1048[0] = 0x20;
        (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                  (*(longlong **)&param_2->field_0x8,local_1048,2);
        EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                           ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,bVar17)
        ;
        *(EJsonToken *)&param_2->field_0x20 = EVar19;
        local_1170 = (bool)(uStack_1100._7_1_ >> 1 & 1);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<bool_const_&,wchar_t_const_(&)[11]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [11])L"HasVisitor",&local_1170);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
      }
      pUVar29 = Z_Construct_UClass_UVerseStruct_NoRegister();
      iVar44 = (int)pUVar29->_padding_;
      if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar44) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar44 * 8) !=
          &pUVar29->_padding_)) goto LAB_144636161;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[12]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [12])L"VerseStruct");
      pTVar27 = FindUsedBits<unsigned_int>
                          (&local_938,
                           *(uint *)&(pUVar22->CppClassStaticFunctions).AddReferencedObjects);
      uVar36 = *(int *)&param_2->field_0x18 - 1;
      if ((int)uVar36 < *(int *)&param_2->field_0x18) {
        uVar38 = ~uVar36 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"VerseClassFlags"
                );
      local_1040[0] = 0x20;
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x188))
                (*(longlong **)&param_2->field_0x8,local_1040,2);
      EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<signed_char>
                         ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pTVar27);
      *(EJsonToken *)&param_2->field_0x20 = EVar19;
      if (local_938.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FUtf8String_const_&,wchar_t_const_(&)[14]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [14])L"QualifiedName",(FUtf8String *)&pUVar22->ClassUnique);
      if ((UObjectBaseUtility *)pUVar22->ClassCastFlags != (UObjectBaseUtility *)0x0) {
        pFVar21 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar22->ClassCastFlags,&local_928,(UObject *)0x0
                            );
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[13]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [13])L"InitFunction",pFVar21);
        if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_928.Data.AllocatorInstance.Data);
        }
      }
      pUVar29 = (pUVar22->ClassWithin).field0_0x0.DebugPtr;
      if (pUVar29 != (UClass *)0x0) {
        pFVar21 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar29,&local_918,(UObject *)0x0);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[12]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [12])L"ModuleClass",pFVar21);
        if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_918.Data.AllocatorInstance.Data);
        }
      }
      local_e80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e80.Data.ArrayNum = 0;
      local_e80.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)&pUVar22->ClassConfigName,&local_e80,Digits);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[5]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [5])L"Guid",&local_e80);
      if (local_e80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e80.Data.AllocatorInstance.Data);
      }
      pUVar6 = *(UObjectBaseUtility **)&(pUVar22->ClassReps).ArrayNum;
      if (pUVar6 != (UObjectBaseUtility *)0x0) {
        pFVar21 = UObjectBaseUtility::GetPathName(pUVar6,&local_908,(UObject *)0x0);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[16]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [16])L"FactoryFunction",pFVar21);
        if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_908.Data.AllocatorInstance.Data);
        }
      }
      pUVar6 = (UObjectBaseUtility *)(pUVar22->NetFields).AllocatorInstance.Data;
      if (pUVar6 != (UObjectBaseUtility *)0x0) {
        pFVar21 = UObjectBaseUtility::GetPathName(pUVar6,&local_8f8,(UObject *)0x0);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
        WriteValue<FString,wchar_t_const_(&)[24]>
                  ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                   (wchar_t (*) [24])L"OverrideFactoryFunction",pFVar21);
        if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
        }
      }
      pFVar21 = UEnumFlagsToString<enum_EVerseEffectSet>
                          (&local_8e8,(EVerseEffectSet)(pUVar22->NetFields).ArrayNum);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[19]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [19])L"ConstructorEffects",pFVar21);
      if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
    }
LAB_14463860a:
    DestructItems<FString,int>((FString *)local_11a0.AllocatorInstance.Data,local_11a0.ArrayNum);
    FVar33.Data = local_11a0.AllocatorInstance.Data;
  }
  else {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[6]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [6])L"UEnum");
    iVar44 = 0;
    uVar38 = 0;
    uVar35 = *(int *)&param_2->field_0x18 - 1;
    uVar36 = uVar38;
    if ((int)uVar35 < *(int *)&param_2->field_0x18) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"CppType");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    lVar34 = param_1[1]._padding_;
    iVar20 = (int)param_1[1]._padding_;
    uStack_b00 = iVar20 - 1;
    if (iVar20 == 0) {
      uStack_b00 = uVar38;
    }
    local_b08._0_4_ = (undefined4)lVar34;
    local_b08._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
    local_5c8 = (undefined4)local_b08;
    uStack_5c4 = local_b08._4_4_;
    uStack_5bc = uStack_afc;
    local_b08 = lVar34;
    uStack_5c0 = uStack_b00;
    (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_5c8);
    *(undefined4 *)&param_2->field_0x20 = 7;
    bVar49 = *(byte *)&param_1[1].Next.field0_0x0;
    uVar35 = *(int *)&param_2->field_0x18 - 1;
    uVar36 = uVar38;
    if ((int)uVar35 < *(int *)&param_2->field_0x18) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"CppForm");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                        (uint)bVar49);
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    bVar49 = *(byte *)((longlong)&param_1[1].Next.field0_0x0 + 1);
    uVar35 = *(int *)&param_2->field_0x18 - 1;
    uVar36 = uVar38;
    if ((int)uVar35 < *(int *)&param_2->field_0x18) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"EnumFlags_Flags");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                        (bool)(bVar49 & 1));
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    bVar49 = *(byte *)((longlong)&param_1[1].Next.field0_0x0 + 1);
    uVar36 = *(int *)&param_2->field_0x18 - 1;
    if ((int)uVar36 < *(int *)&param_2->field_0x18) {
      uVar38 = ~uVar36 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                 (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Stack.Top() == EJson::Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                            ,0x110,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               L"EnumFlags_NewerVersionExists");
    TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
    EVar19 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                       ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                        (bool)(bVar49 >> 1 & 1));
    *(EJsonToken *)&param_2->field_0x20 = EVar19;
    local_1138.Data = (FScriptContainerElement *)0x0;
    local_1130 = 0;
    local_112c = 0;
    if (0 < (int)param_1[1]._padding_) {
      do {
        UEnum::GetNameByIndex((UEnum *)param_1,(int)&local_e58);
        local_de0 = 0;
        local_e60 = 0;
        if (local_e58 != 0) {
          if (((iVar44 < 0) || ((int)param_1[1]._padding_ <= iVar44)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Names.IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xb2d,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar23 = UEnum::FNameData::operator[]
                              ((FNameData *)&param_1[1]._padding_,&local_4e8,iVar44);
          local_ed0._0_8_ = local_e58;
          local_ed0._8_4_ = SUB84(*(undefined8 *)&pTVar23->field_0x8,0);
          if (((local_1138.Data <= &local_ed0) &&
              (&local_ed0 < (TTuple<FName,int> *)(local_1138.Data + (longlong)(int)local_112c * 0xc)
              )) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (local_1130 == local_112c) {
            local_1130 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&local_1138,(int *)&local_112c);
          }
          *(undefined8 *)(local_1138.Data + (longlong)(int)local_1130 * 0xc) = local_ed0._0_8_;
          *(undefined4 *)(local_1138.Data + (longlong)(int)local_1130 * 0xc + 8) = local_ed0._8_4_;
          local_1130 = local_1130 + 1;
        }
        iVar44 = iVar44 + 1;
      } while (iVar44 < (int)param_1[1]._padding_);
    }
    AlgoImpl::
    IntroSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_UE::JsonUtilities::WriteUField_::__l5::<lambda_1>_>_>
              ((TTuple<FName,int> *)local_1138.Data,local_1130,local_10d7,(<lambda_1> *)&local_10d8)
    ;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[6]>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
               (wchar_t (*) [6])L"Names");
    uVar36 = local_1130;
    uVar39 = (ulonglong)(int)local_1130;
    pTVar25 = (TTuple<FName,int> *)(local_1138.Data + uVar39 * 0xc);
    FVar33.Data = local_1138.Data;
    while( true ) {
      if ((uint)uVar39 != uVar36) {
        local_1166 = 0;
        `TCheckedPointerIterator<TTuple<FName,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1166);
      }
      if ((TTuple<FName,int> *)FVar33.Data == pTVar25) break;
      pFVar21 = ::FName::ToString((FName *)FVar33.Data,&local_5b8);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,pFVar21);
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,wchar_t_const_(&)[6]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [6])L"Value",(int *)&((TTuple<FName,int> *)FVar33.Data)->field_0x8);
      this_00 = UEnum::GetDisplayNameTextByValue
                          ((UEnum *)param_1,&local_598,
                           (longlong)*(int *)&((TTuple<FName,int> *)FVar33.Data)->field_0x8);
      pFVar21 = FText::ToString(this_00);
      uVar35 = *(int *)&param_2->field_0x18 - 1;
      uVar38 = 0;
      if ((int)uVar35 < *(int *)&param_2->field_0x18) {
        uVar38 = ~uVar35 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + -4 +
                   (longlong)*(int *)&param_2->field_0x18 * 4) != 6) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,L"DisplayName");
      TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(*(FArchive **)&param_2->field_0x8);
      pFVar24 = (pFVar21->Data).AllocatorInstance.Data;
      iVar44 = (pFVar21->Data).ArrayNum;
      uStack_c80 = iVar44 - 1;
      if (iVar44 == 0) {
        uStack_c80 = 0;
      }
      local_c88._0_4_ = SUB84(pFVar24,0);
      local_c88._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
      local_5a8 = (undefined4)local_c88;
      uStack_5a4 = local_c88._4_4_;
      uStack_59c = uStack_c7c;
      local_c88 = pFVar24;
      uStack_5a0 = uStack_c80;
      (**(code **)(*(longlong *)param_2 + 0x28))(param_2,&local_5a8);
      *(undefined4 *)&param_2->field_0x20 = 7;
      if (local_598.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_598.TextData.Reference + 0x10))();
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
      uVar39 = (ulonglong)local_1130;
      FVar33.Data = FVar33.Data + 0xc;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
    pUVar22 = Z_Construct_UClass_UVerseEnum_NoRegister();
    iVar44 = (int)pUVar22->_padding_;
    if ((iVar44 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar44 * 8) ==
        &pUVar22->_padding_)) {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[11]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [11])L"UVerseEnum");
      pFVar21 = UEnumFlagsToString<enum_EVerseEnumFlags>
                          (&local_588,(EVerseEnumFlags)param_1[2]._padding_);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FString,wchar_t_const_(&)[15]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [15])L"VerseEnumFlags",pFVar21);
      if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<FUtf8String_const_&,wchar_t_const_(&)[14]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2,
                 (wchar_t (*) [14])L"QualifiedName",(FUtf8String *)&param_1[2]._padding_);
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_2);
    FVar33.Data = local_1138.Data;
  }
  if ((TTuple<FName,int> *)FVar33.Data != (TTuple<FName,int> *)0x0) {
    FMemory::Free(FVar33.Data);
  }
LAB_14463862f:
  FMD5::~FMD5(&local_468.HashBuilder);
  FArchive::~FArchive((FArchive *)&local_468);
  return;
}

