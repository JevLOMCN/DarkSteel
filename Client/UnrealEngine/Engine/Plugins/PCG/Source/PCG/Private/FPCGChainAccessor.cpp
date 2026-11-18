// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 54

// FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> @ 149e33c20

FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> * __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> param_1,
          TFunction<UE::Math::TVector4<double>___cdecl(UE::Math::TVector4<double>_const_&)> *param_2
          ,TFunction<void___cdecl(UE::Math::TVector4<double>_&,UE::Math::TVector4<double>_const_&)>
           *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> *pFVar5;
  undefined8 *puVar6;
  
  if (((param_1.Ptr)->_padding_ == 0) || (*(char *)((param_1.Ptr)->_padding_ + 8) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)&this->_padding_ = uVar3;
  this->_padding_ = (longlong)&___7__FPCGChainAccessor_U__TVector4_N_Math_UE__U123___6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  (this->Accessor).Ptr = (IPCGAttributeAccessor *)(param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->Getter = lVar1;
  *(undefined8 *)&(this->Getter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->Setter = lVar1;
  *(undefined8 *)&(this->Setter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  if ((this->Accessor).Ptr == (IPCGAttributeAccessor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Accessor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGCustomAccessor.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> *)
               (*pcVar2)();
      return pFVar5;
    }
  }
  puVar6 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  return this;
}

// FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> @ 149e33d20

FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> * __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_>::
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_>
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> param_1,
          TFunction<UE::Math::TVector4<double>___cdecl(UE::Math::TQuat<double>_const_&)> *param_2,
          TFunction<void___cdecl(UE::Math::TQuat<double>_&,UE::Math::TVector4<double>_const_&)>
          *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> *pFVar5;
  undefined8 *puVar6;
  
  if (((param_1.Ptr)->_padding_ == 0) || (*(char *)((param_1.Ptr)->_padding_ + 8) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)&this->_padding_ = uVar3;
  this->_padding_ = (longlong)&___7__FPCGChainAccessor_U__TVector4_N_Math_UE__U__TQuat_N_23___6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  (this->Accessor).Ptr = (IPCGAttributeAccessor *)(param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->Getter = lVar1;
  *(undefined8 *)&(this->Getter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->Setter = lVar1;
  *(undefined8 *)&(this->Setter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  if ((this->Accessor).Ptr == (IPCGAttributeAccessor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Accessor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGCustomAccessor.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> *)(*pcVar2)()
      ;
      return pFVar5;
    }
  }
  puVar6 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  return this;
}

// FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> @ 149e33e20

FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> * __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_>::
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_>
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> param_1,
          TFunction<UE::Math::TVector4<double>___cdecl(UE::Math::TVector2<double>_const_&)> *param_2
          ,TFunction<void___cdecl(UE::Math::TVector2<double>_&,UE::Math::TVector4<double>_const_&)>
           *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> *pFVar5;
  undefined8 *puVar6;
  
  if (((param_1.Ptr)->_padding_ == 0) || (*(char *)((param_1.Ptr)->_padding_ + 8) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)&this->_padding_ = uVar3;
  this->_padding_ = (longlong)&___7__FPCGChainAccessor_U__TVector4_N_Math_UE__U__TVector2_N_23___6B_
  ;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  (this->Accessor).Ptr = (IPCGAttributeAccessor *)(param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->Getter = lVar1;
  *(undefined8 *)&(this->Getter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->Setter = lVar1;
  *(undefined8 *)&(this->Setter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  if ((this->Accessor).Ptr == (IPCGAttributeAccessor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Accessor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGCustomAccessor.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> *)
               (*pcVar2)();
      return pFVar5;
    }
  }
  puVar6 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  return this;
}

// FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> @ 149e33f20

FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> * __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_>::
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_>
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> param_1,
          TFunction<UE::Math::TVector4<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          TFunction<void___cdecl(UE::Math::TVector<double>_&,UE::Math::TVector4<double>_const_&)>
          *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> *pFVar5;
  undefined8 *puVar6;
  
  if (((param_1.Ptr)->_padding_ == 0) || (*(char *)((param_1.Ptr)->_padding_ + 8) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)&this->_padding_ = uVar3;
  this->_padding_ = (longlong)&___7__FPCGChainAccessor_U__TVector4_N_Math_UE__U__TVector_N_23___6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  (this->Accessor).Ptr = (IPCGAttributeAccessor *)(param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->Getter = lVar1;
  *(undefined8 *)&(this->Getter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->Setter = lVar1;
  *(undefined8 *)&(this->Setter).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  if ((this->Accessor).Ptr == (IPCGAttributeAccessor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Accessor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGCustomAccessor.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> *)
               (*pcVar2)();
      return pFVar5;
    }
  }
  puVar6 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  return this;
}

// GetRangeImpl @ 149e640a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FSoftClassPath>::GetRangeImpl
          (FPCGChainAccessor<int,FSoftClassPath> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  IPCGAttributeAccessor *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined8 in_stack_ffffffffffffff88;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::SetNum(&local_68,param_1->ArrayNum,Default);
  iStack_50 = local_68.ArrayNum;
  pIVar1 = (this->Accessor).Ptr;
  local_58 = (FSoftClassPath *)local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  iStack_40 = iStack_50;
  uStack_3c = uStack_4c;
  cVar6 = (**(code **)(pIVar1->_padding_ + 0xf8))
                    (pIVar1,&local_48,param_2,param_3,CONCAT44(uVar8,1));
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < local_68.ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar13 = local_68.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar3 = *(code **)&this->Getter;
        plVar2 = *(longlong **)&(this->Getter).field_0x28;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        uVar8 = (*pcVar3)(uVar9,pFVar13);
        uVar7 = 0;
        if ((int)uVar12 < iVar11) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar12 = uVar12 + 1;
        iVar11 = param_1->ArrayNum;
        *(undefined4 *)(lVar14 + (longlong)param_1->DataPtr) = uVar8;
        lVar14 = lVar14 + 4;
      } while ((int)uVar12 < iVar11);
    }
    bVar4 = true;
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FSoftClassPath *)local_68.AllocatorInstance.Data != (FSoftClassPath *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetRangeImpl @ 149e642f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FSoftObjectPath>::GetRangeImpl
          (FPCGChainAccessor<int,FSoftObjectPath> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  IPCGAttributeAccessor *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined8 in_stack_ffffffffffffff88;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum(&local_68,param_1->ArrayNum,Default);
  iStack_50 = local_68.ArrayNum;
  pIVar1 = (this->Accessor).Ptr;
  local_58 = (FSoftObjectPath *)local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  iStack_40 = iStack_50;
  uStack_3c = uStack_4c;
  cVar6 = (**(code **)(pIVar1->_padding_ + 0xe8))
                    (pIVar1,&local_48,param_2,param_3,CONCAT44(uVar8,1));
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < local_68.ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar13 = local_68.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar3 = *(code **)&this->Getter;
        plVar2 = *(longlong **)&(this->Getter).field_0x28;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        uVar8 = (*pcVar3)(uVar9,pFVar13);
        uVar7 = 0;
        if ((int)uVar12 < iVar11) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar12 = uVar12 + 1;
        iVar11 = param_1->ArrayNum;
        *(undefined4 *)(lVar14 + (longlong)param_1->DataPtr) = uVar8;
        lVar14 = lVar14 + 4;
      } while ((int)uVar12 < iVar11);
    }
    bVar4 = true;
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FSoftObjectPath *)local_68.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetRangeImpl @ 149e64540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FName>::GetRangeImpl
          (FPCGChainAccessor<int,FName> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 in_stack_ffffffffffffff88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<FName,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_68,param_1->ArrayNum,Default);
  iStack_50 = local_68.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_58 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  iStack_40 = iStack_50;
  uStack_3c = uStack_4c;
  cVar7 = (**(code **)(pIVar2->_padding_ + 0xd8))
                    (pIVar2,&local_48,param_2,param_3,CONCAT44(uVar9,1));
  if (cVar7 == '\0') {
    bVar5 = false;
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar12) {
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar13 < local_68.ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar1 = local_68.AllocatorInstance.Data + (longlong)(int)uVar13 * 8;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar4 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar11 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        uVar9 = (*pcVar4)(uVar10,pFVar1);
        uVar8 = 0;
        if ((int)uVar13 < iVar12) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar13 = uVar13 + 1;
        iVar12 = param_1->ArrayNum;
        *(undefined4 *)(lVar14 + (longlong)param_1->DataPtr) = uVar9;
        lVar14 = lVar14 + 4;
      } while ((int)uVar13 < iVar12);
    }
    bVar5 = true;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetRangeImpl @ 149e64780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FString>::GetRangeImpl
          (FPCGChainAccessor<int,FString> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  IPCGAttributeAccessor *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined8 in_stack_ffffffffffffff88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_68,param_1->ArrayNum,Default);
  iStack_50 = local_68.ArrayNum;
  pIVar1 = (this->Accessor).Ptr;
  local_58 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  iStack_40 = iStack_50;
  uStack_3c = uStack_4c;
  cVar6 = (**(code **)(pIVar1->_padding_ + 0xa8))
                    (pIVar1,&local_48,param_2,param_3,CONCAT44(uVar8,1));
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < local_68.ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar13 = local_68.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar3 = *(code **)&this->Getter;
        plVar2 = *(longlong **)&(this->Getter).field_0x28;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        uVar8 = (*pcVar3)(uVar9,pFVar13);
        uVar7 = 0;
        if ((int)uVar12 < iVar11) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar12 = uVar12 + 1;
        iVar11 = param_1->ArrayNum;
        *(undefined4 *)(lVar14 + (longlong)param_1->DataPtr) = uVar8;
        lVar14 = lVar14 + 4;
      } while ((int)uVar12 < iVar11);
    }
    bVar4 = true;
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetRangeImpl @ 149e649d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TQuat<double>_> *this,TArrayView<double,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3)

