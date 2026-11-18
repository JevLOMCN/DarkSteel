// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 100

// Construct<FInAppPurchaseReceiptInfo2> @ 14ec42610

void __cdecl UE::CoreUObject::Private::Construct<FInAppPurchaseReceiptInfo2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FInAppPurchaseReceiptInfo2> @ 14ec42640

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseReceiptInfo2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FInAppPurchaseReceiptInfo2> @ 14ec426b0

void __cdecl UE::CoreUObject::Private::Destruct<FInAppPurchaseReceiptInfo2>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
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

// Copy<FInAppPurchaseReceiptInfo2> @ 14ec427d0

bool __cdecl
UE::CoreUObject::Private::Copy<FInAppPurchaseReceiptInfo2>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FInAppPurchaseProductRequest2> @ 14ec42b50

void __cdecl UE::CoreUObject::Private::Construct<FInAppPurchaseProductRequest2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FInAppPurchaseProductRequest2> @ 14ec42b70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseProductRequest2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FInAppPurchaseProductRequest2> @ 14ec42b90

void __cdecl UE::CoreUObject::Private::Destruct<FInAppPurchaseProductRequest2>(void *param_1)

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

// Copy<FInAppPurchaseProductRequest2> @ 14ec42bf0

bool __cdecl
UE::CoreUObject::Private::Copy<FInAppPurchaseProductRequest2>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInAppPurchaseProductInfo2> @ 14ec43070

void __cdecl UE::CoreUObject::Private::Construct<FInAppPurchaseProductInfo2>(void *param_1)

{
  memset(param_1,0,0xf8);
  FInAppPurchaseProductInfo2::FInAppPurchaseProductInfo2(param_1);
  return;
}

// ConstructForTests<FInAppPurchaseProductInfo2> @ 14ec430e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseProductInfo2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  return;
}

// Destruct<FInAppPurchaseProductInfo2> @ 14ec430f0

void __cdecl UE::CoreUObject::Private::Destruct<FInAppPurchaseProductInfo2>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FInAppPurchaseProductInfo2> @ 14ec43200

bool __cdecl
UE::CoreUObject::Private::Copy<FInAppPurchaseProductInfo2>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    *(undefined4 *)((longlong)param_1 + 0x50) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x50))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x58),(FString *)((longlong)param_2 + 0x58));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x68),(FString *)((longlong)param_2 + 0x68));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x78),(FString *)((longlong)param_2 + 0x78));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x88),(FString *)((longlong)param_2 + 0x88));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x98),(FString *)((longlong)param_2 + 0x98));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0xa8),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0xa8));
    param_2 = (void *)((longlong)param_2 + 0xf8);
    param_1 = (int *)((longlong)param_1 + 0xf8);
  }
  return true;
}

// Construct<FBlueprintSessionResult> @ 14ec44c40

void __cdecl UE::CoreUObject::Private::Construct<FBlueprintSessionResult>(void *param_1)

{
  memset((void *)((longlong)param_1 + 0x28),0,0xf8);
  *(undefined ***)param_1 = &___7FOnlineSession__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            ((FOnlineSessionSettings *)((longlong)param_1 + 0x28));
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 9999;
  return;
}

// ConstructForTests<FBlueprintSessionResult> @ 14ec44cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBlueprintSessionResult>(void *param_1)

{
  *(undefined ***)param_1 = &___7FOnlineSession__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            ((FOnlineSessionSettings *)((longlong)param_1 + 0x28));
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 9999;
  return;
}

// Destruct<FBlueprintSessionResult> @ 14ec44d30

