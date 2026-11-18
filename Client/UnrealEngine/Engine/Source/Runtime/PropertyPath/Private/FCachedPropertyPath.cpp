// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 38

// StaticStruct @ 144472b50

UScriptStruct * __cdecl FCachedPropertyPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedPropertyPath.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FCachedPropertyPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedPropertyPath,(UObject *)pUVar1,
                         L"CachedPropertyPath");
  }
  return Z_Registration_Info_UScriptStruct_FCachedPropertyPath.OuterSingleton;
}

// FCachedPropertyPath @ 144489bc0

FCachedPropertyPath * __thiscall
FCachedPropertyPath::FCachedPropertyPath(FCachedPropertyPath *this,FCachedPropertyPath *param_1)

{
  int *piVar1;
  int iVar2;
  FPropertyPathSegment *pFVar3;
  UFunction *pUVar4;
  
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  iVar2 = (param_1->Segments).ArrayNum;
  pFVar3 = (FPropertyPathSegment *)(param_1->Segments).AllocatorInstance.Data;
  (this->Segments).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FPropertyPathSegment,FPropertyPathSegment,int>
              ((this->Segments).AllocatorInstance.Data,pFVar3,iVar2);
  }
  this->CachedAddress = param_1->CachedAddress;
  pUVar4 = (param_1->CachedFunction).field0_0x0.DebugPtr;
  (this->CachedFunction).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->CachedContainer = param_1->CachedContainer;
  this->CachedLastContainerInPath = param_1->CachedLastContainerInPath;
  this->CachedLastContainerInPathIndex = param_1->CachedLastContainerInPathIndex;
  this->bCanSafelyUsedCachedAddress = param_1->bCanSafelyUsedCachedAddress;
  return this;
}

// FCachedPropertyPath @ 144489c90

FCachedPropertyPath * __thiscall
FCachedPropertyPath::FCachedPropertyPath
          (FCachedPropertyPath *this,FPropertyChangedChainEvent *param_1)