{
  IPCGAttributeAccessor *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_78,param_1->ArrayNum,Default);
  iStack_60 = local_78.ArrayNum;
  pIVar1 = (this->Accessor).Ptr;
  local_68 = local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  iStack_50 = iStack_60;
  uStack_4c = uStack_5c;
  cVar6 = (**(code **)(pIVar1->_padding_ + 0x88))
                    (pIVar1,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar10 = 0;
    if (0 < iVar11) {
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_78.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = local_78.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar3 = *(code **)&this->Getter;
        plVar2 = *(longlong **)&(this->Getter).field_0x28;
        plVar9 = (longlong *)&(this->Getter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        uVar8 = (*pcVar3)(uVar8,pFVar12);
        uVar7 = 0;
        if ((int)uVar10 < iVar11) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar10 = uVar10 + 1;
        iVar11 = param_1->ArrayNum;
        *(undefined8 *)(lVar13 + (longlong)param_1->DataPtr) = uVar8;
        lVar13 = lVar13 + 8;
      } while ((int)uVar10 < iVar11);
    }
    bVar4 = true;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetRangeImpl @ 149e64c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TRotator<double>_>::GetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TRotator<double>_> *this,
          TArrayView<double,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_78,param_1->ArrayNum,Default);
  iStack_60 = local_78.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_68 = local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  iStack_50 = iStack_60;
  uStack_4c = uStack_5c;
  cVar7 = (**(code **)(pIVar2->_padding_ + 200))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar7 == '\0') {
    bVar5 = false;
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < local_78.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar1 = local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar4 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar10 = plVar3;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        uVar9 = (*pcVar4)(uVar9,pFVar1);
        uVar8 = 0;
        if ((int)uVar11 < iVar12) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar11 = uVar11 + 1;
        iVar12 = param_1->ArrayNum;
        *(undefined8 *)(lVar13 + (longlong)param_1->DataPtr) = uVar9;
        lVar13 = lVar13 + 8;
      } while ((int)uVar11 < iVar12);
    }
    bVar5 = true;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetRangeImpl @ 149e64ea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TVector2<double>_> *this,
          TArrayView<double,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3)

