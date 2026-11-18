// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// StaticStruct @ 14df93590

UScriptStruct * __cdecl FHairGroupCardsTextures::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupCardsTextures.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupCardsTextures.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupCardsTextures,(UObject *)pUVar1,
                         L"HairGroupCardsTextures");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupCardsTextures.OuterSingleton;
}

// FHairGroupCardsTextures @ 14dfac1b0

FHairGroupCardsTextures * __thiscall
FHairGroupCardsTextures::FHairGroupCardsTextures
          (FHairGroupCardsTextures *this,FHairGroupCardsTextures *param_1)

{
  TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UTexture2D *pUVar5;
  
  pTVar1 = &this->Textures;
  this->Layout = param_1->Layout;
  piVar2 = &(this->Textures).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Textures).ArrayNum;
  pFVar4 = (param_1->Textures).AllocatorInstance.Data;
  (this->Textures).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UTexture2D> *)pFVar4,iVar3);
  }
  pUVar5 = (param_1->DepthTexture_DEPRECATED).field0_0x0.DebugPtr;
  (this->DepthTexture_DEPRECATED).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->CoverageTexture_DEPRECATED).field0_0x0.DebugPtr;
  (this->CoverageTexture_DEPRECATED).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->TangentTexture_DEPRECATED).field0_0x0.DebugPtr;
  (this->TangentTexture_DEPRECATED).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->AttributeTexture_DEPRECATED).field0_0x0.DebugPtr;
  (this->AttributeTexture_DEPRECATED).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->AuxilaryDataTexture_DEPRECATED).field0_0x0.DebugPtr;
  (this->AuxilaryDataTexture_DEPRECATED).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->MaterialTexture_DEPRECATED).field0_0x0.DebugPtr;
  (this->MaterialTexture_DEPRECATED).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->bNeedToBeSaved = param_1->bNeedToBeSaved;
  return this;
}

// operator= @ 14dfb1650

FHairGroupCardsTextures * __thiscall
FHairGroupCardsTextures::operator=(FHairGroupCardsTextures *this,FHairGroupCardsTextures *param_1)

{
  TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UTexture2D *pUVar6;
  
  this->Layout = param_1->Layout;
  pTVar1 = &this->Textures;
  if (pTVar1 != &param_1->Textures) {
    iVar3 = (this->Textures).ArrayMax;
    piVar2 = &(this->Textures).ArrayMax;
    iVar4 = (param_1->Textures).ArrayNum;
    pFVar5 = (param_1->Textures).AllocatorInstance.Data;
    (this->Textures).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UTexture2D> *)pFVar5,iVar4);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->DepthTexture_DEPRECATED).field0_0x0.DebugPtr, pUVar6 != (UTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->DepthTexture_DEPRECATED).field0_0x0 = (param_1->DepthTexture_DEPRECATED).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->CoverageTexture_DEPRECATED).field0_0x0.DebugPtr,
     pUVar6 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->CoverageTexture_DEPRECATED).field0_0x0 = (param_1->CoverageTexture_DEPRECATED).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->TangentTexture_DEPRECATED).field0_0x0.DebugPtr, pUVar6 != (UTexture2D *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->TangentTexture_DEPRECATED).field0_0x0 = (param_1->TangentTexture_DEPRECATED).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->AttributeTexture_DEPRECATED).field0_0x0.DebugPtr,
     pUVar6 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->AttributeTexture_DEPRECATED).field0_0x0 = (param_1->AttributeTexture_DEPRECATED).field0_0x0
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->AuxilaryDataTexture_DEPRECATED).field0_0x0.DebugPtr,
     pUVar6 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->AuxilaryDataTexture_DEPRECATED).field0_0x0 =
       (param_1->AuxilaryDataTexture_DEPRECATED).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->MaterialTexture_DEPRECATED).field0_0x0.DebugPtr,
     pUVar6 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MaterialTexture_DEPRECATED).field0_0x0 = (param_1->MaterialTexture_DEPRECATED).field0_0x0;
  this->bNeedToBeSaved = param_1->bNeedToBeSaved;
  return this;
}

// SetLayout @ 14dfd6ef0

void __thiscall
FHairGroupCardsTextures::SetLayout(FHairGroupCardsTextures *this,EHairTextureLayout param_1)

{
  TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  this->Layout = param_1;
  if ((param_1 == Layout0) || (param_1 == Layout1)) {
    uVar6 = 6;
  }
  else if ((param_1 == Layout2) || (param_1 == Layout3)) {
    uVar6 = 3;
  }
  pTVar1 = &this->Textures;
  iVar7 = (this->Textures).ArrayNum;
  piVar2 = &(this->Textures).ArrayNum;
  if ((int)uVar6 <= iVar7) {
    if ((int)uVar6 < iVar7) {
      iVar7 = iVar7 - uVar6;
      if (iVar7 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (iVar7 == 0) {
        return;
      }
      _Dst = (pTVar1->AllocatorInstance).Data + (ulonglong)uVar6 * 8;
      iVar5 = (*piVar2 - iVar7) - uVar6;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)iVar7 * 8,(longlong)iVar5 << 3);
      }
      *piVar2 = *piVar2 - iVar7;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar1->AllocatorInstance,*piVar2,&(this->Textures).ArrayMax);
    }
    return;
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar6 - iVar7,&pTVar1->AllocatorInstance,piVar2,&(this->Textures).ArrayMax)
  ;
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
         (longlong)(int)(uVar6 - iVar7) << 3);
  return;
}

// SetTexture @ 14dfd85a0

void __thiscall
FHairGroupCardsTextures::SetTexture(FHairGroupCardsTextures *this,int param_1,UTexture2D *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->Textures).ArrayNum <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotIdx < Textures.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAssetCards.cpp"
                       ,0x1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Textures).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UTexture2D **)(pFVar1 + (longlong)param_1 * 8) = param_2;
  return;
}

