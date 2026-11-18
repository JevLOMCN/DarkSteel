// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 12

// Add @ 146bdb180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FActiveMovieSceneCaptures::Add(FActiveMovieSceneCaptures *this,UMovieSceneCapture *param_1)

{
  TObjectPtr<UMovieSceneCapture>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneCapture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UMovieSceneCapture>_>
            (&this->ActiveCaptures,(TObjectPtr<UMovieSceneCapture> *)&local_res8[0].ObjectPtr);
  return;
}

// AddReferencedObjects @ 146bdb7e0

void __thiscall
FActiveMovieSceneCaptures::AddReferencedObjects
          (FActiveMovieSceneCaptures *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ActiveCaptures).AllocatorInstance.Data,(this->ActiveCaptures).ArrayNum,0
             ,0);
  return;
}

// Get @ 146bdfbd0

FActiveMovieSceneCaptures * __cdecl FActiveMovieSceneCaptures::Get(void)

{
  TUniquePtr<FActiveMovieSceneCaptures,TDefaultDelete<FActiveMovieSceneCaptures>_> TVar1;
  FActiveMovieSceneCaptures *this;
  
  if (Singleton.Ptr == (FActiveMovieSceneCaptures *)0x0) {
    this = ::operator_new(0x28);
    if (this != (FActiveMovieSceneCaptures *)0x0) {
      this->_padding_ = (longlong)&___7FGCObject__6B_;
      *(undefined2 *)&this->_padding_ = 0;
      FGCObject::RegisterGCObject((FGCObject *)this);
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
      this->_padding_ = (longlong)&_vftable__for__FGCObject__;
      this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
      (this->ActiveCaptures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ActiveCaptures).ArrayNum = 0;
      (this->ActiveCaptures).ArrayMax = 0;
    }
    TVar1.Ptr = Singleton.Ptr;
    if (Singleton.Ptr != this) {
      Singleton.Ptr = this;
      if (TVar1.Ptr == (FActiveMovieSceneCaptures *)0x0) {
        return this;
      }
      (**(code **)(TVar1.Ptr)->_padding_)(TVar1.Ptr,1);
      return Singleton.Ptr;
    }
  }
  return Singleton.Ptr;
}

// GetReferencerName @ 146be1230

FString * __thiscall
FActiveMovieSceneCaptures::GetReferencerName
          (FActiveMovieSceneCaptures *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FActiveMovieSceneCaptures");
  return __return_storage_ptr__;
}

// GetStatId @ 146be1280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FActiveMovieSceneCaptures::GetStatId(FActiveMovieSceneCaptures *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_struct_TStatId___cdecl_FActiveMovieSceneCaptures::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_struct_TStatId___cdecl_FActiveMovieSceneCaptures::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_struct_TStatId___cdecl_FActiveMovieSceneCaptures::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FActiveMovieSceneCaptures = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FActiveMovieSceneCaptures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_struct_TStatId___cdecl_FActiveMovieSceneCaptures::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FActiveMovieSceneCaptures,*pFVar1,L"FActiveMovieSceneCaptures",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_struct_TStatId___cdecl_FActiveMovieSceneCaptures::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FActiveMovieSceneCaptures;
  if (_StatPtr_FActiveMovieSceneCaptures == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FActiveMovieSceneCaptures");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`private:_virtual_struct_TStatId___cdecl_FActiveMovieSceneCaptures::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FActiveMovieSceneCaptures,*pFVar1,
                       L"FActiveMovieSceneCaptures","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 146be13f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
FActiveMovieSceneCaptures::GetTickableGameObjectWorld(FActiveMovieSceneCaptures *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if ((int)this->_padding_ == 0) {
    return (UWorld *)0x0;
  }
  if ((int)this->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146be144a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UWorld *)(**(code **)(**(longlong **)this->_padding_ + 0x180))();
  return pUVar3;
}

// IsTickable @ 146be30b0

bool __thiscall FActiveMovieSceneCaptures::IsTickable(FActiveMovieSceneCaptures *this)

{
  return (int)this->_padding_ != 0;
}

// IsTickableInEditor @ 146be30c0

bool __thiscall FActiveMovieSceneCaptures::IsTickableInEditor(FActiveMovieSceneCaptures *this)

{
  return false;
}

// IsTickableWhenPaused @ 146be30d0

bool __thiscall FActiveMovieSceneCaptures::IsTickableWhenPaused(FActiveMovieSceneCaptures *this)

{
  return false;
}

// Remove @ 146be5680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FActiveMovieSceneCaptures::Remove(FActiveMovieSceneCaptures *this,UMovieSceneCapture *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMovieSceneCapture *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMovieSceneCapture *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneCapture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ActiveCaptures).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->ActiveCaptures).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ActiveCaptures).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ActiveCaptures).AllocatorInstance.Data;
    bVar4 = *(UMovieSceneCapture **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UMovieSceneCapture **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->ActiveCaptures).ArrayNum = iVar9;
  }
  return;
}