{
  this->CachedLastContainerInPathIndex = -1;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->CachedAddress = (void *)0x0;
  (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->CachedContainer = (void *)0x0;
  this->CachedLastContainerInPath = (void *)0x0;
  this->bCanSafelyUsedCachedAddress = false;
  MakeFromChangeEvent(this,(FPropertyChangedEvent *)param_1,param_1->PropertyChain);
  return this;
}

// FCachedPropertyPath @ 144489ce0

FCachedPropertyPath * __thiscall
FCachedPropertyPath::FCachedPropertyPath
          (FCachedPropertyPath *this,FPropertyChangedEvent *param_1,FEditPropertyChain *param_2)

{
  this->CachedLastContainerInPathIndex = -1;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->CachedAddress = (void *)0x0;
  (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->CachedContainer = (void *)0x0;
  this->CachedLastContainerInPath = (void *)0x0;
  this->bCanSafelyUsedCachedAddress = false;
  MakeFromChangeEvent(this,param_1,param_2);
  return this;
}

// FCachedPropertyPath @ 144489d20

FCachedPropertyPath * __thiscall
FCachedPropertyPath::FCachedPropertyPath(FCachedPropertyPath *this,FPropertyPathSegment *param_1)

{
  int *piVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  
  this->CachedLastContainerInPathIndex = -1;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  this->CachedAddress = (void *)0x0;
  (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->CachedContainer = (void *)0x0;
  this->CachedLastContainerInPath = (void *)0x0;
  this->bCanSafelyUsedCachedAddress = false;
  *piVar1 = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,(ForAnyElementType *)this,piVar1);
  pFVar4 = (FName *)((this->Segments).AllocatorInstance.Data + (longlong)iVar3 * 0x20);
  (this->Segments).ArrayNum = iVar3 + 1;
  *pFVar4 = param_1->Name;
  pFVar4[1].ComparisonIndex.Value = param_1->ArrayIndex;
  FVar2 = (FName)(param_1->Struct).field0_0x0.DebugPtr;
  pFVar4[2] = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FVar2 = (FName)(param_1->Field).Container.Unknown;
  pFVar4[3] = FVar2;
  if (((((ulonglong)FVar2 & 1) != 0) &&
      ((UObject *)((ulonglong)FVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar2 & 0xfffffffffffffffe));
  }
  return this;
}

// FCachedPropertyPath @ 144489de0

FCachedPropertyPath * __thiscall
FCachedPropertyPath::FCachedPropertyPath
          (FCachedPropertyPath *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FPropertyPathSegment *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPropertyPathSegment *pFVar7;
  FCachedPropertyPath *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  FName *pFVar12;
  undefined1 local_res8 [8];
  FPropertyPathSegment local_48;
  
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->CachedAddress = (void *)0x0;
  (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->CachedContainer = (void *)0x0;
  this->CachedLastContainerInPath = (void *)0x0;
  this->CachedLastContainerInPathIndex = -1;
  this->bCanSafelyUsedCachedAddress = false;
  iVar1 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    iVar6 = 0;
    if (pFVar10 == pFVar9) break;
    if (*(int *)(pFVar10 + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pFVar10;
      iVar6 = *(int *)(pFVar10 + 8) + -1;
    }
    pFVar7 = FPropertyPathSegment::FPropertyPathSegment(&local_48,iVar6,pwVar11);
    pFVar2 = (FPropertyPathSegment *)(this->Segments).AllocatorInstance.Data;
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (this->Segments).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCachedPropertyPath *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar6 = (this->Segments).ArrayNum;
    if (iVar6 == (this->Segments).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)this,&(this->Segments).ArrayMax);
    }
    (this->Segments).ArrayNum = iVar6 + 1;
    pFVar12 = (FName *)((this->Segments).AllocatorInstance.Data + (longlong)iVar6 * 0x20);
    *pFVar12 = pFVar7->Name;
    pFVar12[1].ComparisonIndex.Value = pFVar7->ArrayIndex;
    FVar3 = (FName)(pFVar7->Struct).field0_0x0.DebugPtr;
    pFVar12[2] = FVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
    FVar3 = (FName)(pFVar7->Field).Container.Unknown;
    pFVar12[3] = FVar3;
    if (((((ulonglong)FVar3 & 1) != 0) &&
        ((UObject *)((ulonglong)FVar3 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar3 & 0xfffffffffffffffe));
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return this;
}

// FCachedPropertyPath @ 144489fa0

FCachedPropertyPath * __thiscall
FCachedPropertyPath::FCachedPropertyPath(FCachedPropertyPath *this,FString *param_1)

{
  this->CachedLastContainerInPathIndex = -1;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->CachedAddress = (void *)0x0;
  (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->CachedContainer = (void *)0x0;
  this->CachedLastContainerInPath = (void *)0x0;
  this->bCanSafelyUsedCachedAddress = false;
  MakeFromString(this,param_1);
  return this;
}

// FCachedPropertyPath @ 144489fe0

FCachedPropertyPath * __thiscall FCachedPropertyPath::FCachedPropertyPath(FCachedPropertyPath *this)

{
  this->CachedLastContainerInPathIndex = -1;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->CachedAddress = (void *)0x0;
  (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->CachedContainer = (void *)0x0;
  this->CachedLastContainerInPath = (void *)0x0;
  this->bCanSafelyUsedCachedAddress = false;
  return this;
}

// ~FCachedPropertyPath @ 14448a820

void __thiscall FCachedPropertyPath::~FCachedPropertyPath(FCachedPropertyPath *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Segments).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator== @ 14448aac0

bool __thiscall FCachedPropertyPath::operator==(FCachedPropertyPath *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FName FStackX_8;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  iVar7 = (this->Segments).ArrayNum;
  uVar10 = 0;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  uVar11 = uVar10;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      uVar6 = uVar5;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->Segments).AllocatorInstance.Data;
      FStackX_8 = *(FName *)(pFVar1 + uVar11);
      pFVar8 = ::FName::ToString(&FStackX_8,&FStack_28);
      iVar7 = (pFVar8->Data).ArrayNum;
      uVar6 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar6 = uVar5;
      }
      ::FString::AppendChars(&FStack_48,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,uVar6);
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar1 + uVar11 + 8) != -1) {
        ::FString::PrintfImpl(&FStack_38,L"[%d]");
        uVar6 = FStack_38.Data.ArrayNum - 1;
        if (FStack_38.Data.ArrayNum == 0) {
          uVar6 = uVar5;
        }
        ::FString::AppendChars(&FStack_48,(wchar_t *)FStack_38.Data.AllocatorInstance.Data,uVar6);
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
      }
      if ((int)uVar9 < (this->Segments).ArrayNum + -1) {
        ::FString::AppendChars(&FStack_48,L".",1);
      }
      iVar7 = (this->Segments).ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x20;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  iVar7 = (param_1->Data).ArrayNum;
  if (FStack_48.Data.ArrayNum == iVar7) {
    if (FStack_48.Data.ArrayNum < 2) {
      bVar3 = true;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FStack_48.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar7 == 0;
    }
  }
  else {
    bVar3 = FStack_48.Data.ArrayNum + iVar7 == 1;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Equals @ 14448d790

bool __thiscall FCachedPropertyPath::Equals(FCachedPropertyPath *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar7 = (this->Segments).ArrayNum;
  uVar10 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  uVar11 = uVar10;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      uVar6 = uVar5;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->Segments).AllocatorInstance.Data;
      local_res8 = *(FName *)(pFVar1 + uVar11);
      pFVar8 = ::FName::ToString(&local_res8,&local_28);
      iVar7 = (pFVar8->Data).ArrayNum;
      uVar6 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar6 = uVar5;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,uVar6);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar1 + uVar11 + 8) != -1) {
        ::FString::PrintfImpl(&local_38,L"[%d]");
        uVar6 = local_38.Data.ArrayNum - 1;
        if (local_38.Data.ArrayNum == 0) {
          uVar6 = uVar5;
        }
        ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar6);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if ((int)uVar9 < (this->Segments).ArrayNum + -1) {
        ::FString::AppendChars(&local_48,L".",1);
      }
      iVar7 = (this->Segments).ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x20;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  iVar7 = (param_1->Data).ArrayNum;
  if (local_48.Data.ArrayNum == iVar7) {
    if (local_48.Data.ArrayNum < 2) {
      bVar3 = true;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar7 == 0;
    }
  }
  else {
    bVar3 = local_48.Data.ArrayNum + iVar7 == 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetCachedAddress @ 14448dc60

void * __thiscall FCachedPropertyPath::GetCachedAddress(FCachedPropertyPath *this)

{
  return this->CachedAddress;
}

// GetCachedContainer @ 14448dc70

void * __thiscall FCachedPropertyPath::GetCachedContainer(FCachedPropertyPath *this)

{
  return this->CachedContainer;
}

// GetCachedFunction @ 14448dc80

UFunction * __thiscall FCachedPropertyPath::GetCachedFunction(FCachedPropertyPath *this)

{
  return (this->CachedFunction).field0_0x0.DebugPtr;
}

// GetCachedLastContainerInPath @ 14448dc90

void * __thiscall FCachedPropertyPath::GetCachedLastContainerInPath(FCachedPropertyPath *this)

{
  return this->CachedLastContainerInPath;
}

// GetCachedLastContainerInPathIndex @ 14448dca0

int __thiscall FCachedPropertyPath::GetCachedLastContainerInPathIndex(FCachedPropertyPath *this)

{
  return this->CachedLastContainerInPathIndex;
}

// GetFProperty @ 14448dcb0

FProperty * __thiscall FCachedPropertyPath::GetFProperty(FCachedPropertyPath *this)

{
  FProperty *pFVar1;
  FPropertyPathSegment *pFVar2;
  
  pFVar2 = GetLastSegment(this);
  pFVar1 = (FProperty *)(pFVar2->Field).Container.Field;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar1->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      return pFVar1;
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
    return (FProperty *)0x0;
  }
  return (FProperty *)0x0;
}

// GetLastSegment @ 14448ddd0

FPropertyPathSegment * __thiscall FCachedPropertyPath::GetLastSegment(FCachedPropertyPath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPropertyPathSegment *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Segments).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyPathSegment *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPropertyPathSegment *)
         ((this->Segments).AllocatorInstance.Data +
         (longlong)((this->Segments).ArrayNum + -1) * 0x20);
}

