// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// Allocate<FRDGSentinelPass,FRDGEventName> @ 145d7bef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGSentinelPass * __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Allocate<FRDGSentinelPass,FRDGEventName>
          (TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *this,FRDGAllocator *param_1,
          FRDGEventName *param_2)

{
  int *piVar1;
  int iVar2;
  FRDGSentinelPass *this_00;
  FRDGPass *pFVar3;
  
  this_00 = FMemStackBase::Alloc(&param_1->MemStack,0x180,8);
  pFVar3 = (FRDGPass *)FRDGSentinelPass::FRDGSentinelPass(this_00,param_2,None);
  piVar1 = &(this->Array).ArrayMax;
  iVar2 = (this->Array).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)this,piVar1);
  }
  (this->Array).ArrayNum = iVar2 + 1;
  (this->Array).AllocatorInstance.Data[iVar2] = pFVar3;
  (pFVar3->Handle).Index = (this->Array).ArrayNum - 1;
  return (FRDGSentinelPass *)pFVar3;
}

// ~TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> @ 145d8f2e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::
~TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>
          (TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->Array).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Array).ArrayNum) {
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
      puVar1 = *(undefined8 **)(lVar6 + (longlong)(this->Array).AllocatorInstance.Data);
      (**(code **)*puVar1)(puVar1,0);
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  (this->Array).ArrayNum = 0;
  if ((this->Array).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
              (8,8,0,(ForElementType<FRDGPass_*> *)this,0,&(this->Array).ArrayMax);
  }
  return;
}

// ~TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0> @ 145d8f3c0

void __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0>::
~TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0>
          (TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0> *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->Array).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Array).ArrayNum) {
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
      puVar1 = *(undefined8 **)(lVar6 + (longlong)(this->Array).AllocatorInstance.Data);
      (**(code **)*puVar1)(puVar1,0);
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  (this->Array).ArrayNum = 0;
  if ((this->Array).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
              (8,8,0,(ForElementType<FRDGUniformBuffer_*> *)this,0,&(this->Array).ArrayMax);
  }
  return;
}

// operator[] @ 145d91a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::operator[]
          (TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *this,
          TRDGHandle<FRDGBuffer,unsigned_int> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGBuffer *pFVar4;
  
  if (param_1.Index == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1.Index < (this->Array).ArrayNum) {
    uVar3 = ~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (this->Array).AllocatorInstance.Data[(int)param_1.Index];
}

// operator[] @ 145d91aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGPass * __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::operator[]
          (TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *this,
          TRDGHandle<FRDGPass,unsigned_int> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGPass *pFVar4;
  
  if (param_1.Index == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1.Index < (this->Array).ArrayNum) {
    uVar3 = ~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (this->Array).AllocatorInstance.Data[(int)param_1.Index];
}

// operator[] @ 145d91b40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture * __thiscall
TRDGHandleRegistry<TRDGHandle<FRDGTexture,unsigned_int>,2>::operator[]
          (TRDGHandleRegistry<TRDGHandle<FRDGTexture,unsigned_int>,2> *this,
          TRDGHandle<FRDGTexture,unsigned_int> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGTexture *pFVar4;
  
  if (param_1.Index == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1.Index < (this->Array).ArrayNum) {
    uVar3 = ~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (this->Array).AllocatorInstance.Data[(int)param_1.Index];
}

