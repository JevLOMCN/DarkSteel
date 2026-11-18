// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 30

// StaticClass @ 146c15f90

UClass * __cdecl UMediaPlaylist::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlaylist",
               &Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton,
               StaticRegisterNativesUMediaPlaylist,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlaylist>,InternalVTableHelperCtorCaller<UMediaPlaylist>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton;
}

// UMediaPlaylist @ 146c1d680

UMediaPlaylist * __thiscall
UMediaPlaylist::UMediaPlaylist(UMediaPlaylist *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaPlaylist__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  return this;
}

// UMediaPlaylist @ 146c1d6c0

UMediaPlaylist * __thiscall
UMediaPlaylist::UMediaPlaylist(UMediaPlaylist *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaPlaylist__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  return this;
}

// ~UMediaPlaylist @ 146c1ea60

void __thiscall UMediaPlaylist::~UMediaPlaylist(UMediaPlaylist *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMediaPlaylist__6B_;
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Add @ 146c20490

bool __thiscall UMediaPlaylist::Add(UMediaPlaylist *this,UMediaSource *param_1)

{
  TArray<TObjectPtr<UMediaSource>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UMediaSource *local_18 [2];
  
  if (param_1 == (UMediaSource *)0x0) {
    return false;
  }
  pTVar1 = &this->Items;
  local_18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Items).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (this->Items).ArrayNum;
  piVar2 = &(this->Items).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Items).ArrayNum = iVar7 + 1;
  *(UMediaSource **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UMediaSource *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return true;
}

// AddFile @ 146c207e0

bool __thiscall UMediaPlaylist::AddFile(UMediaPlaylist *this,FString *param_1)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName FVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  UFileMediaSource *this_00;
  ForAnyElementType FVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  
  if ((param_1->Data).ArrayNum < 2) {
    return false;
  }
  FPaths::GetBaseFilename(&local_28,param_1,true);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(local_res18,(wchar_t *)FVar7.Data);
  FVar1 = *pFVar3;
  FVar4 = (FName)UFileMediaSource::StaticClass();
  pUVar5 = (UClass *)GetTransientPackage();
  MakeUniqueObjectName((UObject *)&local_res10,pUVar5,FVar4,FVar1.ComparisonIndex.Value.Value);
  pUVar6 = GetTransientPackage();
  this_00 = NewObject<UFileMediaSource>
                      ((UObject *)pUVar6,local_res10,RF_Transient|RF_Transactional,(UObject *)0x0,
                       false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  UFileMediaSource::SetFilePath(this_00,param_1);
  bVar2 = Add(this,(UMediaSource *)this_00);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// AddUrl @ 146c208e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlaylist::AddUrl(UMediaPlaylist *this,FString *param_1)

{
  char cVar1;
  bool bVar2;
  UPackage *pUVar3;
  UStreamMediaSource *pUVar4;
  
  if (1 < (param_1->Data).ArrayNum) {
    pUVar3 = GetTransientPackage();
    pUVar4 = NewObject<UStreamMediaSource>
                       ((UObject *)pUVar3,(FName)0x0,RF_Transient|RF_Transactional,(UObject *)0x0,
                        false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    ::FString::operator=(&pUVar4->StreamUrl,param_1);
    cVar1 = (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4);
    if (cVar1 != '\0') {
      bVar2 = Add(this,(UMediaSource *)pUVar4);
      return bVar2;
    }
    if (1 < (byte)LogMediaAssets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
  }
  return false;
}

// CanBeInCluster @ 146c21000

bool __thiscall UMediaPlaylist::CanBeInCluster(UMediaPlaylist *this)

{
  return false;
}

// Get @ 146c27d70

UMediaSource * __thiscall UMediaPlaylist::Get(UMediaPlaylist *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMediaSource *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Items).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMediaSource *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UMediaSource **)((this->Items).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UMediaSource *)0x0;
}

// GetNext @ 146c2ae30

UMediaSource * __thiscall UMediaPlaylist::GetNext(UMediaPlaylist *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UMediaSource *pUVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->Items).ArrayNum;
  if (iVar7 < 1) {
    *param_1 = -1;
    return (UMediaSource *)0x0;
  }
  iVar7 = iVar7 + -1;
  if (*param_1 < iVar7) {
    iVar7 = *param_1;
  }
  iVar3 = -1;
  if (-1 < iVar7) {
    iVar3 = iVar7;
  }
  *param_1 = iVar3 + 1;
  uVar6 = (iVar3 + 1) % (this->Items).ArrayNum;
  *param_1 = uVar6;
  uVar4 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMediaSource *)(*pcVar1)();
      return pUVar5;
    }
  }
  return *(UMediaSource **)((this->Items).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
}