// GetNumSegments @ 14448de60

int __thiscall FCachedPropertyPath::GetNumSegments(FCachedPropertyPath *this)

{
  return (this->Segments).ArrayNum;
}

// GetSegment @ 14448e530

FPropertyPathSegment * __thiscall
FCachedPropertyPath::GetSegment(FCachedPropertyPath *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPropertyPathSegment *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Segments).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPropertyPathSegment *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPropertyPathSegment *)
         ((this->Segments).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

// IsFullyResolved @ 144490d90

bool __thiscall FCachedPropertyPath::IsFullyResolved(FCachedPropertyPath *this)

{
  if (((this->bCanSafelyUsedCachedAddress != false) && (this->CachedContainer != (void *)0x0)) &&
     (((this->CachedFunction).field0_0x0.DebugPtr != (UFunction *)0x0 ||
      (this->CachedAddress != (void *)0x0)))) {
    return true;
  }
  return false;
}

// IsResolved @ 144490dc0

bool __thiscall FCachedPropertyPath::IsResolved(FCachedPropertyPath *this)

{
  if (((this->CachedFunction).field0_0x0.DebugPtr == (UFunction *)0x0) &&
     (this->CachedAddress == (void *)0x0)) {
    return false;
  }
  return true;
}

// MakeFromChangeEvent @ 144490de0

void __thiscall
FCachedPropertyPath::MakeFromChangeEvent
          (FCachedPropertyPath *this,FPropertyChangedChainEvent *param_1)

{
  MakeFromChangeEvent(this,(FPropertyChangedEvent *)param_1,param_1->PropertyChain);
  return;
}

// MakeFromChangeEvent @ 144490e00

void __thiscall
FCachedPropertyPath::MakeFromChangeEvent
          (FCachedPropertyPath *this,FPropertyChangedEvent *param_1,FEditPropertyChain *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  FPropertyPathSegment *pFVar4;
  FName FVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  FPropertyPathSegment *pFVar11;
  FName *pFVar12;
  int iVar13;
  FString local_58;
  FString local_48;
  FPropertyPathSegment local_38;
  
  puVar2 = (undefined8 *)param_2->_padding_;
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    pvVar3 = (void *)*puVar2;
    bVar8 = IsThisNotNull(pvVar3,"FField::GetName");
    if (bVar8) {
      ::FName::ToString((FName *)((longlong)pvVar3 + 0x20),&local_58);
    }
    else {
      ::FString::FString(&local_58,L"None");
    }
    uVar1 = param_1->ObjectIteratorIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->ArrayIndicesPerObject).ArrayNum)) {
      uVar9 = 0;
      if ((int)uVar1 < (param_1->ArrayIndicesPerObject).ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar10 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)((param_1->ArrayIndicesPerObject).DataPtr + (int)uVar1),&local_58);
      if ((piVar10 != (int *)0x0) && (*piVar10 != -1)) {
        ::FString::PrintfImpl(&local_48,L"[%d]");
        iVar13 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar13);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    iVar13 = local_58.Data.ArrayNum + -1;
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar13 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    pFVar11 = FPropertyPathSegment::FPropertyPathSegment(&local_38,iVar13,(wchar_t *)FVar7.Data);
    pFVar4 = (FPropertyPathSegment *)(this->Segments).AllocatorInstance.Data;
    if (((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (this->Segments).ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (this->Segments).ArrayNum;
    if (iVar13 == (this->Segments).ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,&(this->Segments).ArrayMax);
    }
    (this->Segments).ArrayNum = iVar13 + 1;
    pFVar12 = (FName *)((this->Segments).AllocatorInstance.Data + (longlong)iVar13 * 0x20);
    *pFVar12 = pFVar11->Name;
    pFVar12[1].ComparisonIndex.Value = pFVar11->ArrayIndex;
    FVar5 = (FName)(pFVar11->Struct).field0_0x0.DebugPtr;
    pFVar12[2] = FVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5);
    }
    FVar5 = (FName)(pFVar11->Field).Container.Unknown;
    pFVar12[3] = FVar5;
    if (((((ulonglong)FVar5 & 1) != 0) &&
        ((UObject *)((ulonglong)FVar5 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar5 & 0xfffffffffffffffe));
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while( true );
}

// MakeFromString @ 144491090

void __thiscall FCachedPropertyPath::MakeFromString(FCachedPropertyPath *this,FString *param_1)

{
  FPropertyPathSegment *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPropertyPathSegment *pFVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FName *pFVar13;
  FPropertyPathSegment local_68;
  FPropertyPathSegment local_48;
  
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar10 = 0;
  iVar7 = iVar5 + -1;
  iVar9 = 0;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      if (*(short *)((longlong)pwVar12 + lVar11 * 2) == 0x2e) {
        pFVar6 = FPropertyPathSegment::FPropertyPathSegment
                           (&local_68,iVar10 - iVar9,
                            (wchar_t *)((longlong)pwVar12 + (longlong)iVar9 * 2));
        pFVar1 = (FPropertyPathSegment *)(this->Segments).AllocatorInstance.Data;
        if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + (this->Segments).ArrayMax)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->Segments).ArrayNum;
        piVar8 = &(this->Segments).ArrayMax;
        if (iVar5 == *piVar8) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)this,piVar8);
        }
        (this->Segments).ArrayNum = iVar5 + 1;
        pFVar13 = (FName *)((this->Segments).AllocatorInstance.Data + (longlong)iVar5 * 0x20);
        *pFVar13 = pFVar6->Name;
        pFVar13[1].ComparisonIndex.Value = pFVar6->ArrayIndex;
        FVar2 = (FName)(pFVar6->Struct).field0_0x0.DebugPtr;
        pFVar13[2] = FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar2);
        }
        FVar2 = (FName)(pFVar6->Field).Container.Unknown;
        pFVar13[3] = FVar2;
        if (((((ulonglong)FVar2 & 1) != 0) &&
            ((UObject *)((ulonglong)FVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar2 & 0xfffffffffffffffe));
        }
        iVar9 = iVar10 + 1;
        lVar11 = lVar11 + 1;
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar7);
  }
  piVar8 = &(this->Segments).ArrayMax;
  pFVar6 = FPropertyPathSegment::FPropertyPathSegment
                     (&local_48,iVar7 - iVar9,(wchar_t *)((longlong)pwVar12 + (longlong)iVar9 * 2));
  pFVar1 = (FPropertyPathSegment *)(this->Segments).AllocatorInstance.Data;
  if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + *piVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Segments).ArrayNum;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar8);
  }
  (this->Segments).ArrayNum = iVar5 + 1;
  pFVar13 = (FName *)((this->Segments).AllocatorInstance.Data + (longlong)iVar5 * 0x20);
  *pFVar13 = pFVar6->Name;
  pFVar13[1].ComparisonIndex.Value = pFVar6->ArrayIndex;
  FVar2 = (FName)(pFVar6->Struct).field0_0x0.DebugPtr;
  pFVar13[2] = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FVar2 = (FName)(pFVar6->Field).Container.Unknown;
  pFVar13[3] = FVar2;
  if (((((ulonglong)FVar2 & 1) != 0) &&
      ((UObject *)((ulonglong)FVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar2 & 0xfffffffffffffffe));
  }
  return;
}