{
  IPCGAttributeAccessor *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_78,param_1->ArrayNum,Default);
  iStack_60 = local_78.ArrayNum;
  pIVar1 = (this->Accessor).Ptr;
  local_68 = local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  iStack_50 = iStack_60;
  uStack_4c = uStack_5c;
  cVar6 = (**(code **)(pIVar1->_padding_ + 0x58))
                    (pIVar1,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar10 = 0;
    if (0 < iVar11) {
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_78.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = local_78.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar3 = *(code **)&this->Getter;
        plVar2 = *(longlong **)&(this->Getter).field_0x28;
        plVar9 = (longlong *)&(this->Getter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        uVar8 = (*pcVar3)(uVar8,pFVar12);
        uVar7 = 0;
        if ((int)uVar10 < iVar11) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar10 = uVar10 + 1;
        iVar11 = param_1->ArrayNum;
        *(undefined8 *)(lVar13 + (longlong)param_1->DataPtr) = uVar8;
        lVar13 = lVar13 + 8;
      } while ((int)uVar10 < iVar11);
    }
    bVar4 = true;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetRangeImpl @ 149e65100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TVector4<double>_> *this,
          TArrayView<double,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3)

{
  IPCGAttributeAccessor *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_78,param_1->ArrayNum,Default);
  iStack_60 = local_78.ArrayNum;
  pIVar1 = (this->Accessor).Ptr;
  local_68 = local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  iStack_50 = iStack_60;
  uStack_4c = uStack_5c;
  cVar6 = (**(code **)(pIVar1->_padding_ + 0x78))
                    (pIVar1,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar10 = 0;
    if (0 < iVar11) {
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_78.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = local_78.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar3 = *(code **)&this->Getter;
        plVar2 = *(longlong **)&(this->Getter).field_0x28;
        plVar9 = (longlong *)&(this->Getter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        uVar8 = (*pcVar3)(uVar8,pFVar12);
        uVar7 = 0;
        if ((int)uVar10 < iVar11) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar10 = uVar10 + 1;
        iVar11 = param_1->ArrayNum;
        *(undefined8 *)(lVar13 + (longlong)param_1->DataPtr) = uVar8;
        lVar13 = lVar13 + 8;
      } while ((int)uVar10 < iVar11);
    }
    bVar4 = true;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetRangeImpl @ 149e65360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TVector<double>_> *this,
          TArrayView<double,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_78,param_1->ArrayNum,Default);
  iStack_60 = local_78.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_68 = local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  iStack_50 = iStack_60;
  uStack_4c = uStack_5c;
  cVar7 = (**(code **)(pIVar2->_padding_ + 0x68))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar7 == '\0') {
    bVar5 = false;
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar11 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < local_78.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar1 = local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar4 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar10 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar10 = plVar3;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        uVar9 = (*pcVar4)(uVar9,pFVar1);
        uVar8 = 0;
        if ((int)uVar11 < iVar12) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar11 = uVar11 + 1;
        iVar12 = param_1->ArrayNum;
        *(undefined8 *)(lVar13 + (longlong)param_1->DataPtr) = uVar9;
        lVar13 = lVar13 + 8;
      } while ((int)uVar11 < iVar12);
    }
    bVar5 = true;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetRangeImpl @ 149e655d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TQuat<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar2->_padding_ + 0x88))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar19,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar18 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar17 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar5)(&local_78,uVar13,pFVar17);
        uVar8 = uStack_60;
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pTVar4 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->X + lVar18);
        *puVar1 = uVar13;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((longlong)&pTVar4->Z + lVar18);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e65850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TTransform<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TQuat<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar2->_padding_ + 0x98))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar19,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar18 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar17 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x60;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar5)(&local_78,uVar13,pFVar17);
        uVar8 = uStack_60;
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pTVar4 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->X + lVar18);
        *puVar1 = uVar13;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((longlong)&pTVar4->Z + lVar18);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e65ae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  iStack_60 = iStack_70;
  uStack_5c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x58))
                    (pIVar2,&local_68,param_2,param_3,CONCAT44(uVar16,1));
  if (cVar8 == '\0') {
    bVar6 = false;
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar12) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar14 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar4 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar11 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar4)(&local_58,uVar10,pFVar14);
        uVar5 = uStack_50;
        uVar10 = local_58;
        uVar9 = 0;
        if ((int)uVar13 < iVar12) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar13 = uVar13 + 1;
        iVar12 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar15);
        *puVar1 = uVar10;
        puVar1[1] = uVar5;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar13 < iVar12);
    }
    bVar6 = true;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar6;
}