// GetPrevious @ 146c2c6b0

UMediaSource * __thiscall UMediaPlaylist::GetPrevious(UMediaPlaylist *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UMediaSource *pUVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = (this->Items).ArrayNum;
  if (iVar3 < 1) {
    *param_1 = -1;
    return (UMediaSource *)0x0;
  }
  if (*param_1 < iVar3) {
    iVar3 = *param_1;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  *param_1 = iVar5 + -1;
  iVar3 = (this->Items).ArrayNum + iVar5 + -1;
  *param_1 = iVar3;
  uVar6 = iVar3 % (this->Items).ArrayNum;
  *param_1 = uVar6;
  uVar7 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMediaSource *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(UMediaSource **)((this->Items).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
}

// GetPrivateStaticClass @ 146c2cbe0

UClass * __cdecl UMediaPlaylist::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlaylist",
               &Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton,
               StaticRegisterNativesUMediaPlaylist,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlaylist>,InternalVTableHelperCtorCaller<UMediaPlaylist>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton;
}

// GetRandom @ 146c2d270

UMediaSource * __thiscall UMediaPlaylist::GetRandom(UMediaPlaylist *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UMediaSource *pUVar6;
  
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 == 0) {
    *param_1 = -1;
    return (UMediaSource *)0x0;
  }
  uVar4 = 0;
  if (0 < iVar1 + -1) {
    uVar4 = rand();
    uVar5 = (uint)((float)(uVar4 & 0x7fff) * (float)(iVar1 + -1) * __real_38000100);
    uVar4 = iVar1 - 2U;
    if ((int)uVar5 < (int)(iVar1 - 2U)) {
      uVar4 = uVar5;
    }
  }
  *param_1 = uVar4;
  uVar5 = 0;
  if ((int)uVar4 < (this->Items).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UMediaSource *)(*pcVar2)();
    return pUVar6;
  }
  return *(UMediaSource **)((this->Items).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
}

// Insert @ 146c2f320

void __thiscall UMediaPlaylist::Insert(UMediaPlaylist *this,UMediaSource *param_1,int param_2)

{
  TArray<TObjectPtr<UMediaSource>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  UMediaSource *local_18 [2];
  
  iVar5 = (this->Items).ArrayNum;
  pTVar1 = &this->Items;
  if (param_2 < iVar5) {
    iVar5 = param_2;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar6 + (longlong)(this->Items).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Items).ArrayNum;
  piVar2 = &(this->Items).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  (this->Items).ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)iVar7 * 8;
  memmove(pFVar6 + 8,pFVar6,(longlong)(iVar5 - iVar7) << 3);
  *(UMediaSource **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UMediaSource *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// Remove @ 146c32110

bool __thiscall UMediaPlaylist::Remove(UMediaPlaylist *this,UMediaSource *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UMediaSource *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UMediaSource *local_48 [2];
  
  local_48[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->Items).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->Items).ArrayNum;
  iVar10 = 0;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Items).AllocatorInstance.Data;
    lVar7 = 0;
    bVar4 = *(UMediaSource **)pFVar2 != local_48[0];
    pUVar6 = local_48[0];
    iVar10 = 0;
    do {
      iVar8 = iVar10;
      do {
        lVar7 = lVar7 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(UMediaSource **)(pFVar2 + lVar7 * 8) != pUVar6));
      if (bVar4 != false) {
        if (iVar9 != iVar10) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar10 * 8,
                  (longlong)(iVar8 - iVar10) << 3);
          pUVar6 = local_48[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar10);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar10 = iVar8;
    } while (lVar7 < iVar1);
    iVar10 = iVar1 - iVar9;
    (this->Items).ArrayNum = iVar9;
  }
  return 0 < iVar10;
}