// MakeParentPath @ 144491360

FCachedPropertyPath * __thiscall
FCachedPropertyPath::MakeParentPath
          (FCachedPropertyPath *this,FCachedPropertyPath *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FCachedPropertyPath *pFVar5;
  uint uVar6;
  FCachedPropertyPath local_48;
  
  if ((this->Segments).ArrayNum == 0) {
    FCachedPropertyPath(__return_storage_ptr__,this);
    return __return_storage_ptr__;
  }
  FCachedPropertyPath(&local_48,this);
  uVar6 = local_48.Segments.ArrayNum - 1;
  uVar3 = 0;
  if ((int)uVar6 < local_48.Segments.ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FCachedPropertyPath *)(*pcVar1)();
    return pFVar5;
  }
  iVar4 = (local_48.Segments.ArrayNum - uVar6) + -1;
  if (iVar4 != 0) {
    memmove(local_48.Segments.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20,
            local_48.Segments.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20 + 0x20,
            (longlong)iVar4 << 5);
  }
  local_48.Segments.ArrayNum = local_48.Segments.ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,(ForAnyElementType *)&local_48,local_48.Segments.ArrayNum,
             &local_48.Segments.ArrayMax);
  FCachedPropertyPath(__return_storage_ptr__,&local_48);
  if (local_48.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Segments.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeUnresolvedCopy @ 144491470

FCachedPropertyPath * __cdecl
FCachedPropertyPath::MakeUnresolvedCopy
          (FCachedPropertyPath *__return_storage_ptr__,FCachedPropertyPath *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCachedPropertyPath *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 local_40;
  UObject *local_38;
  ulonglong uStack_30;
  
  __return_storage_ptr__->CachedLastContainerInPathIndex = -1;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  __return_storage_ptr__->CachedAddress = (void *)0x0;
  (__return_storage_ptr__->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  __return_storage_ptr__->CachedContainer = (void *)0x0;
  __return_storage_ptr__->CachedLastContainerInPath = (void *)0x0;
  __return_storage_ptr__->bCanSafelyUsedCachedAddress = false;
  iVar1 = (param_1->Segments).ArrayNum;
  pFVar7 = (param_1->Segments).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((param_1->Segments).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPropertyPathSegment_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    local_48 = *(undefined8 *)pFVar7;
    pFVar8 = (__return_storage_ptr__->Segments).AllocatorInstance.Data;
    local_40 = *(undefined4 *)(pFVar7 + 8);
    local_38 = (UObject *)0x0;
    uStack_30 = 0;
    if ((pFVar8 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar8 + (longlong)(__return_storage_ptr__->Segments).ArrayMax * 0x20)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCachedPropertyPath *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (__return_storage_ptr__->Segments).ArrayNum;
    if (iVar4 == (__return_storage_ptr__->Segments).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->Segments).ArrayMax);
    }
    (__return_storage_ptr__->Segments).ArrayNum = iVar4 + 1;
    pFVar8 = (__return_storage_ptr__->Segments).AllocatorInstance.Data + (longlong)iVar4 * 0x20;
    *(undefined8 *)pFVar8 = local_48;
    *(undefined4 *)(pFVar8 + 8) = local_40;
    *(UObject **)(pFVar8 + 0x10) = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38);
    }
    *(ulonglong *)(pFVar8 + 0x18) = uStack_30;
    if ((((uStack_30 & 1) != 0) && ((UObject *)(uStack_30 & 0xfffffffffffffffe) != (UObject *)0x0))
       && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uStack_30 & 0xfffffffffffffffe));
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return __return_storage_ptr__;
}

