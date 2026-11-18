// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// FindSerializerInfo @ 144208f70

FPropertyNetSerializerInfo * __cdecl
UE::Net::FPropertyNetSerializerInfoRegistry::FindSerializerInfo(FProperty *param_1)

{
  longlong lVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  char cVar6;
  FPropertyNetSerializerInfo *pFVar7;
  FFieldClass *pFVar8;
  FDefaultStructPropertyNetSerializerInfo *pFVar9;
  uint uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  bool bVar16;
  FIdentityFunctor local_res8 [8];
  
  if (bRegistryIsDirty) {
    AlgoImpl::
    IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
              ((TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)
               Registry.AllocatorInstance.Data,Registry.ArrayNum,local_res8[0],
               (<lambda_1> *)local_res8);
    bRegistryIsDirty = false;
  }
  FVar4.Data = Registry.AllocatorInstance.Data;
  bVar16 = false;
  pFVar14 = Registry.AllocatorInstance.Data + (longlong)Registry.ArrayNum * 0x10;
  for (FVar12.Data = Registry.AllocatorInstance.Data; FVar12.Data != pFVar14;
      FVar12.Data = FVar12.Data + 0x10) {
    lVar1 = *(longlong *)FVar12.Data;
    if ((lVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPropertyNetSerializerInfo *)(*pcVar3)();
      return pFVar7;
    }
    lVar15 = param_1->_padding_;
    if (*(ulonglong *)(lVar1 + 0x10) == 0) {
      for (; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x20)) {
        if (lVar15 == lVar1) {
          bVar5 = true;
          goto LAB_144209030;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (*(ulonglong *)(lVar15 + 0x18) & *(ulonglong *)(lVar1 + 0x10)) != 0;
    }
LAB_144209030:
    if (bVar5) {
      uVar13 = (longlong)FVar12.Data - (longlong)FVar4.Data >> 4;
      uVar10 = (uint)uVar13;
      if (uVar10 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar10 < Registry.ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FPropertyNetSerializerInfo *)(*pcVar3)();
          return pFVar7;
        }
        lVar15 = (longlong)(int)uVar10 * 0x10;
        lVar1 = *(longlong *)(Registry.AllocatorInstance.Data + lVar15);
        if ((int)uVar10 < Registry.ArrayNum) goto LAB_144209110;
      }
      break;
    }
  }
  goto LAB_14420903d;
  while( true ) {
    uVar10 = 0;
    if ((int)uVar11 < Registry.ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPropertyNetSerializerInfo *)(*pcVar3)();
      return pFVar7;
    }
    pFVar7 = *(FPropertyNetSerializerInfo **)(Registry.AllocatorInstance.Data + lVar15 + 8);
    cVar6 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,param_1);
    if (cVar6 != '\0') {
      return pFVar7;
    }
    uVar13 = (ulonglong)(uVar11 + 1);
    lVar15 = lVar15 + 0x10;
    if (Registry.ArrayNum <= (int)(uVar11 + 1)) break;
LAB_144209110:
    uVar11 = (uint)uVar13;
    uVar10 = 0;
    if ((int)uVar11 < Registry.ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPropertyNetSerializerInfo *)(*pcVar3)();
      return pFVar7;
    }
    if (*(longlong *)(Registry.AllocatorInstance.Data + lVar15) != lVar1) break;
  }
LAB_14420903d:
  pFVar8 = FStructProperty::StaticClass();
  if ((pFVar8 == (FFieldClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x2dd,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FPropertyNetSerializerInfo *)(*pcVar3)();
    return pFVar7;
  }
  pFVar2 = (FFieldClass *)param_1->_padding_;
  if (pFVar8->Id == CASTCLASS_None) {
    for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
      if (pFVar2 == pFVar8) {
        bVar5 = true;
        goto LAB_144209204;
      }
    }
    bVar5 = false;
  }
  else {
    bVar5 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
  }
LAB_144209204:
  if (bVar5) {
    pFVar9 = &::StaticInstance;
  }
  else {
    pFVar8 = FArrayProperty::StaticClass();
    if ((pFVar8 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPropertyNetSerializerInfo *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = (FFieldClass *)param_1->_padding_;
    if (pFVar8->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == pFVar8) {
          bVar16 = true;
          break;
        }
      }
    }
    else {
      bVar16 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
    }
    if (bVar16) {
      cVar6 = (**(code **)(::StaticInstance._0_8_ + 8))(&::StaticInstance,param_1);
      pFVar9 = (FDefaultStructPropertyNetSerializerInfo *)&::StaticInstance;
      if (cVar6 != '\0') {
        pFVar9 = (FDefaultStructPropertyNetSerializerInfo *)&::StaticInstance;
      }
    }
    else {
      pFVar9 = (FDefaultStructPropertyNetSerializerInfo *)&::StaticInstance;
    }
  }
  return (FPropertyNetSerializerInfo *)pFVar9;
}

// FindStructSerializerInfo @ 1442092e0

