// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 16

// Append<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 142c8acd0

void __thiscall
TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::
Append<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int iVar1;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      param_1 = (TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      this = (TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    memcpy((void *)((longlong)iVar5 * 0x10 + (longlong)this),param_1,(longlong)iVar1 << 4);
  }
  return;
}

// Append<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 142c8b5f0

void __thiscall
TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::
Append<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                      (2,2,iVar1,this,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x1c))
    ;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      param_1 = (TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
      this = *(void **)((longlong)this + 0x10);
    }
    memcpy((void *)((longlong)this + (longlong)iVar5 * 2),param_1,(longlong)iVar1 * 2);
  }
  return;
}

// Append<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 142c8b6a0

void __thiscall
TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::
Append<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                      (1,1,iVar1,this,(int *)((longlong)this + 0x10),(int *)((longlong)this + 0x14))
    ;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      param_1 = (TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      this = *(void **)((longlong)this + 8);
    }
    memcpy((void *)((longlong)iVar5 + (longlong)this),param_1,(longlong)iVar1);
  }
  return;
}

// operator= @ 142c9ab30

TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::operator=(TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *this,TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  *param_1)

{
  int iVar1;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar2;
  int *piVar3;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      param_1 = (TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 8;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
              (0x10,8,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)this;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 142c9ac00

TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<FName> FVar2;
  int *piVar3;
  ForElementType<FName> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<FName>)0x0) {
      param_1 = (TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 2;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<FName>)this;
    if (FVar2 != (ForElementType<FName>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 142c9acc0

TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::operator=(void *this,
           TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int iVar1;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar2;
  int *piVar3;
  void *_Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = (int *)((longlong)this + 0x1c);
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      param_1 = (TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    *(int *)((longlong)this + 0x18) = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 8;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,iVar1,*piVar3,this,iVar1,piVar3);
    _Dst = this;
    if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
      _Dst = *(void **)((longlong)this + 0x10);
    }
    if (iVar1 != 0) {
      memcpy(_Dst,param_1,(longlong)iVar1 * 2);
    }
  }
  return this;
}

// operator= @ 142c9ad70

TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::operator=(void *this,
           TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int iVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  int *piVar3;
  void *_Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = (int *)((longlong)this + 0x14);
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      param_1 = (TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    *(int *)((longlong)this + 0x10) = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 8;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,iVar1,*piVar3,this,iVar1,piVar3);
    _Dst = this;
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      _Dst = *(void **)((longlong)this + 8);
    }
    if (iVar1 != 0) {
      memcpy(_Dst,param_1,(longlong)iVar1);
    }
  }
  return this;
}

// Insert @ 142caf6b0

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Insert
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (param_1 == (ulong64 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x793,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_3 * 8;
  memmove(_Src + (longlong)param_2 * 8,_Src,(longlong)(iVar3 - param_3) << 3);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data + (longlong)param_3 * 8,param_1,(longlong)param_2 * 8);
  }
  return param_3;
}

// InsertUninitializedImpl @ 142caf790

void __thiscall
TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  memmove(_Src + (longlong)param_2 * 0xc,_Src,(longlong)(iVar1 - param_1) * 0xc);
  return;
}

// InsertUninitializedImpl @ 142caf810

void __thiscall
TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 142caf890

void __thiscall
TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// RemoveAt @ 142cb7310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar6;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
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
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)this;
  if (FVar1 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar6 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar6);
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar5 << 4);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
              (0x10,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 142cb7410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(void *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 0x18)) {
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
  pvVar4 = this;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    pvVar4 = *(void **)((longlong)this + 0x10);
  }
  pvVar4 = (void *)((longlong)pvVar4 + (longlong)param_1 * 2);
  iVar5 = *(int *)((longlong)this + 0x18) + ~param_1;
  if (iVar5 != 0) {
    memmove(pvVar4,(void *)((longlong)pvVar4 + 2),(longlong)iVar5 * 2);
  }
  iVar5 = *(int *)((longlong)this + 0x18) + -1;
  *(int *)((longlong)this + 0x18) = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,this,iVar5,(int *)((longlong)this + 0x1c));
  }
  return;
}

// RemoveAt @ 142cb74f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(void *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
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
  pvVar4 = this;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    pvVar4 = *(void **)((longlong)this + 8);
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (iVar5 != 0) {
    memmove((void *)((longlong)pvVar4 + (longlong)param_1),
            (void *)((longlong)pvVar4 + (longlong)param_1 + 1),(longlong)iVar5);
  }
  iVar5 = *(int *)((longlong)this + 0x10) + -1;
  *(int *)((longlong)this + 0x10) = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,this,iVar5,(int *)((longlong)this + 0x14));
  }
  return;
}

// RemoveAt @ 142cb75d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,int param_1,
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

// TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> @ 142cdee10

TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>::
TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
          (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Editor::DataStorage::Queries::FColumnBase> *param_1)

{
  FColumnBase *_Src;
  FColumnBase *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