// RemoveFromEnd @ 144491810

void __thiscall FCachedPropertyPath::RemoveFromEnd(FCachedPropertyPath *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  iVar5 = (this->Segments).ArrayNum;
  if (param_1 <= iVar5) {
    uVar7 = iVar5 - 1;
    uVar4 = 0;
    if ((int)(uVar7 + param_1) <= iVar5) {
      uVar4 = ~(uVar7 | param_1) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1 != 0) {
      pFVar6 = (this->Segments).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      iVar5 = ((this->Segments).ArrayNum - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)param_1 * 0x20,(longlong)iVar5 << 5);
      }
      piVar1 = &(this->Segments).ArrayNum;
      *piVar1 = *piVar1 - param_1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(ForAnyElementType *)this,(this->Segments).ArrayNum,
                 &(this->Segments).ArrayMax);
    }
    iVar5 = (this->Segments).ArrayNum;
    pFVar6 = (this->Segments).AllocatorInstance.Data;
    pFVar8 = pFVar6 + (longlong)iVar5 * 0x20;
    while( true ) {
      if ((this->Segments).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FPropertyPathSegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar8) break;
      *(undefined8 *)(pFVar6 + 0x10) = 0;
      *(undefined8 *)(pFVar6 + 0x18) = 0;
      pFVar6 = pFVar6 + 0x20;
    }
    this->CachedAddress = (void *)0x0;
    (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
    this->CachedContainer = (void *)0x0;
    this->CachedLastContainerInPath = (void *)0x0;
    this->bCanSafelyUsedCachedAddress = false;
    this->CachedLastContainerInPathIndex = -1;
  }
  return;
}