void __cdecl UE::CoreUObject::Private::Destruct<FBlueprintSessionResult>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x108));
  FOnlineSessionSettings::~FOnlineSessionSettings
            ((FOnlineSessionSettings *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FBlueprintSessionResult> @ 14ec450e0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintSessionResult>(void *param_1,void *param_2,int param_3)

{
  FOnlineSessionSearchResult *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FOnlineSessionSearchResult::operator=
                (this,(FOnlineSessionSearchResult *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPlayerReservation> @ 14ec47a20

void __cdecl UE::CoreUObject::Private::Construct<FPlayerReservation>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return;
}

// ConstructForTests<FPlayerReservation> @ 14ec47a60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPlayerReservation>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return;
}

// Destruct<FPlayerReservation> @ 14ec47aa0

void __cdecl UE::CoreUObject::Private::Destruct<FPlayerReservation>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(param_1);
  return;
}

// Copy<FPlayerReservation> @ 14ec47ae0

bool __cdecl
UE::CoreUObject::Private::Copy<FPlayerReservation>(void *param_1,void *param_2,int param_3)

{
  FUniqueNetIdRepl *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUniqueNetIdRepl::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    ::FString::operator=
              ((FString *)&((FUniqueNetIdRepl *)((longlong)param_1 + 0x30))->_padding_,
               (FString *)&((FUniqueNetIdRepl *)((longlong)param_2 + 0x30))->_padding_);
    *(undefined1 *)
     &(((FUniqueNetIdRepl *)((longlong)param_1 + 0x30))->ReplicationBytes).AllocatorInstance.Data =
         *(undefined1 *)
          &(((FUniqueNetIdRepl *)((longlong)param_2 + 0x30))->ReplicationBytes).AllocatorInstance.
           Data;
    pFVar1 = (FUniqueNetIdRepl *)((longlong)param_2 + 0x30);
    param_2 = &(((FUniqueNetIdRepl *)((longlong)param_2 + 0x30))->ReplicationBytes).ArrayNum;
    *(undefined4 *)
     ((longlong)
      &(((FUniqueNetIdRepl *)((longlong)param_1 + 0x30))->ReplicationBytes).AllocatorInstance.Data +
     4) = *(undefined4 *)((longlong)&(pFVar1->ReplicationBytes).AllocatorInstance.Data + 4);
    param_1 = &(((FUniqueNetIdRepl *)((longlong)param_1 + 0x30))->ReplicationBytes).ArrayNum;
  }
  return true;
}

// Construct<FInAppPurchaseRestoreInfo2> @ 14ec47f10

void __cdecl UE::CoreUObject::Private::Construct<FInAppPurchaseRestoreInfo2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FInAppPurchaseRestoreInfo2> @ 14ec47f30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseRestoreInfo2>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FInAppPurchaseRestoreInfo2> @ 14ec47f50

void __cdecl UE::CoreUObject::Private::Destruct<FInAppPurchaseRestoreInfo2>(void *param_1)

{
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

// Copy<FInAppPurchaseRestoreInfo2> @ 14ec47fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FInAppPurchaseRestoreInfo2>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FOnlineAccountStoredCredentials> @ 14ec480e0

void __cdecl UE::CoreUObject::Private::Construct<FOnlineAccountStoredCredentials>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FOnlineAccountStoredCredentials> @ 14ec48110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOnlineAccountStoredCredentials>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FOnlineAccountStoredCredentials> @ 14ec48180

void __cdecl UE::CoreUObject::Private::Destruct<FOnlineAccountStoredCredentials>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
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

// Copy<FOnlineAccountStoredCredentials> @ 14ec481e0

bool __cdecl
UE::CoreUObject::Private::Copy<FOnlineAccountStoredCredentials>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FOnlineProxyStoreOffer> @ 14ec48760

void __cdecl UE::CoreUObject::Private::Construct<FOnlineProxyStoreOffer>(void *param_1)

{
  memset(param_1,0,0xe8);
  FOnlineProxyStoreOffer::FOnlineProxyStoreOffer(param_1);
  return;
}

// ConstructForTests<FOnlineProxyStoreOffer> @ 14ec48790

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOnlineProxyStoreOffer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  FText::FText((FText *)((longlong)param_1 + 0x20));
  FText::FText((FText *)((longlong)param_1 + 0x30));
  FText::FText((FText *)((longlong)param_1 + 0x40));
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x58));
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  return;
}

// Destruct<FOnlineProxyStoreOffer> @ 14ec487a0

void __cdecl UE::CoreUObject::Private::Destruct<FOnlineProxyStoreOffer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(longlong **)((longlong)param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x58) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x40) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FOnlineProxyStoreOffer> @ 14ec487b0