// GetRangeImpl @ 149e65d50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  iStack_60 = iStack_70;
  uStack_5c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x88))
                    (pIVar2,&local_68,param_2,param_3,CONCAT44(uVar16,1));
  if (cVar8 == '\0') {
    bVar6 = false;
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar12) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar14 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar4 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar11 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar4)(&local_58,uVar10,pFVar14);
        uVar5 = uStack_50;
        uVar10 = local_58;
        uVar9 = 0;
        if ((int)uVar13 < iVar12) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar13 = uVar13 + 1;
        iVar12 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar15);
        *puVar1 = uVar10;
        puVar1[1] = uVar5;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar13 < iVar12);
    }
    bVar6 = true;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar6;
}

// GetRangeImpl @ 149e65fc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  iStack_60 = iStack_70;
  uStack_5c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x78))
                    (pIVar2,&local_68,param_2,param_3,CONCAT44(uVar16,1));
  if (cVar8 == '\0') {
    bVar6 = false;
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar12) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar14 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar4 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar11 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar4)(&local_58,uVar10,pFVar14);
        uVar5 = uStack_50;
        uVar10 = local_58;
        uVar9 = 0;
        if ((int)uVar13 < iVar12) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar13 = uVar13 + 1;
        iVar12 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar15);
        *puVar1 = uVar10;
        puVar1[1] = uVar5;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar13 < iVar12);
    }
    bVar6 = true;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar6;
}