// RemoveFromStart @ 144491950

void __thiscall FCachedPropertyPath::RemoveFromStart(FCachedPropertyPath *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if (param_1 <= (this->Segments).ArrayNum) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1 != 0) {
      pFVar5 = (this->Segments).AllocatorInstance.Data;
      iVar4 = (this->Segments).ArrayNum - param_1;
      if (iVar4 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)param_1 * 0x20,(longlong)iVar4 << 5);
      }
      piVar1 = &(this->Segments).ArrayNum;
      *piVar1 = *piVar1 - param_1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(ForAnyElementType *)this,(this->Segments).ArrayNum,
                 &(this->Segments).ArrayMax);
    }
    iVar4 = (this->Segments).ArrayNum;
    pFVar5 = (this->Segments).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar4 * 0x20;
    while( true ) {
      if ((this->Segments).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FPropertyPathSegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      *(undefined8 *)(pFVar5 + 0x10) = 0;
      *(undefined8 *)(pFVar5 + 0x18) = 0;
      pFVar5 = pFVar5 + 0x20;
    }
    this->CachedAddress = (void *)0x0;
    (this->CachedFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
    this->CachedContainer = (void *)0x0;
    this->CachedLastContainerInPath = (void *)0x0;
    this->bCanSafelyUsedCachedAddress = false;
    this->CachedLastContainerInPathIndex = -1;
  }
  return;
}

// Resolve @ 1444920f0

bool __thiscall FCachedPropertyPath::Resolve(FCachedPropertyPath *this,UObject *param_1)

{
  bool bVar1;
  FPropertyPathResolver local_res10 [3];
  
  local_res10[0] = (FPropertyPathResolver)&___7FInternalCacheResolver__6B_;
  if (param_1 != (UObject *)0x0) {
    bVar1 = PropertyPathHelpersInternal::IteratePropertyPathRecursive<UObject>
                      (*(UStruct **)&param_1->field_0x10,param_1,0,this,local_res10);
    return bVar1;
  }
  return false;
}

