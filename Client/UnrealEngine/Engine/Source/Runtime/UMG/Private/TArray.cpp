// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 24

// operator= @ 146905300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UUserWidget>,TObjectPtr<UUserWidget>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UUserWidget> *)pFVar2,iVar1);
  }
  return this;
}

// InsertUninitializedImpl @ 14692c280

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14692c300

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// InsertUninitializedImpl @ 14692c380

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// AddUniqueImpl<FKey_const_&> @ 14696f670

int __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,FKey *param_1)

{
  FName *pFVar1;
  FKey *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FKey *pFVar7;
  
  pFVar2 = (FKey *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if (pFVar7->KeyName == param_1->KeyName) {
        iVar6 = (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x18);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  pFVar1 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
  *pFVar1 = param_1->KeyName;
  pFVar1[1] = (FName)(param_1->KeyDetails).Object;
  FVar3 = (FName)(param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar1[2] = FVar3;
  if (FVar3 != (FName)0x0) {
    LOCK();
    *(int *)((longlong)FVar3 + 8) = *(int *)((longlong)FVar3 + 8) + 1;
    UNLOCK();
  }
  return iVar6;
}

// AddUniqueImpl<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_> @ 14696f7c0

int __thiscall
TArray<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// CopyToEmpty<UObject_*,int> @ 146973c90

void __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::CopyToEmpty<UObject_*,int>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,UObject **param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TObjectPtr<UObject>,UObject_*,int>((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 146994b50

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 146994bf0

TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UUserWidget_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 146994c90

TArray<FKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FKey *pFVar3;
  
  if (this != param_1) {
    DestructItems<FKey,int>((FKey *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FKey *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FKey,FKey,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Find @ 1469c8550

int __thiscall
TArray<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals<UUserWidget,bool>
                      ((TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// RemoveAt @ 146a0bbf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// operator=<enum_ESlatePostRT,int> @ 146a4d6c0

TArray<ESlatePostRT,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>::operator=<enum_ESlatePostRT,int>
          (void *this,TArrayView<ESlatePostRT,int> *param_1)

{
  int *piVar1;
  int iVar2;
  ESlatePostRT *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = (int *)((longlong)this + 0xc);
  _Src = param_1->DataPtr;
  *(int *)((longlong)this + 8) = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,*piVar1,this,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy(*(void **)this,_Src,(longlong)iVar2);
  }
  return this;
}

// AddUniqueImpl<SRetainerWidget_*> @ 146a4e800

int __thiscall
TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<SRetainerWidget_*>
          (TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *this,
          SRetainerWidget **param_1)

{
  ForElementType<SRetainerWidget_*> FVar1;
  ForElementType<SRetainerWidget_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<SRetainerWidget_*> FVar6;
  ForElementType<SRetainerWidget_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<SRetainerWidget_*>)this;
  if (FVar2 != (ForElementType<SRetainerWidget_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<SRetainerWidget_*>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(SRetainerWidget **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<SRetainerWidget_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<SRetainerWidget_*>)this;
  if (FVar2 != (ForElementType<SRetainerWidget_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<SRetainerWidget_*>)this;
    if (FVar2 != (ForElementType<SRetainerWidget_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (SRetainerWidget **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SRetainerWidget_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<SRetainerWidget_*>)0x0) {
    this = (TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  *(SRetainerWidget **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<UMaterialInterface_*> @ 146a4e910

int __thiscall
TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *this,
          UMaterialInterface **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UMaterialInterface **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UMaterialInterface **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>_> @ 146a4ea10

int __thiscall
TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this
          ,TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// AddUniqueImpl<FName> @ 146a4ead0

int __thiscall
TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<FName>
          (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1)

{
  ForElementType<FName> FVar1;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  ForElementType<FName> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FName>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FName *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FName>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FName>)this;
    if (FVar2 != (ForElementType<FName>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FName *)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    this = (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FName *)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// CopyToEmpty<enum_ESlatePostRT,int> @ 146a4f350

void __thiscall
TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_ESlatePostRT,int>
          (void *this,ESlatePostRT *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2);
  }
  return;
}

// operator= @ 146a58e50

TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>
           *this,TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
              ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// Find @ 146a71a30

int __thiscall
TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this
          ,TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals<UWidgetComponent,bool>
                      ((TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// Remove @ 146a8ed40

int __thiscall
TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::Remove
          (TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *this,
          SRetainerWidget **param_1)

{
  ForElementType<SRetainerWidget_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<SRetainerWidget_*> FVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<SRetainerWidget_*>)this;
  if (FVar1 != (ForElementType<SRetainerWidget_*>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<SRetainerWidget_*>)this;
    if (FVar1 != (ForElementType<SRetainerWidget_*>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (SRetainerWidget **)((longlong)FVar5 + (longlong)this->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar6 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<SRetainerWidget_*>)this;
  if (FVar1 != (ForElementType<SRetainerWidget_*>)0x0) {
    FVar5 = FVar1;
  }
  iVar10 = 0;
  bVar3 = *(SRetainerWidget **)FVar5 != *param_1;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar3 != (*(SRetainerWidget **)((longlong)FVar5 + lVar7 * 8) != *param_1)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar3 != false) {
      if (iVar10 != iVar8) {
        memmove((longlong *)((longlong)FVar5 + (longlong)iVar10 * 8),
                (longlong *)((longlong)FVar5 + (longlong)iVar8 * 8),(longlong)(iVar9 - iVar8) << 3);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar4 - iVar10;
    }
  } while( true );
}

// RemoveAt @ 146a8f2e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNamedSlotBinding,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FNamedSlotBinding,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 146a8f3c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FUIComponentTarget,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FUIComponentTarget,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveSwap @ 146a90330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this
          ,TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar9 = 0;
  iVar10 = iVar5;
  if (0 < iVar5) {
    do {
      uVar7 = ~uVar9 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = uVar7;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      bVar4 = TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals<UWidgetComponent,bool>
                        ((TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)
                         ((this->AllocatorInstance).Data + (longlong)(int)uVar9 * 8),param_1);
      uVar8 = uVar9;
      if (bVar4) {
        bVar3 = true;
        uVar8 = uVar9 - 1;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = this->ArrayNum + ~uVar9;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