// GetRangeImpl @ 149e66230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  IPCGAttributeAccessor *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  iStack_60 = iStack_70;
  uStack_5c = uStack_6c;
  cVar9 = (**(code **)(pIVar3->_padding_ + 0x68))
                    (pIVar3,&local_68,param_2,param_3,CONCAT44(uVar16,1));
  if (cVar9 == '\0') {
    bVar7 = false;
  }
  else {
    iVar13 = param_1->ArrayNum;
    uVar14 = 0;
    if (0 < iVar13) {
      lVar15 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar14 < local_88.ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar1 = local_88.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar4 = *(longlong **)&(this->Getter).field_0x28;
        plVar12 = (longlong *)&(this->Getter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar12 = plVar4;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar5)(&local_58,uVar11,pFVar1);
        uVar6 = uStack_50;
        uVar11 = local_58;
        uVar10 = 0;
        if ((int)uVar14 < iVar13) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar14 = uVar14 + 1;
        iVar13 = param_1->ArrayNum;
        puVar2 = (undefined8 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar15);
        *puVar2 = uVar11;
        puVar2[1] = uVar6;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar14 < iVar13);
    }
    bVar7 = true;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar7;
}

// GetRangeImpl @ 149e664a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector4<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar2->_padding_ + 0x78))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar19,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar18 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar17 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar5)(&local_78,uVar13,pFVar17);
        uVar8 = uStack_60;
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pTVar4 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar18);
        *puVar1 = uVar13;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar18 + 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e66720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector4<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar2->_padding_ + 0x88))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar19,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar18 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar17 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar5)(&local_78,uVar13,pFVar17);
        uVar8 = uStack_60;
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pTVar4 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar18);
        *puVar1 = uVar13;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar18 + 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e669a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector4<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar2->_padding_ + 0x58))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar19,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar18 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar17 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar5)(&local_78,uVar13,pFVar17);
        uVar8 = uStack_60;
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pTVar4 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar18);
        *puVar1 = uVar13;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar18 + 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e66c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  IPCGAttributeAccessor *pIVar3;
  longlong *plVar4;
  TVector4<double> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar12 = (**(code **)(pIVar3->_padding_ + 0x68))
                     (pIVar3,&local_88,param_2,param_3,CONCAT44(uVar19,1));
  if (cVar12 == '\0') {
    bVar10 = false;
  }
  else {
    iVar16 = param_1->ArrayNum;
    uVar17 = 0;
    if (0 < iVar16) {
      lVar18 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_a8.ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pFVar1 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar6 = *(code **)&this->Getter;
        plVar4 = *(longlong **)&(this->Getter).field_0x28;
        plVar15 = (longlong *)&(this->Getter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar15 = plVar4;
        }
        uVar14 = (**(code **)(*plVar15 + 8))();
        (*pcVar6)(&local_78,uVar14,pFVar1);
        uVar9 = uStack_60;
        uVar8 = local_68;
        uVar7 = uStack_70;
        uVar14 = local_78;
        uVar13 = 0;
        if ((int)uVar17 < iVar16) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pTVar5 = param_1->DataPtr;
        uVar17 = uVar17 + 1;
        iVar16 = param_1->ArrayNum;
        puVar2 = (undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar18);
        *puVar2 = uVar14;
        puVar2[1] = uVar7;
        puVar2 = (undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar18 + 0x10);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        lVar18 = lVar18 + 0x20;
      } while ((int)uVar17 < iVar16);
    }
    bVar10 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar10;
}