// ResolveLeaf @ 144492210

void __thiscall FCachedPropertyPath::ResolveLeaf(FCachedPropertyPath *this,UFunction *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CachedAddress != (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedAddress == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\PropertyPathHelpers.cpp"
                       ,0x390,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CachedFunction).field0_0x0.DebugPtr = param_1;
  return;
}

// ResolveLeaf @ 144492280

void __thiscall FCachedPropertyPath::ResolveLeaf(FCachedPropertyPath *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CachedFunction).field0_0x0.DebugPtr == (UFunction *)0x0) {
    this->CachedAddress = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CachedFunction == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\PropertyPathHelpers.cpp"
                     ,0x38a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CachedAddress = param_1;
  return;
}

// SetCachedContainer @ 1444924a0

void __thiscall FCachedPropertyPath::SetCachedContainer(FCachedPropertyPath *this,void *param_1)

{
  this->CachedContainer = param_1;
  return;
}

// SetCachedLastContainer @ 1444924b0

void __thiscall
FCachedPropertyPath::SetCachedLastContainer(FCachedPropertyPath *this,void *param_1,int param_2)

{
  this->bCanSafelyUsedCachedAddress = false;
  this->CachedLastContainerInPath = param_1;
  this->CachedLastContainerInPathIndex = param_2;
  return;
}

// SetCanSafelyUsedCachedAddress @ 1444924d0

void __thiscall
FCachedPropertyPath::SetCanSafelyUsedCachedAddress(FCachedPropertyPath *this,bool param_1)

{
  this->bCanSafelyUsedCachedAddress = param_1;
  return;
}

// ToEditPropertyChain @ 144495350

void __thiscall
FCachedPropertyPath::ToEditPropertyChain(FCachedPropertyPath *this,FEditPropertyChain *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong *puVar5;
  uint uVar6;
  FProperty *pFVar7;
  FProperty *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  if ((((this->CachedFunction).field0_0x0.DebugPtr == (UFunction *)0x0) &&
      (this->CachedAddress == (void *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\PropertyPathHelpers.cpp"
                         ,0x3d5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (this->Segments).ArrayNum;
  pFVar9 = (this->Segments).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x20;
  pFVar7 = (FProperty *)0x0;
  do {
    if ((this->Segments).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPropertyPathSegment_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      iVar1 = (this->Segments).ArrayNum;
      uVar6 = iVar1 - 1;
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
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
      pFVar8 = *(FProperty **)
                ((this->Segments).AllocatorInstance.Data +
                (longlong)(this->Segments).ArrayNum * 0x20 + -8);
      if (((ulonglong)pFVar8 & 1) == 0) {
        if ((pFVar8 == (FProperty *)0x0) || ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xf & 1) == 0))
        goto LAB_14449550e;
      }
      else {
        if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
        }
LAB_14449550e:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        pFVar8 = pFVar7;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FEditPropertyChain::SetActivePropertyNode(param_1,pFVar8);
      if ((this->Segments).ArrayNum < 2) {
        return;
      }
      pFVar8 = *(FProperty **)((this->Segments).AllocatorInstance.Data + 0x18);
      if (((ulonglong)pFVar8 & 1) == 0) {
        if ((pFVar8 != (FProperty *)0x0) && ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xf & 1) != 0))
        goto LAB_1444955a3;
      }
      else if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
              (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      pFVar8 = pFVar7;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_1444955a3:
      FEditPropertyChain::SetActiveMemberPropertyNode(param_1,pFVar8);
      return;
    }
    pFVar8 = *(FProperty **)(pFVar9 + 0x18);
    if (((ulonglong)pFVar8 & 1) == 0) {
      if ((pFVar8 == (FProperty *)0x0) || ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xf & 1) == 0))
      goto LAB_1444953f4;
    }
    else {
      if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
      }
LAB_1444953f4:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      pFVar8 = pFVar7;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar5 = ::operator_new(0x18);
    if (puVar5 != (ulonglong *)0x0) {
      *puVar5 = (ulonglong)pFVar8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      if (param_1->_padding_ == 0) {
        param_1->_padding_ = (longlong)puVar5;
      }
      else {
        *(ulonglong **)(param_1->_padding_ + 8) = puVar5;
        puVar5[2] = param_1->_padding_;
      }
      param_1->_padding_ = (longlong)puVar5;
      (**(code **)(param_1->_padding_ + 8))(param_1,(int)param_1->_padding_ + 1);
    }
    pFVar9 = pFVar9 + 0x20;
  } while( true );
}