bool __cdecl
UE::CoreUObject::Private::Copy<FOnlineProxyStoreOffer>(void *param_1,void *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar1 = (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    pFVar2 = *(FScriptContainerElement **)((longlong)param_1 + 0x10);
    if (pFVar2 != pFVar1) {
      *(FScriptContainerElement **)((longlong)param_1 + 0x10) = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res18);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    *(int *)((longlong)param_1 + 0x18) = *(int *)((longlong)param_2 + 0x18);
    pFVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    pFVar2 = *(FScriptContainerElement **)((longlong)param_1 + 0x20);
    if (pFVar2 != pFVar1) {
      *(FScriptContainerElement **)((longlong)param_1 + 0x20) = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res8);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    *(int *)((longlong)param_1 + 0x28) = *(int *)((longlong)param_2 + 0x28);
    pFVar1 = (((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
    pFVar2 = *(FScriptContainerElement **)((longlong)param_1 + 0x30);
    if (pFVar2 != pFVar1) {
      *(FScriptContainerElement **)((longlong)param_1 + 0x30) = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res10);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    *(int *)((longlong)param_1 + 0x38) = *(int *)((longlong)param_2 + 0x38);
    pFVar1 = (((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data;
    pFVar2 = *(FScriptContainerElement **)((longlong)param_1 + 0x40);
    if (pFVar2 != pFVar1) {
      *(FScriptContainerElement **)((longlong)param_1 + 0x40) = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res20);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    *(int *)((longlong)param_1 + 0x48) = *(int *)((longlong)param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x50) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x50))->Data).AllocatorInstance.Data;
    plVar3 = *(longlong **)((longlong)param_2 + 0x58);
    plVar4 = *(longlong **)((longlong)param_1 + 0x58);
    if (plVar4 != plVar3) {
      *(longlong **)((longlong)param_1 + 0x58) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,local_48);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x60) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x68) = *(int *)((longlong)param_2 + 0x68);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x70),(FString *)((longlong)param_2 + 0x70));
    *(FScriptContainerElement **)((longlong)param_1 + 0x80) =
         (((FString *)((longlong)param_2 + 0x80))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined1 *)((longlong)param_1 + 0x90) =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x90))->Data).AllocatorInstance.Data;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x98),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x98));
    param_2 = (void *)((longlong)param_2 + 0xe8);
    param_1 = (int *)((longlong)param_1 + 0xe8);
  }
  return true;
}

// DeleterFunc<UE::Net::Private::FNetConnectionAddressResolution> @ 14ec4a950

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::Private::FNetConnectionAddressResolution>
          (void *param_1)

