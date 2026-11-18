// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 5

// TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_><UE::NNE::FTensorShape_const_,int> @ 14eadb410

TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>::
TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_><UE::NNE::FTensorShape_const_,int>
          (TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  int iVar1;
  FTensorShape *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// AddUniqueImpl<TTuple<enum_EDenoiserRuntimeType,FString>_> @ 14eadf2e0

int __thiscall
TArray<TTuple<enum_EDenoiserRuntimeType,FString>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TTuple<enum_EDenoiserRuntimeType,FString>_>
          (void *this,TTuple<EDenoiserRuntimeType,FString> *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    if ((*(TTuple<EDenoiserRuntimeType,FString> **)this <= param_1) &&
       (param_1 < *(TTuple<EDenoiserRuntimeType,FString> **)this + *(int *)((longlong)this + 0xc)))
    {
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
    iVar4 = *(int *)((longlong)this + 8);
    if (iVar4 == *(int *)((longlong)this + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,this,(int *)((longlong)this + 0xc));
    }
    *(int *)((longlong)this + 8) = iVar4 + 1;
    puVar1 = (undefined1 *)(*(longlong *)this + (longlong)iVar4 * 0x18);
    *puVar1 = *(undefined1 *)param_1;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&param_1->field_0x8 = 0;
    *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)&param_1->field_0x14;
    *(undefined8 *)&param_1->field_0x10 = 0;
  }
  return iVar4;
}

// Find @ 14eaf7770

int __thiscall
TArray<TTuple<enum_EDenoiserRuntimeType,FString>,TSizedDefaultAllocator<32>_>::Find
          (void *this,TTuple<EDenoiserRuntimeType,FString> *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar2 = *(char **)this;
  iVar1 = *(int *)((longlong)this + 8);
  pcVar4 = pcVar2;
  do {
    if (pcVar4 == pcVar2 + (longlong)iVar1 * 0x18) {
      return -1;
    }
    if (*pcVar4 == *(char *)param_1) {
      iVar3 = *(int *)(pcVar4 + 0x10);
      if (iVar3 == *(int *)&param_1->field_0x10) {
        if (iVar3 < 2) goto LAB_14eaf77fb;
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pcVar4 + 8),*(wchar_t **)&param_1->field_0x8);
        bVar5 = iVar3 == 0;
      }
      else {
        bVar5 = iVar3 + *(int *)&param_1->field_0x10 == 1;
      }
      if (bVar5) {
LAB_14eaf77fb:
        return (int)(((longlong)pcVar4 - (longlong)pcVar2) / 0x18);
      }
    }
    pcVar4 = pcVar4 + 0x18;
  } while( true );
}

// SetNum @ 14eafe060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14eafe190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