// ToPropertyChangedEvent @ 144495610

FPropertyChangedEvent * __thiscall
FCachedPropertyPath::ToPropertyChangedEvent
          (FCachedPropertyPath *this,FPropertyChangedEvent *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPropertyChangedEvent *pFVar5;
  FPropertyPathSegment *pFVar6;
  uint uVar7;
  FProperty *pFVar8;
  uint local_c;
  
  if ((((this->CachedFunction).field0_0x0.DebugPtr == (UFunction *)0x0) &&
      (this->CachedAddress == (void *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\PropertyPathHelpers.cpp"
                         ,0x3c4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPropertyChangedEvent *)(*pcVar2)();
    return pFVar5;
  }
  pFVar6 = GetLastSegment(this);
  pFVar8 = (FProperty *)(pFVar6->Field).Container.Field;
  if (((ulonglong)pFVar8 & 1) == 0) {
    if ((pFVar8 == (FProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)pFVar8->_padding_)->CastFlags >> 0xf & 1) == 0))
    goto LAB_1444956a9;
  }
  else {
    if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
    }
LAB_1444956a9:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar8 = (FProperty *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyChangedEvent *)(*pcVar2)();
      return pFVar5;
    }
  }
  __return_storage_ptr__->MemberProperty = pFVar8;
  (__return_storage_ptr__->ArrayIndicesPerObject).DataPtr =
       (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)0x0;
  (__return_storage_ptr__->ArrayIndicesPerObject).ArrayNum = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstancesChanged).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstancesChanged).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstancesChanged).Elements.field_0x20 = 0;
  __return_storage_ptr__->Property = pFVar8;
  __return_storage_ptr__->ChangeType = param_1;
  __return_storage_ptr__->ObjectIteratorIndex = -1;
  *(undefined4 *)&(__return_storage_ptr__->InstancesChanged).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstancesChanged).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InstancesChanged).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InstancesChanged).Elements.field_0x34 = 0;
  (__return_storage_ptr__->InstancesChanged).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (__return_storage_ptr__->InstancesChanged).HashSize = 0;
  __return_storage_ptr__->bFilterChangedInstances = false;
  (__return_storage_ptr__->TopLevelObjects).DataPtr = (UObject **)0x0;
  *(ulonglong *)&(__return_storage_ptr__->TopLevelObjects).ArrayNum = (ulonglong)local_c << 0x20;
  iVar1 = (this->Segments).ArrayNum;
  if (iVar1 < 2) {
    return __return_storage_ptr__;
  }
  uVar7 = iVar1 - 2;
  uVar4 = 0;
  if ((int)uVar7 < iVar1) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPropertyChangedEvent *)(*pcVar2)();
    return pFVar5;
  }
  pFVar8 = *(FProperty **)
            ((this->Segments).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x18);
  if (((ulonglong)pFVar8 & 1) == 0) {
    if ((pFVar8 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar8->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_1444957d9;
  }
  else if (((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar8 & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar8 = (FProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPropertyChangedEvent *)(*pcVar2)();
    return pFVar5;
  }
LAB_1444957d9:
  __return_storage_ptr__->MemberProperty = pFVar8;
  return __return_storage_ptr__;
}

// ToString @ 144495840

FString * __thiscall
FCachedPropertyPath::ToString(FCachedPropertyPath *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar8 = (this->Segments).ArrayNum;
  uVar9 = uVar7;
  if (0 < iVar8) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < iVar8) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      pFVar1 = (this->Segments).AllocatorInstance.Data;
      local_res8 = *(FName *)(pFVar1 + uVar9);
      pFVar5 = ::FName::ToString(&local_res8,&local_28);
      iVar8 = (pFVar5->Data).ArrayNum;
      uVar4 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar4 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,uVar4);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar1 + uVar9 + 8) != -1) {
        ::FString::PrintfImpl(&local_38,L"[%d]");
        iVar8 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar8);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if ((int)uVar6 < (this->Segments).ArrayNum + -1) {
        ::FString::AppendChars(__return_storage_ptr__,L".",1);
      }
      iVar8 = (this->Segments).ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 0x20;
    } while ((int)(uVar6 + 1) < iVar8);
  }
  return __return_storage_ptr__;
}