// RemoveAt @ 146c322d0

bool __thiscall UMediaPlaylist::RemoveAt(UMediaPlaylist *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  
  if ((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->Items).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar6 = (this->Items).ArrayNum + ~param_1;
    _Dst = (this->Items).AllocatorInstance.Data + (longlong)param_1 * 8;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->Items).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->Items).AllocatorInstance,(this->Items).ArrayNum,&(this->Items).ArrayMax);
    return true;
  }
  return false;
}

// Replace @ 146c342b0

bool __thiscall UMediaPlaylist::Replace(UMediaPlaylist *this,int param_1,UMediaSource *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->Items).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->Items).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(UMediaSource **)(pFVar1 + (longlong)param_1 * 8) = param_2;
    return true;
  }
  return false;
}

// StaticRegisterNativesUMediaPlaylist @ 146c37f10

void __cdecl UMediaPlaylist::StaticRegisterNativesUMediaPlaylist(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UMediaPlaylist_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAdd @ 146c3b540

void __cdecl UMediaPlaylist::execAdd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *local_res10;
  UObject *local_18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    local_18[0] = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if ((*(UObject ***)(param_1 + 1) <= local_18) &&
       (local_18 < *(UObject ***)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)&param_1[1].field_0x8;
    if (iVar4 == *(int *)&param_1[1].field_0xc) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
    }
    *(int *)&param_1[1].field_0x8 = iVar4 + 1;
    *(UObject **)(*(longlong *)(param_1 + 1) + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execAddFile @ 146c3b6b0

void __cdecl UMediaPlaylist::execAddFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FName FVar4;
  bool bVar5;
  FName *pFVar6;
  FName FVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  UFileMediaSource *pUVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FName local_res10;
  FName local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.Data.ArrayNum < 2) {
    bVar5 = false;
    goto LAB_146c3b9a8;
  }
  FPaths::GetBaseFilename(&local_58,&local_98,true);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar12.Data = local_58.Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(local_res18,(wchar_t *)FVar12.Data);
  FVar4 = *pFVar6;
  FVar7 = (FName)UFileMediaSource::StaticClass();
  pUVar8 = (UClass *)GetTransientPackage();
  MakeUniqueObjectName((UObject *)&local_res10,pUVar8,FVar7,FVar4.ComparisonIndex.Value.Value);
  pUVar9 = GetTransientPackage();
  pUVar10 = NewObject<UFileMediaSource>
                      ((UObject *)pUVar9,local_res10,RF_Transient|RF_Transactional,(UObject *)0x0,
                       false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  ::FString::Empty(&pUVar10->ResolvedFullPath);
  iVar13 = local_98.Data.ArrayNum;
  if (local_98.Data.ArrayNum < 2) {
LAB_146c3b916:
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
    pFVar11 = &pUVar10->FilePath;
    if (pFVar11 != &local_98) {
      piVar1 = &(pUVar10->FilePath).Data.ArrayMax;
      iVar2 = *piVar1;
      (pUVar10->FilePath).Data.ArrayNum = iVar13;
      if ((iVar13 == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar13,iVar2,(ForAnyElementType *)pFVar11,iVar13,piVar1);
        if (iVar13 != 0) {
          memcpy((pFVar11->Data).AllocatorInstance.Data,FVar12.Data,(longlong)iVar13 * 2);
        }
      }
    }
  }
  else {
    bVar5 = ::FString::StartsWith(&local_98,L"./",2,IgnoreCase);
    if (bVar5) {
      iVar13 = local_98.Data.ArrayNum;
      goto LAB_146c3b916;
    }
    FPaths::ConvertRelativePathToFull(&local_88,&local_98);
    pFVar11 = FPaths::ProjectContentDir(&local_78);
    FPaths::ConvertRelativePathToFull(&local_68,pFVar11);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar13 = local_68.Data.ArrayNum + -1;
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar13 = 0;
      FVar12.Data = (FScriptContainerElement *)L"";
    }
    bVar5 = ::FString::StartsWith(&local_88,(wchar_t *)FVar12.Data,iVar13,IgnoreCase);
    if (bVar5) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar12.Data = local_68.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_88,(wchar_t *)FVar12.Data);
      pFVar11 = ::FString::FString(&local_48,L"./");
      ::FString::ConcatFF(&local_78,pFVar11,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.ArrayNum = local_78.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_88.Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AssignRange
              (&pUVar10->FilePath,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar13);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = Add((UMediaPlaylist *)param_1,(UMediaSource *)pUVar10);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_146c3b9a8:
  *(bool *)param_3 = bVar5;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddUrl @ 146c3b9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaPlaylist::execAddUrl(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  ForAnyElementType _Src;
  int iVar5;
  char cVar6;
  bool bVar7;
  UPackage *pUVar8;
  UStreamMediaSource *pUVar9;
  longlong lVar10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_30 < 2) {
    bVar7 = false;
  }
  else {
    pUVar8 = GetTransientPackage();
    pUVar9 = NewObject<UStreamMediaSource>
                       ((UObject *)pUVar8,(FName)0x0,RF_Transient|RF_Transactional,(UObject *)0x0,
                        false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    _Src.Data = local_38.Data;
    pFVar2 = &pUVar9->StreamUrl;
    if (pFVar2 != (FString *)&local_38) {
      iVar5 = (int)local_30;
      lVar10 = (longlong)(int)local_30;
      piVar1 = &(pUVar9->StreamUrl).Data.ArrayMax;
      iVar3 = *piVar1;
      (pUVar9->StreamUrl).Data.ArrayNum = (int)local_30;
      if (((int)local_30 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_30,iVar3,(ForAnyElementType *)pFVar2,(int)local_30,piVar1);
        if (iVar5 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,_Src.Data,lVar10 * 2);
        }
      }
    }
    cVar6 = (**(code **)(pUVar9->_padding_ + 0x2b8))(pUVar9);
    if (cVar6 == '\0') {
      if (1 < (byte)LogMediaAssets._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      }
      bVar7 = false;
    }
    else {
      bVar7 = Add((UMediaPlaylist *)param_1,(UMediaSource *)pUVar9);
    }
  }
  *(bool *)param_3 = bVar7;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGet @ 146c3c3c0

void __cdecl UMediaPlaylist::execGet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[1].field_0x8 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[1].field_0x8) {
      uVar5 = ~local_res8[0] >> 0x1f;
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
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + lVar4 * 8);
  }
  return;
}