{
  DestructItems<TSharedRef<FInternetAddr,1>,int>
            (*(TSharedRef<FInternetAddr,1> **)((longlong)param_1 + 0x40),
             *(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28));
  DestructItems<TSharedPtr<FSocket,1>,int>
            (*(TSharedPtr<FSocket,1> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  ::operator_delete(param_1,0x60);
  return;
}

// DeleterFunc<UE::Net::Private::FNetDriverAddressResolution> @ 14ec4a9c0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::Private::FNetDriverAddressResolution>
          (void *param_1)

{
  DestructItems<TSharedPtr<FSocket,1>,int>
            (*(TSharedPtr<FSocket,1> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  ::operator_delete(param_1,0x20);
  return;
}

// DereferenceIfNecessary<AOnlineBeacon,AOnlineBeacon_*_&> @ 14ec4aa00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeacon * __cdecl
UE::Core::Private::DereferenceIfNecessary<AOnlineBeacon,AOnlineBeacon_*_&>(AOnlineBeacon **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&> @ 14ec4aa20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __cdecl
UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
          (AOnlineBeaconClient **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AOnlineBeaconHost,AOnlineBeaconHost_*_&> @ 14ec4aa40

AOnlineBeaconHost * __cdecl
UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconHost,AOnlineBeaconHost_*_&>
          (AOnlineBeaconHost **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AOnlineBeaconHostObject,AOnlineBeaconHostObject_*_&> @ 14ec4aa60

AOnlineBeaconHostObject * __cdecl
UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconHostObject,AOnlineBeaconHostObject_*_&>
          (AOnlineBeaconHostObject **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<APartyBeaconClient,APartyBeaconClient_*_&> @ 14ec4aa80

APartyBeaconClient * __cdecl
UE::Core::Private::DereferenceIfNecessary<APartyBeaconClient,APartyBeaconClient_*_&>
          (APartyBeaconClient **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Online::FOnlineServicesEngineUtils,UE::Online::FOnlineServicesEngineUtils_*_&> @ 14ec4aaa0

FOnlineServicesEngineUtils * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Online::FOnlineServicesEngineUtils,UE::Online::FOnlineServicesEngineUtils_*_&>
          (FOnlineServicesEngineUtils **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FOnlineSubsystemUtils,FOnlineSubsystemUtils_*_&> @ 14ec4aac0

FOnlineSubsystemUtils * __cdecl
UE::Core::Private::DereferenceIfNecessary<FOnlineSubsystemUtils,FOnlineSubsystemUtils_*_&>
          (FOnlineSubsystemUtils **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestAchievementsInterface,FTestAchievementsInterface_*_&> @ 14ec4aae0

FTestAchievementsInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestAchievementsInterface,FTestAchievementsInterface_*_&>
          (FTestAchievementsInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestEntitlementsInterface,FTestEntitlementsInterface_*_&> @ 14ec4ab00

FTestEntitlementsInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestEntitlementsInterface,FTestEntitlementsInterface_*_&>
          (FTestEntitlementsInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestIdentityInterface,FTestIdentityInterface_*_&> @ 14ec4ab20

FTestIdentityInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestIdentityInterface,FTestIdentityInterface_*_&>
          (FTestIdentityInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAchievementQueryCallbackProxy,UAchievementQueryCallbackProxy_*_&> @ 14ec4ab40

UAchievementQueryCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UAchievementQueryCallbackProxy,UAchievementQueryCallbackProxy_*_&>
          (UAchievementQueryCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAchievementWriteCallbackProxy,UAchievementWriteCallbackProxy_*_&> @ 14ec4ab60

UAchievementWriteCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UAchievementWriteCallbackProxy,UAchievementWriteCallbackProxy_*_&>
          (UAchievementWriteCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UConnectionCallbackProxy,UConnectionCallbackProxy_*_&> @ 14ec4ab80

UConnectionCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UConnectionCallbackProxy,UConnectionCallbackProxy_*_&>
          (UConnectionCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCreateSessionCallbackProxy,UCreateSessionCallbackProxy_*_&> @ 14ec4aba0

UCreateSessionCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCreateSessionCallbackProxy,UCreateSessionCallbackProxy_*_&>
          (UCreateSessionCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UDestroySessionCallbackProxy,UDestroySessionCallbackProxy_*_&> @ 14ec4abc0

UDestroySessionCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UDestroySessionCallbackProxy,UDestroySessionCallbackProxy_*_&>
          (UDestroySessionCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEndMatchCallbackProxy,UEndMatchCallbackProxy_*_&> @ 14ec4abe0

UEndMatchCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEndMatchCallbackProxy,UEndMatchCallbackProxy_*_&>
          (UEndMatchCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEndTurnCallbackProxy,UEndTurnCallbackProxy_*_&> @ 14ec4ac00

UEndTurnCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEndTurnCallbackProxy,UEndTurnCallbackProxy_*_&>
          (UEndTurnCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UFindSessionsCallbackProxy,UFindSessionsCallbackProxy_*_&> @ 14ec4ac20

UFindSessionsCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UFindSessionsCallbackProxy,UFindSessionsCallbackProxy_*_&>
          (UFindSessionsCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInAppPurchaseCallbackProxy2,UInAppPurchaseCallbackProxy2_*_&> @ 14ec4ac40

UInAppPurchaseCallbackProxy2 * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInAppPurchaseCallbackProxy2,UInAppPurchaseCallbackProxy2_*_&>
          (UInAppPurchaseCallbackProxy2 **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInAppPurchaseCheckoutCallbackProxy,UInAppPurchaseCheckoutCallbackProxy_*_&> @ 14ec4ac60

UInAppPurchaseCheckoutCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInAppPurchaseCheckoutCallbackProxy,UInAppPurchaseCheckoutCallbackProxy_*_&>
          (UInAppPurchaseCheckoutCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInAppPurchaseQueryCallbackProxy2,UInAppPurchaseQueryCallbackProxy2_*_&> @ 14ec4ac80

UInAppPurchaseQueryCallbackProxy2 * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInAppPurchaseQueryCallbackProxy2,UInAppPurchaseQueryCallbackProxy2_*_&>
          (UInAppPurchaseQueryCallbackProxy2 **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInAppPurchaseReceiptsCallbackProxy,UInAppPurchaseReceiptsCallbackProxy_*_&> @ 14ec4aca0

UInAppPurchaseReceiptsCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInAppPurchaseReceiptsCallbackProxy,UInAppPurchaseReceiptsCallbackProxy_*_&>
          (UInAppPurchaseReceiptsCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInAppPurchaseRestoreCallbackProxy2,UInAppPurchaseRestoreCallbackProxy2_*_&> @ 14ec4acc0

UInAppPurchaseRestoreCallbackProxy2 * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UInAppPurchaseRestoreCallbackProxy2,UInAppPurchaseRestoreCallbackProxy2_*_&>
          (UInAppPurchaseRestoreCallbackProxy2 **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UJoinSessionCallbackProxy,UJoinSessionCallbackProxy_*_&> @ 14ec4ace0

UJoinSessionCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UJoinSessionCallbackProxy,UJoinSessionCallbackProxy_*_&>
          (UJoinSessionCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULeaderboardFlushCallbackProxy,ULeaderboardFlushCallbackProxy_*_&> @ 14ec4ad00

ULeaderboardFlushCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<ULeaderboardFlushCallbackProxy,ULeaderboardFlushCallbackProxy_*_&>
          (ULeaderboardFlushCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULeaderboardQueryCallbackProxy,ULeaderboardQueryCallbackProxy_*_&> @ 14ec4ad20

ULeaderboardQueryCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<ULeaderboardQueryCallbackProxy,ULeaderboardQueryCallbackProxy_*_&>
          (ULeaderboardQueryCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULogoutCallbackProxy,ULogoutCallbackProxy_*_&> @ 14ec4ad40

ULogoutCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<ULogoutCallbackProxy,ULogoutCallbackProxy_*_&>
          (ULogoutCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&> @ 14ec4ad60

UOnlineEngineInterfaceImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
          (UOnlineEngineInterfaceImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&> @ 14ec4ad80

UOnlineSessionClient * __cdecl
UE::Core::Private::DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>
          (UOnlineSessionClient **param_1)

{
  return *param_1;
}

// ReallocForCopy<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_> @ 14ec507f0

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_char> *param_5,
          int param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((0x400 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x400;
  }
  if ((int)uVar3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((0x400 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_7 = uVar3;
  return;
}

// ReallocGrow<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_> @ 14ec508a0

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x400 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x400;
  }
  return iVar5;
}

// ReallocShrink<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_> @ 14ec50920

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,ForElementType<unsigned_char> *param_3,int param_4,int *param_5
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x400 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x400) {
    *param_5 = 0x400;
  }
  return;
}

// GetServicesEngineUtils @ 14ec78cc0

IOnlineServicesEngineUtils * __cdecl UE::Online::GetServicesEngineUtils(void)

{
  IModuleInterface *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&OnlineSubsystemModuleName,L"OnlineSubsystemUtils");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pIVar1 = FModuleManager::GetModulePtr_Internal(OnlineSubsystemModuleName);
  if (pIVar1 != (IModuleInterface *)0x0) {
    return (IOnlineServicesEngineUtils *)pIVar1[2];
  }
  return (IOnlineServicesEngineUtils *)0x0;
}

// LexToString @ 14ec821d0

wchar_t * __cdecl UE::Net::LexToString(ERecreateSocketResult param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == NoAction) {
    return L"NoAction";
  }
  if (param_1 == NotReady) {
    return L"NotReady";
  }
  if (param_1 == AlreadyInProgress) {
    return L"AlreadyInProgress";
  }
  if (param_1 != BeganRecreate) {
    if (param_1 == Error) {
      return L"Error";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                       ,0xb6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Unknown";
  }
  return L"BeganRecreate";
}

// Construct<FPartyBeaconCrossplayPlatformMapping> @ 14eca7a80

void __cdecl
UE::CoreUObject::Private::Construct<FPartyBeaconCrossplayPlatformMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPartyBeaconCrossplayPlatformMapping> @ 14eca7d40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPartyBeaconCrossplayPlatformMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPartyBeaconCrossplayPlatformMapping> @ 14eca7d60

void __cdecl UE::CoreUObject::Private::Destruct<FPartyBeaconCrossplayPlatformMapping>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPartyBeaconCrossplayPlatformMapping> @ 14eca7e20

bool __cdecl
UE::CoreUObject::Private::Copy<FPartyBeaconCrossplayPlatformMapping>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPartyReservation> @ 14eca7fc0

void __cdecl UE::CoreUObject::Private::Construct<FPartyReservation>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FPartyReservation> @ 14eca8000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPartyReservation>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FPartyReservation> @ 14eca8040

void __cdecl UE::CoreUObject::Private::Destruct<FPartyReservation>(void *param_1)

{
  DestructItems<FPlayerReservation,int>
            (*(FPlayerReservation **)((longlong)param_1 + 0x48),*(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FPlayerReservation,int>
            (*(FPlayerReservation **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)((longlong)param_1 + 8));
  return;
}

// Copy<FPartyReservation> @ 14eca80a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPartyReservation>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      FUniqueNetIdRepl::operator=
                ((FUniqueNetIdRepl *)((longlong)param_1 + 8),
                 (FUniqueNetIdRepl *)((longlong)param_2 + 8));
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x38),
                 (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x38));
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x48),
                 (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x48));
      param_2 = (void *)((longlong)param_2 + 0x58);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSpectatorReservation> @ 14eca94c0

void __cdecl UE::CoreUObject::Private::Construct<FSpectatorReservation>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)((longlong)param_1 + 0x30) = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  return;
}

// ConstructForTests<FSpectatorReservation> @ 14eca9520

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpectatorReservation>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)((longlong)param_1 + 0x30) = &___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  return;
}

// Destruct<FSpectatorReservation> @ 14eca9580

void __cdecl UE::CoreUObject::Private::Destruct<FSpectatorReservation>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)((longlong)param_1 + 0x30));
  FUniqueNetIdRepl::~FUniqueNetIdRepl(param_1);
  return;
}

// Copy<FSpectatorReservation> @ 14eca9690

bool __cdecl
UE::CoreUObject::Private::Copy<FSpectatorReservation>(void *param_1,void *param_2,int param_3)

{
  FUniqueNetIdRepl *pFVar1;
  FUniqueNetIdRepl *this;
  FUniqueNetIdRepl *this_00;
  
  if (param_3 != 0) {
    this_00 = (FUniqueNetIdRepl *)((longlong)param_1 + 0x30);
    this = param_1;
    do {
      pFVar1 = (FUniqueNetIdRepl *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FUniqueNetIdRepl::operator=(this,pFVar1);
      FUniqueNetIdRepl::operator=(this_00,pFVar1 + 1);
      ::FString::operator=((FString *)(this_00 + 1),(FString *)(pFVar1 + 2));
      ::FString::operator=((FString *)&this_00[1]._padding_,(FString *)&pFVar1[2]._padding_);
      *(undefined1 *)&this_00[1].ReplicationBytes.AllocatorInstance.Data =
           *(undefined1 *)&pFVar1[2].ReplicationBytes.AllocatorInstance.Data;
      *(undefined4 *)((longlong)&this_00[1].ReplicationBytes.AllocatorInstance.Data + 4) =
           *(undefined4 *)((longlong)&pFVar1[2].ReplicationBytes.AllocatorInstance.Data + 4);
      this_00 = (FUniqueNetIdRepl *)&this_00[2].ReplicationBytes.ArrayNum;
      param_3 = param_3 + -1;
      this = (FUniqueNetIdRepl *)&this[2].ReplicationBytes.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<ASpectatorBeaconClient,ASpectatorBeaconClient_*_&> @ 14eca9ad0

ASpectatorBeaconClient * __cdecl
UE::Core::Private::DereferenceIfNecessary<ASpectatorBeaconClient,ASpectatorBeaconClient_*_&>
          (ASpectatorBeaconClient **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestCloudInterface,FTestCloudInterface_*_&> @ 14eca9af0

FTestCloudInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestCloudInterface,FTestCloudInterface_*_&>
          (FTestCloudInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestExternalUIInterface,FTestExternalUIInterface_*_&> @ 14eca9b10

FTestExternalUIInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestExternalUIInterface,FTestExternalUIInterface_*_&>
          (FTestExternalUIInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestFriendsInterface,FTestFriendsInterface_*_&> @ 14eca9b30

FTestFriendsInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestFriendsInterface,FTestFriendsInterface_*_&>
          (FTestFriendsInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UQuitMatchCallbackProxy,UQuitMatchCallbackProxy_*_&> @ 14eca9b50

UQuitMatchCallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UQuitMatchCallbackProxy,UQuitMatchCallbackProxy_*_&>
          (UQuitMatchCallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UShowLoginUICallbackProxy,UShowLoginUICallbackProxy_*_&> @ 14eca9b70

UShowLoginUICallbackProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UShowLoginUICallbackProxy,UShowLoginUICallbackProxy_*_&>
          (UShowLoginUICallbackProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestLeaderboardInterface,FTestLeaderboardInterface_*_&> @ 14ecd5670

FTestLeaderboardInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestLeaderboardInterface,FTestLeaderboardInterface_*_&>
          (FTestLeaderboardInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestMessageInterface,FTestMessageInterface_*_&> @ 14ecd5690

FTestMessageInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestMessageInterface,FTestMessageInterface_*_&>
          (FTestMessageInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestPresenceInterface,FTestPresenceInterface_*_&> @ 14ecd56b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTestPresenceInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestPresenceInterface,FTestPresenceInterface_*_&>
          (FTestPresenceInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestPurchaseInterface,FTestPurchaseInterface_*_&> @ 14ecd56d0

FTestPurchaseInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestPurchaseInterface,FTestPurchaseInterface_*_&>
          (FTestPurchaseInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestSessionInterface,FTestSessionInterface_*_&> @ 14ecd56f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTestSessionInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestSessionInterface,FTestSessionInterface_*_&>
          (FTestSessionInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestSharingInterface,FTestSharingInterface_*_&> @ 14ecd5710

FTestSharingInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestSharingInterface,FTestSharingInterface_*_&>
          (FTestSharingInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestStatsInterface,FTestStatsInterface_*_&> @ 14ecd5730

FTestStatsInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestStatsInterface,FTestStatsInterface_*_&>
          (FTestStatsInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestStoreInterface,FTestStoreInterface_*_&> @ 14ecd5750

FTestStoreInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestStoreInterface,FTestStoreInterface_*_&>
          (FTestStoreInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestTimeInterface,FTestTimeInterface_*_&> @ 14ecd5770

FTestTimeInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestTimeInterface,FTestTimeInterface_*_&>
          (FTestTimeInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestTitleFileInterface,FTestTitleFileInterface_*_&> @ 14ecd5790

FTestTitleFileInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestTitleFileInterface,FTestTitleFileInterface_*_&>
          (FTestTitleFileInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestUserInterface,FTestUserInterface_*_&> @ 14ecd57b0

FTestUserInterface * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestUserInterface,FTestUserInterface_*_&>
          (FTestUserInterface **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTestVoice,FTestVoice_*_&> @ 14ecd57d0

FTestVoice * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTestVoice,FTestVoice_*_&>(FTestVoice **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FVoiceEngineImpl,FVoiceEngineImpl_*_&> @ 14ecd57f0

FVoiceEngineImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<FVoiceEngineImpl,FVoiceEngineImpl_*_&>
          (FVoiceEngineImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UVOIPTalker,UVOIPTalker_*_&> @ 14ecd5810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVOIPTalker * __cdecl
UE::Core::Private::DereferenceIfNecessary<UVOIPTalker,UVOIPTalker_*_&>(UVOIPTalker **param_1)

{
  return *param_1;
}