// GetRangeImpl @ 149e66eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  IPCGAttributeAccessor *pIVar3;
  longlong *plVar4;
  TVector<double> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar3->_padding_ + 0x68))
                     (pIVar3,&local_88,param_2,param_3,CONCAT44(uVar18,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar17 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar1 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar6 = *(code **)&this->Getter;
        plVar4 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar14 = plVar4;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar6)(&local_78,uVar13,pFVar1);
        uVar8 = local_68;
        uVar7 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pTVar5 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar2 = (undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar17);
        *puVar2 = uVar13;
        puVar2[1] = uVar7;
        *(undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar17 + 0x10) = uVar8;
        lVar17 = lVar17 + 0x18;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e67140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar10 = (**(code **)(pIVar2->_padding_ + 0x88))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar18,1));
  if (cVar10 == '\0') {
    bVar8 = false;
  }
  else {
    iVar14 = param_1->ArrayNum;
    uVar15 = 0;
    if (0 < iVar14) {
      lVar17 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < local_a8.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar16 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar13 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar13 = plVar3;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        (*pcVar5)(&local_78,uVar12,pFVar16);
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar12 = local_78;
        uVar11 = 0;
        if ((int)uVar15 < iVar14) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar4 = param_1->DataPtr;
        uVar15 = uVar15 + 1;
        iVar14 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17);
        *puVar1 = uVar12;
        puVar1[1] = uVar6;
        *(undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17 + 0x10) = uVar7;
        lVar17 = lVar17 + 0x18;
      } while ((int)uVar15 < iVar14);
    }
    bVar8 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetRangeImpl @ 149e673c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TRotator<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  IPCGAttributeAccessor *pIVar3;
  longlong *plVar4;
  TVector<double> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar11 = (**(code **)(pIVar3->_padding_ + 200))
                     (pIVar3,&local_88,param_2,param_3,CONCAT44(uVar18,1));
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    iVar15 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar15) {
      lVar17 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar1 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar6 = *(code **)&this->Getter;
        plVar4 = *(longlong **)&(this->Getter).field_0x28;
        plVar14 = (longlong *)&(this->Getter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar14 = plVar4;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar6)(&local_78,uVar13,pFVar1);
        uVar8 = local_68;
        uVar7 = uStack_70;
        uVar13 = local_78;
        uVar12 = 0;
        if ((int)uVar16 < iVar15) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pTVar5 = param_1->DataPtr;
        uVar16 = uVar16 + 1;
        iVar15 = param_1->ArrayNum;
        puVar2 = (undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar17);
        *puVar2 = uVar13;
        puVar2[1] = uVar7;
        *(undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar17 + 0x10) = uVar8;
        lVar17 = lVar17 + 0x18;
      } while ((int)uVar16 < iVar15);
    }
    bVar9 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar9;
}