// execGetNext @ 146c3cde0

void __cdecl UMediaPlaylist::execGetNext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaSource *pUVar2;
  int *piVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetNext((UMediaPlaylist *)param_1,piVar3);
  *(UMediaSource **)param_3 = pUVar2;
  return;
}

// execGetPrevious @ 146c3d290

void __cdecl UMediaPlaylist::execGetPrevious(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaSource *pUVar2;
  int *piVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetPrevious((UMediaPlaylist *)param_1,piVar3);
  *(UMediaSource **)param_3 = pUVar2;
  return;
}

// execGetRandom @ 146c3d340

void __cdecl UMediaPlaylist::execGetRandom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaSource *pUVar2;
  int *piVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetRandom((UMediaPlaylist *)param_1,piVar3);
  *(UMediaSource **)param_3 = pUVar2;
  return;
}

// execInsert @ 146c3e610

void __cdecl UMediaPlaylist::execInsert(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Src;
  int iVar6;
  int local_res8 [2];
  UObject *local_res10;
  UObject *local_18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = *(int *)&param_1[1].field_0x8;
  if (local_res8[0] < *(int *)&param_1[1].field_0x8) {
    iVar5 = local_res8[0];
  }
  iVar6 = 0;
  if (0 < iVar5) {
    iVar6 = iVar5;
  }
  local_18[0] = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  if ((*(UObject ***)(param_1 + 1) <= local_18) &&
     (local_18 < *(UObject ***)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&param_1[1].field_0x8;
  if (iVar5 == *(int *)&param_1[1].field_0xc) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
  }
  lVar2 = *(longlong *)(param_1 + 1);
  *(int *)&param_1[1].field_0x8 = iVar5 + 1;
  _Src = (void *)(lVar2 + (longlong)iVar6 * 8);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar5 - iVar6) << 3);
  *(UObject **)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 1)) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  return;
}

