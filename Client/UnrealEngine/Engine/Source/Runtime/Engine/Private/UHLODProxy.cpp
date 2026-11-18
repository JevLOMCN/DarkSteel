// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147cad770

UClass * __cdecl UHLODProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODProxy",&Z_Registration_Info_UClass_UHLODProxy.InnerSingleton,
               StaticRegisterNativesUHLODProxy,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODProxy>,InternalVTableHelperCtorCaller<UHLODProxy>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODProxy.InnerSingleton;
}

// UHLODProxy @ 147cc64c0

UHLODProxy * __thiscall UHLODProxy::UHLODProxy(UHLODProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHLODProxy__6B_;
  (this->ProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyMeshes).ArrayNum = 0;
  (this->ProxyMeshes).ArrayMax = 0;
  *(undefined8 *)&this->HLODActors = 0;
  *(undefined8 *)&(this->HLODActors).field_0x8 = 0;
  *(undefined8 *)&(this->HLODActors).field_0x20 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x28 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODActors).field_0x34 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HLODActors).field_0x40 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x48 = 0;
  return this;
}

// UHLODProxy @ 147cc6520

UHLODProxy * __thiscall UHLODProxy::UHLODProxy(UHLODProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHLODProxy__6B_;
  (this->ProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyMeshes).ArrayNum = 0;
  (this->ProxyMeshes).ArrayMax = 0;
  *(undefined8 *)&this->HLODActors = 0;
  *(undefined8 *)&(this->HLODActors).field_0x8 = 0;
  *(undefined8 *)&(this->HLODActors).field_0x20 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x28 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODActors).field_0x34 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HLODActors).field_0x40 = 0;
  *(undefined4 *)&(this->HLODActors).field_0x48 = 0;
  return this;
}

// ~UHLODProxy @ 147cc91f0

void __thiscall UHLODProxy::~UHLODProxy(UHLODProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UHLODProxy__6B_;
  *(undefined4 *)&(this->HLODActors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HLODActors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UHLODProxyDesc>,FHLODProxyMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UHLODProxyDesc>,FHLODProxyMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UHLODProxyDesc>,FHLODProxyMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HLODActors);
  pFVar2 = (this->ProxyMeshes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ContainsDataForActor @ 147ce6690

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UHLODProxy::ContainsDataForActor(UHLODProxy *this,ALODActor *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FVar5 = param_1->Key;
  if (FVar5 == (FName)0x0) {
    return false;
  }
  iVar4 = *(int *)&(this->HLODActors).field_0x28;
  puVar1 = &(this->HLODActors).field_0x10;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->HLODActors).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147ce673f;
      uVar12 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_147ce673f:
  uVar12 = *(uint *)&(this->HLODActors).field_0x28;
  uVar18 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar14);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HLODActors).field_0x8 -
                       *(int *)&(this->HLODActors).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(this->HLODActors).field_0x28;
  if (uVar12 != uVar9) {
    puVar15 = *(undefined1 **)&(this->HLODActors).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147ce6840;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_147ce6840:
  while( true ) {
    if (*(int *)&(this->HLODActors).field_0x8 - *(int *)&(this->HLODActors).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UHLODProxyDesc>,FHLODProxyMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(FName *)((longlong)TStack_60.CurrentBitIndex * 0x38 + 0x28 +
                  *(longlong *)&this->HLODActors) == FVar5) {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  iVar4 = (this->ProxyMeshes).ArrayNum;
  pFVar13 = (this->ProxyMeshes).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)iVar4 * 0x28;
  while( true ) {
    if ((this->ProxyMeshes).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FHLODProxyMesh_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar13 == pFVar2) break;
    if (*(FName *)(pFVar13 + 0x20) == FVar5) {
      return true;
    }
    pFVar13 = pFVar13 + 0x28;
  }
  return false;
}

// GetPrivateStaticClass @ 147d0c2a0

UClass * __cdecl UHLODProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODProxy",&Z_Registration_Info_UClass_UHLODProxy.InnerSingleton,
               StaticRegisterNativesUHLODProxy,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODProxy>,InternalVTableHelperCtorCaller<UHLODProxy>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODProxy.InnerSingleton;
}

// StaticRegisterNativesUHLODProxy @ 147d328c0

void __cdecl UHLODProxy::StaticRegisterNativesUHLODProxy(void)

{
  return;
}