// GetRangeImpl @ 149e67650

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TTransform<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar10 = (**(code **)(pIVar2->_padding_ + 0x98))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar18,1));
  if (cVar10 == '\0') {
    bVar8 = false;
  }
  else {
    iVar14 = param_1->ArrayNum;
    uVar15 = 0;
    if (0 < iVar14) {
      lVar17 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < local_a8.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar16 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x60;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar13 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar13 = plVar3;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        (*pcVar5)(&local_78,uVar12,pFVar16);
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar12 = local_78;
        uVar11 = 0;
        if ((int)uVar15 < iVar14) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar4 = param_1->DataPtr;
        uVar15 = uVar15 + 1;
        iVar14 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17);
        *puVar1 = uVar12;
        puVar1[1] = uVar6;
        *(undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17 + 0x10) = uVar7;
        lVar17 = lVar17 + 0x18;
      } while ((int)uVar15 < iVar14);
    }
    bVar8 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetRangeImpl @ 149e678e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar10 = (**(code **)(pIVar2->_padding_ + 0x58))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar18,1));
  if (cVar10 == '\0') {
    bVar8 = false;
  }
  else {
    iVar14 = param_1->ArrayNum;
    uVar15 = 0;
    if (0 < iVar14) {
      lVar17 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < local_a8.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar16 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar13 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar13 = plVar3;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        (*pcVar5)(&local_78,uVar12,pFVar16);
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar12 = local_78;
        uVar11 = 0;
        if ((int)uVar15 < iVar14) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar4 = param_1->DataPtr;
        uVar15 = uVar15 + 1;
        iVar14 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17);
        *puVar1 = uVar12;
        puVar1[1] = uVar6;
        *(undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17 + 0x10) = uVar7;
        lVar17 = lVar17 + 0x18;
      } while ((int)uVar15 < iVar14);
    }
    bVar8 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetRangeImpl @ 149e67b60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 *puVar1;
  IPCGAttributeAccessor *pIVar2;
  longlong *plVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,param_1->ArrayNum,Default);
  iStack_90 = local_a8.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_98 = local_a8.AllocatorInstance.Data;
  if ((local_a8.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  iStack_80 = iStack_90;
  uStack_7c = uStack_8c;
  cVar10 = (**(code **)(pIVar2->_padding_ + 0x78))
                     (pIVar2,&local_88,param_2,param_3,CONCAT44(uVar18,1));
  if (cVar10 == '\0') {
    bVar8 = false;
  }
  else {
    iVar14 = param_1->ArrayNum;
    uVar15 = 0;
    if (0 < iVar14) {
      lVar17 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < local_a8.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar16 = local_a8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
        pcVar5 = *(code **)&this->Getter;
        plVar3 = *(longlong **)&(this->Getter).field_0x28;
        plVar13 = (longlong *)&(this->Getter).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar13 = plVar3;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        (*pcVar5)(&local_78,uVar12,pFVar16);
        uVar7 = local_68;
        uVar6 = uStack_70;
        uVar12 = local_78;
        uVar11 = 0;
        if ((int)uVar15 < iVar14) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar4 = param_1->DataPtr;
        uVar15 = uVar15 + 1;
        iVar14 = param_1->ArrayNum;
        puVar1 = (undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17);
        *puVar1 = uVar12;
        puVar1[1] = uVar6;
        *(undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar17 + 0x10) = uVar7;
        lVar17 = lVar17 + 0x18;
      } while ((int)uVar15 < iVar14);
    }
    bVar8 = true;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar8;
}

// SetRangeImpl @ 149e9fe90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FSoftClassPath>::SetRangeImpl
          (FPCGChainAccessor<int,FSoftClassPath> *this,TArrayView<int_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::SetNum(&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = (FSoftClassPath *)local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0xf8))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        piVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,piVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = (FSoftClassPath *)local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x100))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FSoftClassPath *)local_88.AllocatorInstance.Data != (FSoftClassPath *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea0150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FSoftObjectPath>::SetRangeImpl
          (FPCGChainAccessor<int,FSoftObjectPath> *this,TArrayView<int_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum(&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = (FSoftObjectPath *)local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0xe8))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        piVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,piVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = (FSoftObjectPath *)local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0xf0))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FSoftObjectPath *)local_88.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea0410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FName>::SetRangeImpl
          (FPCGChainAccessor<int,FName> *this,TArrayView<int_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IPCGAttributeAccessor *pIVar3;
  int *piVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<FName,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar9 = (**(code **)(pIVar3->_padding_ + 0xd8))
                    (pIVar3,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar9 == '\0') {
    uVar8 = 0;
  }
  else {
    iVar2 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar2) {
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar2) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        piVar4 = param_1->DataPtr;
        uVar10 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar1 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 8;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar5 = *(longlong **)&(this->Setter).field_0x28;
        pcVar6 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar6)(uVar11,pFVar1,piVar4 + (int)uVar13);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar2);
    }
    iVar2 = local_88.ArrayNum;
    pIVar3 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iStack_60 = iVar2;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar2;
    uStack_3c = uStack_5c;
    uVar8 = (**(code **)(pIVar3->_padding_ + 0xe0))(pIVar3,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar8;
}

// SetRangeImpl @ 149ea06c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<int,FString>::SetRangeImpl
          (FPCGChainAccessor<int,FString> *this,TArrayView<int_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0xa8))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        piVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,piVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0xb0))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea0980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TQuat<double>_> *this,
          TArrayView<double_const_,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3,
          EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  double *pdVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x88))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pdVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pdVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea0c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TRotator<double>_>::SetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TRotator<double>_> *this,
          TArrayView<double_const_,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3,
          EPCGAttributeAccessorFlags param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IPCGAttributeAccessor *pIVar3;
  double *pdVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar9 = (**(code **)(pIVar3->_padding_ + 200))
                    (pIVar3,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar9 == '\0') {
    uVar8 = 0;
  }
  else {
    iVar2 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar2) {
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar2) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pdVar4 = param_1->DataPtr;
        uVar10 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar1 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar5 = *(longlong **)&(this->Setter).field_0x28;
        pcVar6 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar6)(uVar11,pFVar1,pdVar4 + (int)uVar13);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar2);
    }
    iVar2 = local_88.ArrayNum;
    pIVar3 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iStack_60 = iVar2;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar2;
    uStack_3c = uStack_5c;
    uVar8 = (**(code **)(pIVar3->_padding_ + 0xd0))(pIVar3,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar8;
}

