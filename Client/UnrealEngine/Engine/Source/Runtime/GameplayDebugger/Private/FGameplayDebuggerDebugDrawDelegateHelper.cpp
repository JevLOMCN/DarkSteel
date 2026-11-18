// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 8

// FGameplayDebuggerDebugDrawDelegateHelper @ 146d3fa30

FGameplayDebuggerDebugDrawDelegateHelper * __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::FGameplayDebuggerDebugDrawDelegateHelper
          (FGameplayDebuggerDebugDrawDelegateHelper *this)

{
  this->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  ::FString::FString((FString *)&this->_padding_,L"Game");
  *(undefined4 *)&this->_padding_ = 0x44bb8000;
  this->_padding_ = (longlong)&___7FGameplayDebuggerDebugDrawDelegateHelper__6B_;
  this->_padding_ = 0;
  (this->DebugDrawDelegateHelpers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDrawDelegateHelpers).ArrayNum = 0;
  (this->DebugDrawDelegateHelpers).ArrayMax = 0;
  return this;
}

// ~FGameplayDebuggerDebugDrawDelegateHelper @ 146d413c0

void __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::~FGameplayDebuggerDebugDrawDelegateHelper
          (FGameplayDebuggerDebugDrawDelegateHelper *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FGameplayDebuggerDebugDrawDelegateHelper__6B_;
  Reset(this);
  pFVar1 = (this->DebugDrawDelegateHelpers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDebugDrawDelegateHelper::~FDebugDrawDelegateHelper((FDebugDrawDelegateHelper *)this);
  return;
}

// AddDelegateHelper @ 146d42d60

void __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::AddDelegateHelper
          (FGameplayDebuggerDebugDrawDelegateHelper *this,FDebugDrawDelegateHelper *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDebugDrawDelegateHelper *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (FDebugDrawDelegateHelper *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDebugDrawDelegateHelper",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerRenderingComponent.cpp"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->DebugDrawDelegateHelpers).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->DebugDrawDelegateHelpers).ArrayMax * 8)) {
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
  iVar5 = (this->DebugDrawDelegateHelpers).ArrayNum;
  piVar1 = &(this->DebugDrawDelegateHelpers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DebugDrawDelegateHelpers).AllocatorInstance,piVar1);
  }
  (this->DebugDrawDelegateHelpers).ArrayNum = iVar5 + 1;
  *(FDebugDrawDelegateHelper **)
   ((this->DebugDrawDelegateHelpers).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// RegisterDebugDrawDelegateInternal @ 146d59050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::RegisterDebugDrawDelegateInternal
          (FGameplayDebuggerDebugDrawDelegateHelper *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((int)this->_padding_ == 2) {
    local_res8[0] = 0;
    `FGameplayDebuggerDebugDrawDelegateHelper::RegisterDebugDrawDelegateInternal'::__l2::<lambda_1>
    ::operator()(local_res8);
  }
  if ((int)this->_padding_ == 1) {
    uVar4 = 0;
    if (0 < (this->DebugDrawDelegateHelpers).ArrayNum) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar4 < (this->DebugDrawDelegateHelpers).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FDebugDrawDelegateHelper::RequestRegisterDebugDrawDelegate
                  (*(FDebugDrawDelegateHelper **)
                    ((this->DebugDrawDelegateHelpers).AllocatorInstance.Data + lVar5),
                   (FRegisterComponentContext *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((int)uVar4 < (this->DebugDrawDelegateHelpers).ArrayNum);
    }
    *(undefined4 *)&this->_padding_ = 2;
  }
  return;
}

// Reset @ 146d5a890

void __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::Reset(FGameplayDebuggerDebugDrawDelegateHelper *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->DebugDrawDelegateHelpers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->DebugDrawDelegateHelpers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      puVar1 = *(undefined8 **)((this->DebugDrawDelegateHelpers).AllocatorInstance.Data + lVar6);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->DebugDrawDelegateHelpers).ArrayNum);
  }
  (this->DebugDrawDelegateHelpers).ArrayNum = 0;
  if ((this->DebugDrawDelegateHelpers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DebugDrawDelegateHelpers).AllocatorInstance,0,
               &(this->DebugDrawDelegateHelpers).ArrayMax);
  }
  return;
}

// UnregisterDebugDrawDelegate @ 146d5d5f0

void __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::UnregisterDebugDrawDelegate
          (FGameplayDebuggerDebugDrawDelegateHelper *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  FGameplayDebuggerDebugDrawDelegateHelper *local_res8;
  
  if ((int)this->_padding_ == 1) {
    local_res8 = this;
    `FGameplayDebuggerDebugDrawDelegateHelper::UnregisterDebugDrawDelegate'::__l2::<lambda_1>::
    operator()(&local_res8);
  }
  if ((int)this->_padding_ == 2) {
    uVar5 = 0;
    if (0 < (this->DebugDrawDelegateHelpers).ArrayNum) {
      lVar4 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->DebugDrawDelegateHelpers).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(**(longlong **)
                       ((this->DebugDrawDelegateHelpers).AllocatorInstance.Data + lVar4) + 8))();
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 8;
      } while ((int)uVar5 < (this->DebugDrawDelegateHelpers).ArrayNum);
    }
    *(undefined4 *)&this->_padding_ = 1;
  }
  return;
}

// operator() @ 1504fba20

bool __thiscall
`FGameplayDebuggerDebugDrawDelegateHelper::RegisterDebugDrawDelegateInternal'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8957110177903935403>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8957110177903935403>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fba60

bool __thiscall
`FGameplayDebuggerDebugDrawDelegateHelper::UnregisterDebugDrawDelegate'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8957110177903935390>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8957110177903935390>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