// execNum @ 146c3ec20

void __cdecl UMediaPlaylist::execNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x8;
  return;
}

// execRemove @ 146c408e0

void __cdecl UMediaPlaylist::execRemove(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  UObject *local_res20;
  UObject *local_58 [3];
  ulonglong uVar10;
  
  uVar7 = 0;
  iVar13 = 0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58[0] = local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  if (((*(UObject ***)(param_1 + 1) <= local_58) &&
      (local_58 < *(UObject ***)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)&param_1[1].field_0x8;
  if (iVar1 != 0) {
    plVar3 = *(longlong **)(param_1 + 1);
    bVar5 = (UObject *)*plVar3 != local_58[0];
    pUVar6 = local_58[0];
    uVar10 = uVar7;
    uVar12 = uVar7;
    do {
      uVar8 = (uint)uVar10;
      uVar9 = uVar8;
      do {
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)uVar9;
        if ((longlong)iVar1 <= (longlong)uVar7) break;
      } while (bVar5 == ((UObject *)plVar3[uVar7] != pUVar6));
      if (bVar5 != false) {
        uVar11 = (uint)uVar12;
        if (uVar11 != uVar8) {
          memmove(plVar3 + (int)uVar11,plVar3 + (int)uVar8,(longlong)(int)(uVar9 - uVar8) << 3);
          pUVar6 = local_58[0];
        }
        uVar12 = (ulonglong)(uVar11 + (uVar9 - uVar8));
      }
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < (longlong)iVar1);
    iVar13 = iVar1 - (int)uVar12;
    *(int *)&param_1[1].field_0x8 = (int)uVar12;
  }
  *(bool *)param_3 = 0 < iVar13;
  return;
}

// execRemoveAt @ 146c40b00

void __cdecl UMediaPlaylist::execRemoveAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *_Dst;
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  lVar7 = (longlong)(int)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[1].field_0x8 <= (int)local_res8[0])) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar5 = ~local_res8[0];
    uVar6 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[1].field_0x8) {
      uVar6 = uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    _Dst = *(FScriptContainerElement **)(param_1 + 1) + lVar7 * 8;
    iVar4 = *(int *)&param_1[1].field_0x8 + uVar5;
    if (iVar4 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
    }
    *(int *)&param_1[1].field_0x8 = *(int *)&param_1[1].field_0x8 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)(param_1 + 1),*(int *)&param_1[1].field_0x8,
               (int *)&param_1[1].field_0xc);
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execReplace @ 146c40cf0

void __cdecl UMediaPlaylist::execReplace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint local_res8 [2];
  UObject *local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[1].field_0x8 <= (int)local_res8[0])) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[1].field_0x8) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(param_1 + 1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)(lVar2 + lVar6 * 8) = pUVar4;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