// SetRangeImpl @ 149ea0ee0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TVector2<double>_>::SetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TVector2<double>_> *this,
          TArrayView<double_const_,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3,
          EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  double *pdVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x58))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pdVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pdVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea1180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TVector4<double>_>::SetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TVector4<double>_> *this,
          TArrayView<double_const_,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3,
          EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  double *pdVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x78))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pdVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pdVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea1420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<double,UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGChainAccessor<double,UE::Math::TVector<double>_> *this,
          TArrayView<double_const_,int> *param_1,int param_2,IPCGAttributeAccessorKeys *param_3,
          EPCGAttributeAccessorFlags param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IPCGAttributeAccessor *pIVar3;
  double *pdVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar9 = (**(code **)(pIVar3->_padding_ + 0x68))
                    (pIVar3,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar9 == '\0') {
    uVar8 = 0;
  }
  else {
    iVar2 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar2) {
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar2) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pdVar4 = param_1->DataPtr;
        uVar10 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar1 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar5 = *(longlong **)&(this->Setter).field_0x28;
        pcVar6 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar6)(uVar11,pFVar1,pdVar4 + (int)uVar13);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar2);
    }
    iVar2 = local_88.ArrayNum;
    pIVar3 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iStack_60 = iVar2;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar2;
    uStack_3c = uStack_5c;
    uVar8 = (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar8;
}

// SetRangeImpl @ 149ea16c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TQuat<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x88))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea1970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TTransform<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TQuat<double>,UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TQuat<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x98))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x60;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0xa0))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea1c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector2<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector2<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x58))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea1ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector2<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x88))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea2170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector4<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector2<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x78))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea2420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector2<double>,UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IPCGAttributeAccessor *pIVar3;
  TVector2<double> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar9 = (**(code **)(pIVar3->_padding_ + 0x68))
                    (pIVar3,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar9 == '\0') {
    uVar8 = 0;
  }
  else {
    iVar2 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar2) {
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar2) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pTVar4 = param_1->DataPtr;
        uVar10 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar1 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar5 = *(longlong **)&(this->Setter).field_0x28;
        pcVar6 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar6)(uVar11,pFVar1,pTVar4 + (int)uVar13);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar2);
    }
    iVar2 = local_88.ArrayNum;
    pIVar3 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iStack_60 = iVar2;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar2;
    uStack_3c = uStack_5c;
    uVar8 = (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar8;
}

// SetRangeImpl @ 149ea26c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector4<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x78))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea2970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector4<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x88))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea2c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector4<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x58))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea2ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector4<double>,UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IPCGAttributeAccessor *pIVar3;
  TVector4<double> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar3 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar9 = (**(code **)(pIVar3->_padding_ + 0x68))
                    (pIVar3,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar9 == '\0') {
    uVar8 = 0;
  }
  else {
    iVar2 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar2) {
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar2) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pTVar4 = param_1->DataPtr;
        uVar10 = 0;
        if ((int)uVar13 < local_88.ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar1 = local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar5 = *(longlong **)&(this->Setter).field_0x28;
        pcVar6 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar6)(uVar11,pFVar1,pTVar4 + (int)uVar13);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar2);
    }
    iVar2 = local_88.ArrayNum;
    pIVar3 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iStack_60 = iVar2;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar2;
    uStack_3c = uStack_5c;
    uVar8 = (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar8;
}

// SetRangeImpl @ 149ea3170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x68))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x70))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea3410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TQuat<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x88))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea36c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TRotator<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 200))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0xd0))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea3970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TTransform<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x98))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x60;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0xa0))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea3c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector2<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x58))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

// SetRangeImpl @ 149ea3ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector4<double>_>::SetRangeImpl
          (FPCGChainAccessor<UE::Math::TVector<double>,UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  IPCGAttributeAccessor *pIVar2;
  TVector<double> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_88,param_1->ArrayNum,Default);
  iStack_70 = local_88.ArrayNum;
  pIVar2 = (this->Accessor).Ptr;
  local_78 = local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iStack_70;
  uStack_4c = uStack_6c;
  cVar8 = (**(code **)(pIVar2->_padding_ + 0x78))
                    (pIVar2,&local_58,param_2,param_3,CONCAT44(uVar14,1));
  if (cVar8 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar1 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar12 < local_88.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar4 = *(longlong **)&(this->Setter).field_0x28;
        pcVar5 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = plVar4;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(uVar10,pFVar13,pTVar3 + (int)uVar12);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    iVar1 = local_88.ArrayNum;
    pIVar2 = (this->Accessor).Ptr;
    local_68 = local_88.AllocatorInstance.Data;
    if ((local_88.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iStack_60 = iVar1;
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    iStack_40 = iVar1;
    uStack_3c = uStack_5c;
    uVar7 = (**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,&local_48,param_2,param_3,param_4);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar7;
}