// Shutdown @ 146be8670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FActiveMovieSceneCaptures::Shutdown(FActiveMovieSceneCaptures *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  TUniquePtr<FActiveMovieSceneCaptures,TDefaultDelete<FActiveMovieSceneCaptures>_> TVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = (this->ActiveCaptures).AllocatorInstance.Data;
  uVar2 = (this->ActiveCaptures).ArrayNum;
  (this->ActiveCaptures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveCaptures).ArrayNum = 0;
  (this->ActiveCaptures).ArrayMax = 0;
  for (pFVar4 = pFVar1; TVar3.Ptr = Singleton.Ptr, pFVar4 != pFVar1 + (longlong)(int)uVar2 * 8;
      pFVar4 = pFVar4 + 8) {
    UMovieSceneCapture::Finalize(*(UMovieSceneCapture **)pFVar4);
  }
  if (Singleton.Ptr != (FActiveMovieSceneCaptures *)0x0) {
    Singleton.Ptr = (FActiveMovieSceneCaptures *)0x0;
    (**(code **)(TVar3.Ptr)->_padding_)(TVar3.Ptr,1);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Tick @ 146be8f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FActiveMovieSceneCaptures::Tick(FActiveMovieSceneCaptures *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TObjectPtr<UMovieSceneCapture> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c [5];
  
  iVar2 = (int)this->_padding_;
  pTVar3 = (TObjectPtr<UMovieSceneCapture> *)this->_padding_;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar2;
  if (iVar2 == 0) {
    local_1c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&local_28,iVar2,local_1c);
    ConstructItems<TObjectPtr<UMovieSceneCapture>,TObjectPtr<UMovieSceneCapture>,int>
              (local_28.Data,pTVar3,iVar2);
  }
  iVar2 = local_20;
  pFVar1 = local_28.Data + (longlong)local_20 * 8;
  FVar8.Data = local_28.Data;
  while( true ) {
    if (local_20 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneCapture>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    lVar4 = *(longlong *)FVar8.Data;
    if ((((*(char *)(lVar4 + 0x150) == '\0') ||
         (*(char *)((ulonglong)((uint)GFrameCounter & 1) + 0x51 +
                   (longlong)*(longlong **)(lVar4 + 0x78)) != '\0')) ||
        (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x2f0))(), cVar7 == '\0')) ||
       ((*(char *)((ulonglong)((uint)GFrameCounter & 1) + 0x51 +
                  (longlong)*(longlong **)(lVar4 + 0x80)) != '\0' ||
        (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x2f0))(), cVar7 == '\0')))) {
      plVar5 = *(longlong **)FVar8.Data;
      plVar6 = (longlong *)plVar5[0xf];
      if (plVar6 != (longlong *)0x0) {
        *(undefined1 *)((ulonglong)((int)GFrameCounter - 1U & 1) + 0x51 + (longlong)plVar6) = 0;
        (**(code **)(*plVar6 + 0x2b8))();
      }
      plVar6 = (longlong *)plVar5[0x10];
      if (plVar6 != (longlong *)0x0) {
        *(undefined1 *)((ulonglong)((int)GFrameCounter - 1U & 1) + 0x51 + (longlong)plVar6) = 0;
        (**(code **)(*plVar6 + 0x2b8))();
      }
      (**(code **)(*plVar5 + 0x2e0))(plVar5,param_1);
      if ((longlong *)plVar5[0xf] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar5[0xf] + 0x2c0))();
      }
      if ((longlong *)plVar5[0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar5[0x10] + 0x2c0))();
      }
      FVar8.Data = FVar8.Data + 8;
    }
    else {
      UMovieSceneCapture::Finalize(*(UMovieSceneCapture **)FVar8.Data);
      FVar8.Data = FVar8.Data + 8;
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