FPropertyNetSerializerInfo * __cdecl
UE::Net::FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFieldClass *pFVar4;
  FPropertyNetSerializerInfo *pFVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  FIdentityFunctor local_res10 [8];
  
  if (bRegistryIsDirty) {
    AlgoImpl::
    IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
              ((TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)
               Registry.AllocatorInstance.Data,Registry.ArrayNum,local_res10[0],
               (<lambda_1> *)local_res10);
    bRegistryIsDirty = false;
  }
  pFVar4 = FStructProperty::StaticClass();
  FVar9 = Registry.AllocatorInstance;
  while( true ) {
    if (FVar9.Data == Registry.AllocatorInstance.Data + (longlong)Registry.ArrayNum * 0x10) {
      return (FPropertyNetSerializerInfo *)0x0;
    }
    if (*(FFieldClass **)FVar9.Data == pFVar4) break;
    FVar9.Data = FVar9.Data + 0x10;
  }
  uVar10 = (longlong)FVar9.Data - (longlong)Registry.AllocatorInstance.Data >> 4;
  iVar7 = (int)uVar10;
  if (iVar7 == -1) {
    return (FPropertyNetSerializerInfo *)0x0;
  }
  if (Registry.ArrayNum <= iVar7) {
    return (FPropertyNetSerializerInfo *)0x0;
  }
  lVar6 = (longlong)iVar7 << 4;
  iVar7 = Registry.ArrayNum;
  while( true ) {
    uVar8 = (uint)uVar10;
    uVar3 = 0;
    if ((int)uVar8 < iVar7) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar7 = Registry.ArrayNum, bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPropertyNetSerializerInfo *)(*pcVar1)();
      return pFVar5;
    }
    if (*(FFieldClass **)(Registry.AllocatorInstance.Data + lVar6) != pFVar4) {
      return (FPropertyNetSerializerInfo *)0x0;
    }
    uVar3 = 0;
    if ((int)uVar8 < iVar7) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar7 = Registry.ArrayNum, bVar2)) break;
    if ((*(FPropertyNetSerializerInfo **)(Registry.AllocatorInstance.Data + lVar6 + 8))->StructName
        == param_1) {
      return *(FPropertyNetSerializerInfo **)(Registry.AllocatorInstance.Data + lVar6 + 8);
    }
    uVar10 = (ulonglong)(uVar8 + 1);
    lVar6 = lVar6 + 0x10;
    if (iVar7 <= (int)(uVar8 + 1)) {
      return (FPropertyNetSerializerInfo *)0x0;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FPropertyNetSerializerInfo *)(*pcVar1)();
  return pFVar5;
}

// Freeze @ 144209f20

void __cdecl UE::Net::FPropertyNetSerializerInfoRegistry::Freeze(void)

{
  FIdentityFunctor local_res8 [32];
  
  if (bRegistryIsDirty) {
    AlgoImpl::
    IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
              ((TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)
               Registry.AllocatorInstance.Data,Registry.ArrayNum,local_res8[0],
               (<lambda_1> *)local_res8);
    bRegistryIsDirty = false;
  }
  return;
}

// GetNopNetSerializerInfo @ 14420b020

FPropertyNetSerializerInfo * __cdecl
UE::Net::FPropertyNetSerializerInfoRegistry::GetNopNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&Net::Private::NopNetSerializerInfo;
}

// Register @ 144215270

void __cdecl
UE::Net::FPropertyNetSerializerInfoRegistry::Register(FPropertyNetSerializerInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_18 [16];
  
  if (param_1 == (FPropertyNetSerializerInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._0_8_ = (**(code **)param_1->_padding_)(param_1);
  if (local_18._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._8_8_ = param_1;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_18);
  bRegistryIsDirty = true;
  return;
}

// Reset @ 1442188c0

void __cdecl UE::Net::FPropertyNetSerializerInfoRegistry::Reset(void)

{
  Registry.ArrayNum = 0;
  if (Registry.ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&Registry.AllocatorInstance,0,&Registry.ArrayMax);
    bRegistryIsDirty = false;
    return;
  }
  bRegistryIsDirty = false;
  return;
}

// Unregister @ 14421c4a0

void __cdecl
UE::Net::FPropertyNetSerializerInfoRegistry::Unregister(FPropertyNetSerializerInfo *param_1)

{
  ForAnyElementType FVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  FVar1.Data = Registry.AllocatorInstance.Data;
  lVar2 = (longlong)Registry.ArrayNum;
  iVar7 = Registry.ArrayNum;
  if (Registry.ArrayNum != 0) {
    iVar7 = 0;
    bVar8 = *(FPropertyNetSerializerInfo **)(Registry.AllocatorInstance.Data + 8) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        pFVar3 = FVar1.Data + lVar4 * 0x10 + 8;
        do {
          if (bVar8 != (*(FPropertyNetSerializerInfo **)pFVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          pFVar3 = pFVar3 + 0x10;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          memmove(FVar1.Data + (longlong)iVar7 * 0x10,FVar1.Data + (longlong)iVar5 * 0x10,
                  (longlong)(iVar6 - iVar5) << 4);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
  }
  Registry.ArrayNum = iVar7;
  bRegistryIsDirty = true;
  return;
}

