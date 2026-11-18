// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 100

// `dynamic_initializer_for_'Binormal'' @ 140f87250

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__Binormal__(void)

{
  ::FName::FName(&Binormal,"Binormal");
  return;
}

// `dynamic_initializer_for_'BinormalSign'' @ 140f87270

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__BinormalSign__(void)

{
  ::FName::FName(&BinormalSign,"BinormalSign");
  return;
}

// `dynamic_initializer_for_'Color'' @ 140f87290

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__Color__(void)

{
  ::FName::FName(&Color,"Color");
  return;
}

// `dynamic_initializer_for_'ImportedMaterialSlotName'' @ 140f872b0

void __cdecl MeshAttribute::PolygonGroup::_dynamic_initializer_for__ImportedMaterialSlotName__(void)

{
  ::FName::FName(&ImportedMaterialSlotName,"ImportedMaterialSlotName");
  return;
}

// `dynamic_initializer_for_'IsHard'' @ 140f872d0

void __cdecl MeshAttribute::Edge::_dynamic_initializer_for__IsHard__(void)

{
  ::FName::FName(&IsHard,"IsHard");
  return;
}

// `dynamic_initializer_for_'LogStaticMeshOperations'' @ 140f872f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStaticMeshOperations__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStaticMeshOperations,L"LogStaticMeshOperations",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStaticMeshOperations__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStaticMeshDescription'' @ 140f87330

void __cdecl _dynamic_initializer_for__ModuleRegistrantStaticMeshDescription__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StaticMeshDescription";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StaticMeshDescription",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStaticMeshUtilitiesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Normal'' @ 140f87380

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,"Normal");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 140f873a0

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,"Normal");
  return;
}

// `dynamic_initializer_for_'ObjectName'' @ 140f873c0

void __cdecl MeshAttribute::Polygon::_dynamic_initializer_for__ObjectName__(void)

{
  ::FName::FName(&ObjectName,"ObjectName");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 140f873e0

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__Tangent__(void)

{
  ::FName::FName(&Tangent,"Tangent");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 140f87400

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__Tangent__(void)

{
  ::FName::FName(&Tangent,"Tangent");
  return;
}

// `dynamic_initializer_for_'TextureCoordinate'' @ 140f87420

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__TextureCoordinate__(void)

{
  ::FName::FName(&TextureCoordinate,"TextureCoordinate");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h__Script_StaticMeshDescription_1381265914'' @ 140f87440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h__Script_StaticMeshDescription_1381265914__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StaticMeshDescription",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h__Script_StaticMeshDescription_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h__Script_StaticMeshDescription_738184751'' @ 140f87480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h__Script_StaticMeshDescription_738184751__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StaticMeshDescription",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h__Script_StaticMeshDescription_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StaticMeshDescription'' @ 140f874c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StaticMeshDescription__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa7e3cde7;
  local_res8[0].DeclarationsHash = 0x39de512f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StaticMeshDescription,L"/Script/StaticMeshDescription",
             &Z_Registration_Info_UPackage__Script_StaticMeshDescription,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14435f730

void * __thiscall
FStaticMeshUtilitiesModule::_scalar_deleting_destructor_
          (FStaticMeshUtilitiesModule *this,uint param_1)

{
  *this = (FStaticMeshUtilitiesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_StaticMeshDescription @ 14435f770

UPackage * __cdecl Z_Construct_UPackage__Script_StaticMeshDescription(void)

{
  if (Z_Registration_Info_UPackage__Script_StaticMeshDescription.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StaticMeshDescription.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StaticMeshDescription.OuterSingleton;
}

// NewStructOps @ 14435f7f0

void * __cdecl Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUVMapSettings,&UE::CoreUObject::Private::Construct<FUVMapSettings>,&UE::CoreUObject::Private::ConstructForTests<FUVMapSettings>,&UE::CoreUObject::Private::Destruct<FUVMapSettings>,&UE::CoreUObject::Private::Copy<FUVMapSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UStaticMeshDescription @ 14435fa10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStaticMeshDescription(void)

{
  if (Z_Registration_Info_UClass_UStaticMeshDescription.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStaticMeshDescription.OuterSingleton,
               &Z_Construct_UClass_UStaticMeshDescription_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescription.OuterSingleton;
}

// Z_Construct_UFunction_UStaticMeshDescription_CreateCube @ 14435fa50

UFunction * __cdecl Z_Construct_UFunction_UStaticMeshDescription_CreateCube(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMeshDescription_CreateCube_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV @ 14435fa90

UFunction * __cdecl Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMeshDescription_GetVertexInstanceUV_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName @ 14435fad0

UFunction * __cdecl
Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV @ 14435fb10

UFunction * __cdecl Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMeshDescription_SetVertexInstanceUV_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// CopyRemappedUVs<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14435fea0

void __cdecl
CopyRemappedUVs<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (FMeshDescription *param_1,TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2,
          FElementIDRemappings *param_3,bool param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  FVertexInstanceID FVar2;
  FVertexInstanceID *pFVar3;
  FVertexInstanceID *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TArrayView<FVertexInstanceID,int> *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  TElementIDs local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TConstIterator local_88;
  TArrayView<FVertexInstanceID,int> local_68;
  TArrayView<FVertexInstanceID,int> local_58;
  
  uVar10 = 0;
  local_c8.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_c8,(TConstIterator *)&local_a8);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_c8,&local_88);
  lVar9 = 0;
  local_c0 = 0;
  while( true ) {
    if ((local_a8.CurrentBitIndex == local_88.Iterator.CurrentBitIndex) &&
       (local_a8.Array == local_88.Iterator.Array)) break;
    iVar11 = -1;
    if (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits) {
      iVar11 = local_a8.CurrentBitIndex;
    }
    uVar7 = 0;
    if ((int)uVar10 < param_2->ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar12 = *(int *)((param_2->AllocatorInstance).Data + lVar9);
    if ((!param_4) || (iVar12 != iVar11)) {
      if (param_3 != (FElementIDRemappings *)0x0) {
        iVar12 = *(int *)(*(longlong *)&param_3->NewTriangleIndexLookup + (longlong)iVar12 * 8);
      }
      pTVar8 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         (&param_1->TriangleVertexInstances,&local_68,iVar12);
      pFVar3 = pTVar8->DataPtr;
      iVar12 = pTVar8->ArrayNum;
      pTVar8 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         (&param_1->TriangleVertexInstances,&local_58,iVar11);
      pFVar4 = pTVar8->DataPtr;
      iVar11 = pTVar8->ArrayNum;
      if (iVar12 < 1) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2 = *pFVar3;
      uVar7 = 0;
      if ((int)FVar2 < param_5->ArrayNum) {
        uVar7 = ~(uint)FVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (param_5->AllocatorInstance).Data + (longlong)(int)FVar2 * 0x10;
      local_b8 = *(undefined8 *)pFVar1;
      uStack_b0 = *(undefined8 *)(pFVar1 + 8);
      if (iVar11 < 1) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2 = *pFVar4;
      uVar7 = 0;
      if ((int)FVar2 < param_6->ArrayNum) {
        uVar7 = ~(uint)FVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (param_6->AllocatorInstance).Data + (longlong)(int)FVar2 * 0x10;
      *(undefined8 *)pFVar1 = local_b8;
      *(undefined8 *)(pFVar1 + 8) = uStack_b0;
      if (iVar12 < 2) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2 = pFVar3[1];
      uVar7 = 0;
      if ((int)FVar2 < param_5->ArrayNum) {
        uVar7 = ~(uint)FVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (param_5->AllocatorInstance).Data + (longlong)(int)FVar2 * 0x10;
      local_b8 = *(undefined8 *)pFVar1;
      uStack_b0 = *(undefined8 *)(pFVar1 + 8);
      if (iVar11 < 2) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2 = pFVar4[1];
      uVar7 = 0;
      if ((int)FVar2 < param_6->ArrayNum) {
        uVar7 = ~(uint)FVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (param_6->AllocatorInstance).Data + (longlong)(int)FVar2 * 0x10;
      *(undefined8 *)pFVar1 = local_b8;
      *(undefined8 *)(pFVar1 + 8) = uStack_b0;
      if (iVar12 < 3) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2 = pFVar3[2];
      uVar7 = 0;
      if ((int)FVar2 < param_5->ArrayNum) {
        uVar7 = ~(uint)FVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (param_5->AllocatorInstance).Data + (longlong)(int)FVar2 * 0x10;
      local_b8 = *(undefined8 *)pFVar1;
      uStack_b0 = *(undefined8 *)(pFVar1 + 8);
      if (iVar11 < 3) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2 = pFVar4[2];
      uVar7 = 0;
      if ((int)FVar2 < param_6->ArrayNum) {
        uVar7 = ~(uint)FVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (param_6->AllocatorInstance).Data + (longlong)(int)FVar2 * 0x10;
      *(undefined8 *)pFVar1 = local_b8;
      *(undefined8 *)(pFVar1 + 8) = uStack_b0;
      lVar9 = local_c0;
    }
    lVar9 = lVar9 + 4;
    local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
    uVar10 = uVar10 + 1;
    local_c0 = lVar9;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
  }
  return;
}

// DefaultConstructItems<`FStaticMeshOperations::ComputeTangentsAndNormals'::__l2::FTriangleData,int> @ 1443603e0

void __cdecl
DefaultConstructItems<_FStaticMeshOperations::ComputeTangentsAndNormals_::__l2::FTriangleData,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x14);
    do {
      puVar1[-4] = 0xffffffff;
      puVar1[-2] = 0xffffffff;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int> @ 144360420

void __cdecl
DestructItems<TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2)

{
  ForElementType<FTriangleID> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FTriangleID>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,1> @ 144360460

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,1>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,2> @ 1443606a0

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,2>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,3> @ 1443608e0

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,3>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,4> @ 144360b20

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,4>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,5> @ 144360d60

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,5>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,6> @ 144360fa0

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,6>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,7> @ 1443611e0

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,7>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FEdgeID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>,0> @ 144361420

void __cdecl
ForEachConstImpl::
Dispatch<FEdgeID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>,0>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,1> @ 144361660

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,1>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,2> @ 1443618a0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,2>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,3> @ 144361ae0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,3>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,4> @ 144361d20

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,4>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,5> @ 144361f60

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,5>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,6> @ 1443621a0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,6>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,7> @ 1443623e0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,7>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonGroupID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>,0> @ 144362620

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonGroupID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>,0>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,1> @ 144362860

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,1>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,2> @ 144362aa0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,2>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,3> @ 144362ce0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,3>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,4> @ 144362f20

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,4>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,5> @ 144363160

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,5>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,6> @ 1443633a0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,6>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,7> @ 1443635e0

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,7>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FPolygonID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>,0> @ 144363820

void __cdecl
ForEachConstImpl::
Dispatch<FPolygonID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>,0>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,1> @ 144363a60

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,1>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,2> @ 144363ca0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,2>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,3> @ 144363ee0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,3>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,4> @ 144364120

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,4>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,5> @ 144364360

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,5>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,6> @ 1443645a0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,6>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,7> @ 1443647e0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,7>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>,0> @ 144364a20

void __cdecl
ForEachConstImpl::
Dispatch<FVertexID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>,0>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,1> @ 144364c60

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,1>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,2> @ 144364ea0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,2>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,3> @ 1443650e0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,3>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,4> @ 144365320

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,4>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,5> @ 144365560

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,5>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,6> @ 1443657a0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,6>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,7> @ 1443659e0

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,7>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// Dispatch<FVertexInstanceID,``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>,0> @ 144365c20

void __cdecl
ForEachConstImpl::
Dispatch<FVertexInstanceID,__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>,0>
          (FName param_1,<lambda_1> param_2,FMeshAttributeArraySetBase *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  if (param_3->Extent == 0) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_28 = param_1;
      if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    if ((param_3->Flags >> 3 & 1) == 0) {
      pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
      local_20 = param_1;
      if ((pFVar1 <= &local_20) && (&local_20 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (param_2.AttributesNames)->ArrayNum;
      if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                           &(param_2.AttributesNames)->ArrayMax);
      }
      (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
      *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_20;
      return;
    }
  }
  else if ((param_3->Flags >> 3 & 1) == 0) {
    pFVar1 = (FName *)((param_2.AttributesNames)->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_2.AttributesNames)->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2.AttributesNames)->ArrayNum;
    if (iVar4 == (param_2.AttributesNames)->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_2.AttributesNames)->AllocatorInstance,
                         &(param_2.AttributesNames)->ArrayMax);
    }
    (param_2.AttributesNames)->ArrayNum = iVar4 + 1;
    *(FName *)(((param_2.AttributesNames)->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return;
}

// ForEach<``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>'::__l7::<lambda_1>_> @ 144367b70

void __thiscall
TAttributesSet<FEdgeID>::
ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>_>
          (TAttributesSet<FEdgeID> *this,<lambda_1> param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144367c0e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_144367c0e:
  uVar10 = *(uint *)&this->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&this->field_0x8 - *(int *)&this->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144367d20;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_144367d20:
  while( true ) {
    if (*(int *)&this->field_0x8 - *(int *)&this->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FMeshAttributeArraySetBase **)
              (*(longlong *)this + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (*::JumpTable.Fns[pFVar4->Type])
              (*(FName *)(*(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x18),
               (<lambda_1>)param_1.AttributesNames,pFVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>'::__l7::<lambda_1>_> @ 144367da0

void __thiscall
TAttributesSet<FPolygonGroupID>::
ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>_>
          (TAttributesSet<FPolygonGroupID> *this,<lambda_1> param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144367e3e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_144367e3e:
  uVar10 = *(uint *)&this->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&this->field_0x8 - *(int *)&this->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144367f50;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_144367f50:
  while( true ) {
    if (*(int *)&this->field_0x8 - *(int *)&this->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FMeshAttributeArraySetBase **)
              (*(longlong *)this + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (*::JumpTable.Fns[pFVar4->Type])
              (*(FName *)(*(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x18),
               (<lambda_1>)param_1.AttributesNames,pFVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>'::__l7::<lambda_1>_> @ 144367fd0

void __thiscall
TAttributesSet<FPolygonID>::
ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>_>
          (TAttributesSet<FPolygonID> *this,<lambda_1> param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14436806e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14436806e:
  uVar10 = *(uint *)&this->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&this->field_0x8 - *(int *)&this->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144368180;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_144368180:
  while( true ) {
    if (*(int *)&this->field_0x8 - *(int *)&this->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FMeshAttributeArraySetBase **)
              (*(longlong *)this + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (*::JumpTable.Fns[pFVar4->Type])
              (*(FName *)(*(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x18),
               (<lambda_1>)param_1.AttributesNames,pFVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>'::__l7::<lambda_1>_> @ 144368200

void __thiscall
TAttributesSet<FVertexID>::
ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>_>
          (TAttributesSet<FVertexID> *this,<lambda_1> param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14436829e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14436829e:
  uVar10 = *(uint *)&this->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&this->field_0x8 - *(int *)&this->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443683b0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_1443683b0:
  while( true ) {
    if (*(int *)&this->field_0x8 - *(int *)&this->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FMeshAttributeArraySetBase **)
              (*(longlong *)this + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (*::JumpTable.Fns[pFVar4->Type])
              (*(FName *)(*(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x18),param_1,
               pFVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<``FStaticMeshOperations::ComputeSHAHash'::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>'::__l7::<lambda_1>_> @ 144368430

void __thiscall
TAttributesSet<FVertexInstanceID>::
ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>_>
          (TAttributesSet<FVertexInstanceID> *this,<lambda_1> param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443684ce;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1443684ce:
  uVar10 = *(uint *)&this->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&this->field_0x8 - *(int *)&this->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443685e0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_1443685e0:
  while( true ) {
    if (*(int *)&this->field_0x8 - *(int *)&this->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FMeshAttributeArraySetBase **)
              (*(longlong *)this + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (*::JumpTable.Fns[pFVar4->Type])
              (*(FName *)(*(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x18),
               (<lambda_1>)param_1.AttributesNames,pFVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// HeapSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_> @ 144369480

void __cdecl
AlgoImpl::
HeapSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_>
          (FIndexAndZ *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>
          param_4)

{
  FIndexAndZ *pFVar1;
  FIndexAndZ *pFVar2;
  code *pcVar3;
  TVector<float> *pTVar4;
  TVector<float> *pTVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  FIndexAndZ *pFVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar12 = iVar10;
  iVar14 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_144369573:
      if (iVar14 == 0) {
        iVar10 = param_2 + -1;
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar15 = param_1 + lVar13;
          do {
            iVar12 = pFVar15->Index;
            pTVar4 = pFVar15->OriginalVector;
            iVar14 = 0;
            fVar6 = param_1->Z;
            iVar9 = param_1->Index;
            pTVar5 = param_1->OriginalVector;
            param_1->Z = pFVar15->Z;
            param_1->Index = iVar12;
            param_1->OriginalVector = pTVar4;
            pFVar15->Z = fVar6;
            pFVar15->Index = iVar9;
            pFVar15->OriginalVector = pTVar5;
            if (1 < iVar10) {
              do {
                iVar9 = iVar14 * 2;
                iVar12 = iVar9 + 1;
                if (iVar9 + 2 < iVar10) {
                  if (param_1[(longlong)iVar9 + 2].Z <= param_1[iVar12].Z &&
                      param_1[iVar12].Z != param_1[(longlong)iVar9 + 2].Z) {
                    iVar12 = iVar9;
                  }
                  iVar12 = iVar12 + 1;
                }
                if (param_1[iVar12].Z < param_1[iVar14].Z || param_1[iVar12].Z == param_1[iVar14].Z)
                break;
                pFVar1 = param_1 + iVar14;
                fVar6 = pFVar1->Z;
                iVar11 = pFVar1->Index;
                pTVar4 = pFVar1->OriginalVector;
                pFVar1 = param_1 + iVar12;
                iVar9 = pFVar1->Index;
                pTVar5 = pFVar1->OriginalVector;
                pFVar2 = param_1 + iVar14;
                pFVar2->Z = pFVar1->Z;
                pFVar2->Index = iVar9;
                pFVar2->OriginalVector = pTVar5;
                pFVar1 = param_1 + iVar12;
                pFVar1->Z = fVar6;
                pFVar1->Index = iVar11;
                pFVar1->OriginalVector = pTVar4;
                iVar14 = iVar12;
              } while (iVar12 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar13 = lVar13 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar9 = iVar14 + -1;
      iVar10 = iVar12 + -2;
      iVar12 = iVar10;
      iVar14 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[(longlong)iVar10 + 2].Z <= param_1[iVar11].Z &&
          param_1[iVar11].Z != param_1[(longlong)iVar10 + 2].Z) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    if (param_1[iVar11].Z < param_1[iVar9].Z || param_1[iVar11].Z == param_1[iVar9].Z)
    goto LAB_144369573;
    pFVar15 = param_1 + iVar9;
    fVar6 = pFVar15->Z;
    iVar7 = pFVar15->Index;
    pTVar4 = pFVar15->OriginalVector;
    pFVar15 = param_1 + iVar11;
    iVar10 = pFVar15->Index;
    pTVar5 = pFVar15->OriginalVector;
    pFVar1 = param_1 + iVar9;
    pFVar1->Z = pFVar15->Z;
    pFVar1->Index = iVar10;
    pFVar1->OriginalVector = pTVar5;
    iVar10 = iVar11 * 2 + 1;
    pFVar15 = param_1 + iVar11;
    pFVar15->Z = fVar6;
    pFVar15->Index = iVar7;
    pFVar15->OriginalVector = pTVar4;
    iVar9 = iVar11;
  } while( true );
}

// InternalConstructor<UStaticMeshDescription> @ 144369650

void __cdecl InternalConstructor<UStaticMeshDescription>(FObjectInitializer *param_1)

{
  UMeshDescriptionBase *this;
  
  this = (UMeshDescriptionBase *)param_1->Obj;
  if (this != (UMeshDescriptionBase *)0x0) {
    UMeshDescriptionBase::UMeshDescriptionBase(this,param_1);
    this->_padding_ = (longlong)&___7UStaticMeshDescription__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStaticMeshDescription> @ 144369680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStaticMeshDescription>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshDescriptionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStaticMeshDescription::GetPrivateStaticClass();
  this = (UMeshDescriptionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshDescriptionBase *)0x0) {
    UMeshDescriptionBase::UMeshDescriptionBase(this,param_1);
    this->_padding_ = (longlong)&___7UStaticMeshDescription__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_> @ 144369730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_>
          (FIndexAndZ *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>
          param_4)

{
  FIndexAndZ *pFVar1;
  TVector<float> *pTVar2;
  TVector<float> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FIndexAndZ *pFVar9;
  FIndexAndZ *pFVar10;
  FIndexAndZ *pFVar11;
  FIndexAndZ **ppFVar12;
  FIndexAndZ *pFVar13;
  FIndexAndZ *pFVar14;
  FIndexAndZ *pFVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  FIndexAndZ *local_338;
  FIndexAndZ *local_328;
  FIndexAndZ *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar16;
    memset(local_310,0,0x2e8);
    ppFVar12 = &local_328;
    do {
      pFVar14 = ppFVar12[1];
      pFVar9 = *ppFVar12;
      pFVar1 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar14 - (longlong)pFVar9 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar9;
      if ((int)local_338 != 0) {
LAB_1443697e0:
        if (8 < iVar8) {
          iVar6 = pFVar15->Index;
          pTVar2 = pFVar15->OriginalVector;
          pFVar11 = pFVar14 + 1;
          pFVar9 = pFVar15 + iVar8 / 2;
          fVar16 = pFVar9->Z;
          iVar7 = pFVar9->Index;
          pTVar3 = pFVar9->OriginalVector;
          pFVar9 = pFVar15 + iVar8 / 2;
          pFVar9->Z = pFVar15->Z;
          pFVar9->Index = iVar6;
          pFVar9->OriginalVector = pTVar2;
          pFVar15->Z = fVar16;
          pFVar15->Index = iVar7;
          pFVar15->OriginalVector = pTVar3;
          pFVar9 = pFVar15;
LAB_144369810:
          pFVar10 = pFVar9;
          pFVar9 = pFVar10 + 1;
          if (pFVar9 <= pFVar14) goto code_r0x000144369819;
          goto LAB_144369823;
        }
        if (pFVar15 < pFVar14) {
          pFVar1 = pFVar15 + 1;
          do {
            pFVar9 = pFVar15;
            if (pFVar1 <= pFVar14) {
              pFVar11 = pFVar1;
              if (0x3f < ((longlong)pFVar14 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  fVar16 = pFVar9->Z;
                  if (pFVar9->Z < pFVar11->Z) {
                    pFVar9 = pFVar11;
                    fVar16 = pFVar11->Z;
                  }
                  if (fVar16 < pFVar11[1].Z) {
                    pFVar9 = pFVar11 + 1;
                  }
                  fVar16 = pFVar9->Z;
                  if (pFVar9->Z < pFVar11[2].Z) {
                    pFVar9 = pFVar11 + 2;
                    fVar16 = pFVar11[2].Z;
                  }
                  if (fVar16 < pFVar11[3].Z) {
                    pFVar9 = pFVar11 + 3;
                  }
                  pFVar11 = pFVar11 + 4;
                } while (pFVar11 <= pFVar14 + -3);
              }
              for (; pFVar11 <= pFVar14; pFVar11 = pFVar11 + 1) {
                if (pFVar9->Z < pFVar11->Z) {
                  pFVar9 = pFVar11;
                }
              }
            }
            fVar16 = pFVar9->Z;
            iVar6 = pFVar9->Index;
            pTVar2 = pFVar9->OriginalVector;
            pFVar11 = pFVar14 + -1;
            iVar8 = pFVar14->Index;
            pTVar3 = pFVar14->OriginalVector;
            pFVar9->Z = pFVar14->Z;
            pFVar9->Index = iVar8;
            pFVar9->OriginalVector = pTVar3;
            pFVar14->Z = fVar16;
            pFVar14->Index = iVar6;
            pFVar14->OriginalVector = pTVar2;
            pFVar14 = pFVar11;
          } while (pFVar15 < pFVar11);
        }
        goto LAB_1443698e5;
      }
LAB_1443698d4:
      local_338 = pFVar1;
      HeapSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_>
                (pFVar9,iVar8,param_3,param_4);
LAB_1443698e5:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_328 <= ppFVar12);
  }
  return;
code_r0x000144369819:
  if (pFVar9->Z < pFVar15->Z || pFVar9->Z == pFVar15->Z) goto LAB_144369810;
LAB_144369823:
  do {
    pFVar13 = pFVar11;
    pFVar11 = pFVar13 + -1;
    if (pFVar11 <= pFVar15) break;
  } while (pFVar15->Z < pFVar11->Z || pFVar15->Z == pFVar11->Z);
  uVar4 = pFVar11->Z;
  uVar5 = pFVar11->Index;
  pTVar2 = pFVar13[-1].OriginalVector;
  if (pFVar9 <= pFVar11) {
    fVar16 = pFVar9->Z;
    iVar8 = pFVar9->Index;
    pTVar3 = pFVar10[1].OriginalVector;
    pFVar9->Z = (float)uVar4;
    pFVar9->Index = uVar5;
    pFVar10[1].OriginalVector = pTVar2;
    pFVar11->Z = fVar16;
    pFVar11->Index = iVar8;
    pFVar13[-1].OriginalVector = pTVar3;
    goto LAB_144369810;
  }
  fVar16 = pFVar15->Z;
  iVar8 = pFVar15->Index;
  pTVar3 = pFVar15->OriginalVector;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar15->Z = (float)uVar4;
  pFVar15->Index = uVar5;
  pFVar15->OriginalVector = pTVar2;
  pFVar11->Z = fVar16;
  pFVar11->Index = iVar8;
  pFVar13[-1].OriginalVector = pTVar3;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar9 & 0xfffffffffffffff0U)) {
    if (pFVar9 < pFVar14) {
      *ppFVar12 = pFVar9;
      ppFVar12[1] = pFVar14;
      *(int *)(ppFVar12 + 2) = (int)local_338;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar11 <= pFVar15 + 1) goto LAB_1443698e5;
    pFVar14 = pFVar13 + -2;
    pFVar9 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar11) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar13 + -2;
      *(int *)(ppFVar12 + 2) = (int)local_338;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar14 <= pFVar9) goto LAB_1443698e5;
  }
  iVar8 = (int)((longlong)pFVar14 - (longlong)pFVar9 >> 4) + 1;
  pFVar15 = pFVar9;
  if ((int)local_338 == 0) goto LAB_1443698d4;
  goto LAB_1443697e0;
}

// `scalar_deleting_destructor' @ 14436ffe0

void * __thiscall
FLayoutUVMeshDescriptionView::_scalar_deleting_destructor_
          (FLayoutUVMeshDescriptionView *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FlattenedTexCoords).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemapVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMeshView_FLayoutUV__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144370040

void * __thiscall
FStaticMeshAttributes::_scalar_deleting_destructor_(FStaticMeshAttributes *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144370070

void * __thiscall
FUniqueUVMeshDescriptionView::_scalar_deleting_destructor_
          (FUniqueUVMeshDescriptionView *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UniqueVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemapTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMeshView_FLayoutUV__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443700d0

void * __thiscall
UStaticMeshDescription::_scalar_deleting_destructor_(UStaticMeshDescription *this,uint param_1)

{
  *(undefined ***)this = &___7UStaticMeshDescription__6B_;
  UMeshDescriptionBase::~UMeshDescriptionBase((UMeshDescriptionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// ClearNormalsAndTangentsData @ 144374190

void __cdecl ClearNormalsAndTangentsData(FMeshDescription *param_1,bool param_2,bool param_3)

{
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar1;
  TMeshAttributeArraySet<float> *this;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  FMeshElementContainer *pFVar7;
  TTuple<FName,FAttributesSetEntry> *pTVar8;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar9;
  TVector<float> *pTVar10;
  TMeshAttributeArrayBase<float> *this_00;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  TElementIDs local_res20;
  TVector<float> *local_90;
  float *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TConstIterator local_60;
  
  if ((param_2) || (param_3)) {
    pFVar7 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar7->Attributes,MeshAttribute::VertexInstance::Normal);
    puVar14 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar12 = puVar14;
    }
    iVar13 = 0;
    if ((((puVar12 == (undefined8 *)0x0) ||
         (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar12,
         (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
       ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
        ((int)pTVar1->_padding_ == 0)))) {
      local_90 = (TVector<float> *)0x0;
      iVar17 = iVar13;
    }
    else {
      pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
      local_90 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,0);
      iVar17 = (int)pTVar1->_padding_;
      if ((iVar17 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar7->Attributes,MeshAttribute::VertexInstance::Tangent);
    puVar12 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar12 = puVar14;
    }
    if ((((puVar12 == (undefined8 *)0x0) ||
         (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar12,
         (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
       ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
        ((int)pTVar1->_padding_ == 0)))) {
      pTVar10 = (TVector<float> *)0x0;
      iVar16 = iVar13;
    }
    else {
      pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
      pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,0);
      iVar16 = (int)pTVar1->_padding_;
      if ((iVar16 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar7->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    puVar12 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar12 = puVar14;
    }
    if ((((puVar12 == (undefined8 *)0x0) ||
         (this = (TMeshAttributeArraySet<float> *)*puVar12, (int)this->_padding_ != 3)) ||
        (*(int *)((longlong)&this->_padding_ + 4) != 1)) ||
       ((this == (TMeshAttributeArraySet<float> *)0x0 || ((int)this->_padding_ == 0)))) {
      local_88 = (float *)0x0;
    }
    else {
      this_00 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
      local_88 = TMeshAttributeArrayBase<float>::GetElementBase(this_00,0);
      iVar13 = (int)this->_padding_;
      if ((iVar13 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res20.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
    TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
              (&local_res20,(TConstIterator *)&local_80);
    TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_res20,&local_60);
    while ((uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
           local_80.CurrentBitIndex != local_60.Iterator.CurrentBitIndex ||
           (local_80.Array != local_60.Iterator.Array))) {
      uVar15 = 0xffffffff;
      if (local_80.CurrentBitIndex < (local_80.Array)->NumBits) {
        uVar15 = local_80.CurrentBitIndex;
      }
      uVar11 = ~uVar15 >> 0x1f;
      if (param_2) {
        uVar6 = 0;
        if ((int)uVar15 < iVar17) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined8 *)&local_90[(int)uVar15].field0_0x0 = uVar3;
        local_90[(int)uVar15].field0_0x0._s_0.Z = (float)uVar4;
      }
      if (param_3) {
        uVar6 = 0;
        if ((int)uVar15 < iVar13) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_88[(int)uVar15] = 0.0;
        uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar6 = 0;
        if ((int)uVar15 < iVar16) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined8 *)&pTVar10[(int)uVar15].field0_0x0 = uVar3;
        pTVar10[(int)uVar15].field0_0x0._s_0.Z = (float)uVar4;
      }
      local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
    }
  }
  return;
}

// ComputeTriangleCornerAngle @ 144375de0

float __cdecl
TriangleUtilities::ComputeTriangleCornerAngle
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar4 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar6 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar7 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
  if (__real_322bcc77 < fVar1) {
    fVar8 = __real_3f800000 / SQRT(fVar1);
    fVar1 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (__real_322bcc77 < fVar1) {
      fVar1 = __real_3f800000 / SQRT(fVar1);
      fVar2 = fVar1 * fVar6 * fVar8 * fVar3 + fVar1 * fVar5 * fVar8 * fVar2 +
              fVar1 * fVar7 * fVar8 * fVar4;
      fVar1 = __real_bf800000;
      if ((__real_bf800000 <= fVar2) && (fVar1 = fVar2, __real_3f800000 <= fVar2)) {
        fVar1 = __real_3f800000;
      }
      fVar1 = acosf(fVar1);
      return fVar1;
    }
  }
  return 0.0;
}

// EmptyLinkFunctionForGeneratedCodeStaticMeshDescription @ 14437be00

void __cdecl EmptyLinkFunctionForGeneratedCodeStaticMeshDescription(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStaticMeshDescription_init @ 14437be10

void __cdecl EmptyLinkFunctionForGeneratedCodeStaticMeshDescription_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUVMapSettings @ 14437be20

void __cdecl EmptyLinkFunctionForGeneratedCodeUVMapSettings(void)

{
  return;
}

// FillMeshDescriptionVertexPositionNoDuplicate @ 14437be30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FillMeshDescriptionVertexPositionNoDuplicate
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          FMeshDescription *param_2,TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  FMeshDescription *pFVar11;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  FMeshElementContainer *pFVar17;
  FMeshElementContainer *pFVar18;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulong64 uVar27;
  FScriptContainerElement *pFVar28;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar29;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  ulonglong uVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  FIdentityFunctor local_198 [4];
  uint local_194;
  longlong local_190;
  ForAnyElementType local_188;
  int local_180 [3];
  int local_174;
  uint local_170;
  int local_16c;
  uint local_168;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *local_160;
  uint local_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_150;
  undefined4 local_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  FMeshDescription *local_130;
  ulong64 local_128;
  undefined4 local_120;
  int local_11c;
  int *local_118;
  FScriptContainerElement *local_110;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_108;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  undefined1 local_c8 [32];
  ForElementType<unsigned_int> local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar14 = param_1->ArrayNum;
  uVar27 = (ulong64)(int)uVar14;
  uVar25 = 0;
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(param_2->VertexPositions).ArrayPtr
  ;
  lVar34 = 1;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (ForElementType<unsigned_int>)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = -1;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_138 = 1;
  local_168 = uVar14;
  local_160 = param_3;
  local_130 = param_2;
  local_108 = this_00;
  local_100 = param_1;
  if (uVar14 != 0) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar27);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_c8,uVar14);
    uVar23 = 1;
    if (3 < uVar14) {
      uVar30 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_120 = (undefined4)lVar21;
      uVar23 = 1 << ((byte)lVar21 & 0x1f);
    }
    if ((local_80 == 0) || ((int)local_80 < (int)uVar23)) {
      local_80 = uVar23;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
      }
      if (uVar23 != 0) {
        uVar35 = uVar23;
        if (uVar23 < 2) {
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            uVar35 = 0;
            goto LAB_14437bf34;
          }
        }
        else {
LAB_14437bf34:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar35,4)
          ;
        }
        if (0 < (int)uVar23) {
          uVar31 = (ulonglong)uVar23;
          uVar30 = uVar25;
          do {
            FVar20.Data = local_90;
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_88.Data;
            }
            uVar16 = uVar30 & (longlong)(int)uVar23 - 1U;
            uVar30 = uVar30 + 1;
            *(undefined4 *)(FVar20.Data + uVar16 * 4) = 0xffffffff;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
      if (local_80 != 0) {
        pTStack_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
        local_158 = 0;
        uStack_154 = 1;
        uStack_144 = 0;
        uStack_140 = 0;
        uVar30 = uVar25;
        if (local_a0 != 0) {
          FVar32 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
          if (local_a8 != (ForElementType<unsigned_int>)0x0) {
            FVar32 = local_a8;
          }
          uVar23 = *(uint *)FVar32;
          uVar31 = uVar25;
          while (uVar23 == 0) {
            uStack_140 = (int)uVar31 + 0x20;
            uVar31 = (ulonglong)uStack_140;
            iVar15 = (int)uVar30;
            local_158 = iVar15 + 1;
            uVar30 = (ulonglong)local_158;
            if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_158)
            goto LAB_14437c02d;
            uVar23 = ((uint *)((longlong)FVar32 + 4))[iVar15];
          }
          uStack_154 = -uVar23 & uVar23;
          uVar30 = (ulonglong)uStack_154 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_11c = (int)lVar21;
          uStack_144 = local_11c + -1 + uStack_140;
          uVar30 = (ulonglong)uStack_144;
          if ((int)local_a0 < (int)uStack_144) {
LAB_14437c02d:
            uVar30 = (ulonglong)local_a0;
            uStack_144 = local_a0;
          }
        }
        local_148 = 0xffffffff;
        local_f8 = (longlong *)local_c8;
        local_f0._padding_ = CONCAT44(uStack_154,local_158);
        local_f0.CurrentBitIndex = uStack_144;
        local_f0.UnvisitedBitMask = 0xffffffff;
        local_f0._28_4_ = uStack_13c;
        local_f0.BaseBitIndex = uStack_140;
        local_f0.Array = pTStack_150;
        if ((int)uVar30 < (int)local_a0) {
          do {
            lVar21 = *local_f8;
            lVar33 = (longlong)(int)uVar30 * 0x10;
            uVar23 = local_80 - 1 & *(uint *)(lVar33 + lVar21);
            *(uint *)(lVar33 + 0xc + lVar21) = uVar23;
            FVar20.Data = local_90;
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_88.Data;
            }
            uVar31 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar23;
            *(undefined4 *)(lVar33 + 8 + lVar21) = *(undefined4 *)(FVar20.Data + uVar31 * 4);
            *(int *)(FVar20.Data + uVar31 * 4) = (int)uVar30;
            local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
            uVar30 = (ulonglong)(uint)local_f0.CurrentBitIndex;
          } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
          goto LAB_14437c0d0;
        }
      }
    }
  }
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
LAB_14437c0d0:
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_128 = uVar27;
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
    fVar10 = __real_3ebd70a4;
    fVar9 = __real_3ea8f5c3;
    fVar5 = __real_3e99999a;
    uVar30 = uVar25;
    do {
      uVar23 = (uint)uVar25;
      uVar14 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar14 = ~uVar23 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar28 = (param_1->AllocatorInstance).Data + uVar30;
      if ((int)local_1a0 == local_1a0._4_4_) {
        local_1a0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_1a8,(int *)((longlong)&local_1a0 + 4));
      }
      lVar21 = (longlong)(int)local_1a0;
      uVar30 = uVar30 + 0xc;
      local_1a0._0_4_ = (int)local_1a0 + 1;
      fVar1 = *(float *)(pFVar28 + 4);
      fVar2 = *(float *)&pFVar28->field_0x0;
      fVar3 = *(float *)(pFVar28 + 8);
      *(uint *)(local_1a8.Data + lVar21 * 0x10 + 4) = uVar23;
      uVar25 = (ulonglong)(uVar23 + 1);
      *(FScriptContainerElement **)(local_1a8.Data + lVar21 * 0x10 + 8) = pFVar28;
      *(float *)&local_1a8.Data[lVar21 * 0x10].field_0x0 =
           fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar10;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  uVar35 = 0;
  AlgoImpl::
  IntroSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_>
            ((FIndexAndZ *)local_1a8.Data,(int)local_1a0,local_198[0],(FCompareIndexAndZ *)local_198
            );
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_322bcc77;
  uVar23 = 0;
  local_194 = 0;
  if (0 < (int)local_1a0) {
    local_190 = 0;
    pFVar28 = (FScriptContainerElement *)local_c8._0_8_;
    FVar20.Data = local_88.Data;
    iVar15 = (int)local_1a0;
    uVar23 = uVar35;
    do {
      lVar21 = local_190;
      local_170 = ~uVar35 >> 0x1f;
      uVar26 = 0;
      if ((int)uVar35 < iVar15) {
        uVar26 = local_170;
      }
      if ((uVar26 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pFVar28 = (FScriptContainerElement *)local_c8._0_8_, FVar20.Data = local_88.Data,
         iVar15 = (int)local_1a0, bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_180[2] = *(int *)(local_1a8.Data + lVar21 + 4);
      if (local_c8._8_4_ != local_94) {
        pFVar22 = local_90;
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          pFVar22 = FVar20.Data;
        }
        for (iVar4 = *(int *)(pFVar22 + (ulonglong)(local_180[2] & local_80 - 1) * 4); iVar4 != -1;
            iVar4 = *(int *)(pFVar28 + (longlong)iVar4 * 0x10 + 8)) {
          if (*(uint *)(pFVar28 + (longlong)iVar4 * 0x10) == local_180[2]) goto LAB_14437c68a;
        }
        pFVar22 = local_90;
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          pFVar22 = FVar20.Data;
        }
        uVar26 = *(uint *)(pFVar22 + (ulonglong)(local_80 - 1 & local_180[2]) * 4);
        while (uVar26 != 0xffffffff) {
          pFVar22 = pFVar28 + (longlong)(int)uVar26 * 0x10;
          if (*(uint *)pFVar22 == local_180[2]) {
            if (pFVar22 != (FScriptContainerElement *)0x0) goto LAB_14437c3b6;
            break;
          }
          uVar26 = *(uint *)(pFVar22 + 8);
        }
      }
      local_118 = local_180 + 2;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_c8,(uint)&local_174,
                 (TKeyInitializer<int_const_&> *)(ulonglong)(uint)local_180[2],(bool *)&local_118);
      pFVar22 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)local_174 * 0x10);
LAB_14437c3b6:
      uVar26 = local_170;
      *(uint *)(pFVar22 + 4) = uVar23;
      uVar36 = uVar35 + 1;
      iVar15 = (int)local_1a0;
      lVar34 = lVar21;
      if ((int)uVar36 < (int)local_1a0) {
        do {
          uVar24 = ~uVar36 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar36 < iVar15) {
            uVar23 = uVar24;
          }
          if ((uVar23 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar15 = (int)local_1a0, bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar20.Data = local_1a8.Data;
          uVar23 = 0;
          if ((int)uVar35 < iVar15) {
            uVar23 = uVar26;
          }
          if ((uVar23 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar15 = (int)local_1a0, bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar21 = local_190;
          uVar23 = local_194;
          if (fVar5 < (float)((uint)(*(float *)(FVar20.Data + lVar34 + 0x10) -
                                    *(float *)(local_1a8.Data + local_190)) & uVar14)) break;
          uVar23 = 0;
          if ((int)uVar35 < iVar15) {
            uVar23 = uVar26;
          }
          if ((uVar23 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar15 = (int)local_1a0, bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pfVar6 = *(float **)(local_1a8.Data + lVar21 + 8);
          uVar23 = 0;
          if ((int)uVar36 < iVar15) {
            uVar23 = uVar24;
          }
          if ((uVar23 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar15 = (int)local_1a0, bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pfVar7 = *(float **)(local_1a8.Data + lVar34 + 0x18);
          if ((((float)((uint)(*pfVar6 - *pfVar7) & uVar14) <= fVar5) &&
              ((float)((uint)(pfVar6[1] - pfVar7[1]) & uVar14) <= fVar5)) &&
             ((float)((uint)(pfVar6[2] - pfVar7[2]) & uVar14) <= fVar5)) {
            uVar23 = 0;
            if ((int)uVar36 < iVar15) {
              uVar23 = uVar24;
            }
            if ((uVar23 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar23 = *(uint *)(local_1a8.Data + lVar34 + 0x14);
            if (local_c8._8_4_ != local_94) {
              FVar20.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_88.Data;
              }
              uVar24 = *(uint *)(FVar20.Data + (ulonglong)(local_80 - 1 & uVar23) * 4);
              while (uVar24 != 0xffffffff) {
                pFVar28 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)(int)uVar24 * 0x10)
                ;
                if (*(uint *)pFVar28 == uVar23) {
                  if (pFVar28 != (FScriptContainerElement *)0x0) goto LAB_14437c64a;
                  break;
                }
                uVar24 = *(uint *)(pFVar28 + 8);
              }
            }
            local_110 = local_1a8.Data + lVar34 + 0x14;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            EmplaceByHash<TKeyInitializer<int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_c8,(uint)&local_16c,
                       (TKeyInitializer<int_const_&> *)(ulonglong)uVar23,(bool *)&local_110);
            pFVar28 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)local_16c * 0x10);
LAB_14437c64a:
            *(uint *)(pFVar28 + 4) = local_194;
            iVar15 = (int)local_1a0;
          }
          uVar36 = uVar36 + 1;
          lVar21 = local_190;
          uVar23 = local_194;
          lVar34 = lVar34 + 0x10;
        } while ((int)uVar36 < iVar15);
      }
      local_194 = uVar23 + 1;
      pFVar28 = (FScriptContainerElement *)local_c8._0_8_;
      FVar20.Data = local_88.Data;
      lVar34 = local_138;
      uVar23 = local_194;
LAB_14437c68a:
      lVar34 = lVar34 + 1;
      local_190 = lVar21 + 0x10;
      uVar35 = uVar35 + 1;
      this_00 = local_108;
      local_138 = lVar34;
    } while ((int)uVar35 < iVar15);
  }
  uVar30 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,local_168,&local_160->AllocatorInstance,&local_160->ArrayNum,&local_160->ArrayMax);
  pFVar11 = local_130;
  pFVar17 = FMeshElementChannels::Get(local_130->VertexElements,0);
  pFVar18 = FMeshElementChannels::Get(pFVar11->VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar17->BitArray,((pFVar18->BitArray).NumBits - pFVar18->NumHoles) + uVar23);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180[0] = 0;
  local_180[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar23,&local_188,local_180,local_180 + 1);
  uVar25 = uVar30;
  if (0 < (int)uVar23) {
    do {
      uVar35 = (uint)uVar30;
      uVar14 = 0;
      if ((int)uVar35 < local_180[0]) {
        uVar14 = ~uVar35 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar30 = (ulonglong)(uVar35 + 1);
      *(undefined4 *)(local_188.Data + uVar25) = 0xffffffff;
      uVar25 = uVar25 + 4;
    } while ((int)(uVar35 + 1) < (int)uVar23);
  }
  uVar25 = 0;
  if (0 < (longlong)local_128) {
    lVar34 = 0;
    local_190 = 0;
    do {
      uVar14 = (uint)uVar25;
      if (local_c8._8_4_ != local_94) {
        FVar20.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_88.Data;
        }
        uVar23 = *(uint *)(FVar20.Data + (local_80 - 1 & uVar25) * 4);
        while (uVar23 != 0xffffffff) {
          pFVar28 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)(int)uVar23 * 0x10);
          if (*(uint *)pFVar28 == uVar14) {
            if (pFVar28 != (FScriptContainerElement *)0x0) goto LAB_14437c843;
            goto LAB_14437c81d;
          }
          uVar23 = *(uint *)(pFVar28 + 8);
        }
      }
      pFVar28 = (FScriptContainerElement *)0x0;
LAB_14437c81d:
      bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14437c843:
      uVar23 = *(uint *)(pFVar28 + 4);
      lVar21 = (longlong)(int)uVar23;
      uVar26 = ~uVar23 >> 0x1f;
      uVar35 = 0;
      if ((int)uVar23 < local_180[0]) {
        uVar35 = uVar26;
      }
      if (uVar35 == 0) {
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(int *)(local_188.Data + lVar21 * 4) == -1) {
        pFVar17 = FMeshElementChannels::Get(local_130->VertexElements,0);
        iVar15 = FMeshElementContainer::Add(pFVar17);
        uVar35 = 0;
        if ((int)uVar23 < local_180[0]) {
          uVar35 = uVar26;
        }
        if ((uVar35 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar12 = local_100;
        *(int *)(local_188.Data + lVar21 * 4) = iVar15;
        uVar23 = 0;
        if ((int)uVar14 < local_100->ArrayNum) {
          uVar23 = ~uVar14 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar21 = local_190;
        pFVar22 = (pTVar12->AllocatorInstance).Data;
        pFVar28 = pFVar22 + local_190;
        fVar9 = *(float *)pFVar28;
        fVar10 = *(float *)(pFVar28 + 4);
        fVar5 = *(float *)(pFVar22 + local_190 + 8);
        this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
        pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this,iVar15);
        pTVar29 = local_160;
        (pTVar19->field0_0x0)._s_0.X = fVar9;
        (pTVar19->field0_0x0)._s_0.Y = fVar10;
        (pTVar19->field0_0x0)._s_0.Z = fVar5;
        uVar23 = 0;
        if ((int)uVar14 < local_160->ArrayNum) {
          uVar23 = ~uVar14 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        uVar35 = 0;
        if ((int)uVar23 < local_180[0]) {
          uVar35 = uVar26;
        }
        if ((uVar35 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar29 = local_160;
        iVar15 = *(int *)(local_188.Data + lVar21 * 4);
        uVar23 = 0;
        if ((int)uVar14 < local_160->ArrayNum) {
          uVar23 = ~uVar14 >> 0x1f;
        }
        lVar21 = local_190;
        if ((uVar23 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), lVar21 = local_190, bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_190 = lVar21 + 0xc;
      uVar25 = (ulonglong)(uVar14 + 1);
      *(int *)((pTVar29->AllocatorInstance).Data + lVar34 * 4) = iVar15;
      lVar34 = lVar34 + 1;
    } while (lVar34 < (longlong)local_128);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if ((FIndexAndZ *)local_1a8.Data != (FIndexAndZ *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  local_80 = 0;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return;
}

// GatherUniqueTriangles @ 14437dbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
GatherUniqueTriangles
          (FMeshDescription *param_1,bool param_2,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_5)

{
  TVector2<float> *pTVar1;
  TVector4<float> *pTVar2;
  FVertexInstanceID FVar3;
  FPolygonGroupID FVar4;
  code *pcVar5;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  FMeshElementContainer *pFVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  ulonglong uVar11;
  FPolygonGroupID *pFVar12;
  TArrayView<FVertexInstanceID,int> *pTVar13;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float> *pTVar14;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  TVector4<float> *pTVar15;
  FPolygonGroupID *pFVar16;
  ForAnyElementType FVar17;
  FVertexInstanceID *pFVar18;
  longlong lVar19;
  uint uVar20;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar21;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  ForElementType<unsigned_int> FVar26;
  int iVar27;
  FTriangleID *pFVar28;
  uint uVar29;
  uint uVar30;
  FPolygonGroupID FVar31;
  uint uVar32;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar33;
  FMeshDescription *pFVar34;
  undefined1 auStackY_218 [32];
  FPolygonGroupID local_1c4;
  FPolygonGroupID local_1c0 [2];
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *local_1b8;
  FPolygonGroupID local_1ac;
  FVertexInstanceID *local_1a8;
  int local_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_198;
  undefined4 local_190;
  int iStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TElementIDs local_180;
  FVertexInstanceID *local_178;
  FVertexInstanceID *local_170;
  FMeshDescription *local_168;
  undefined4 local_160;
  int local_15c;
  TPairInitializer<unsigned_int_&&,FTriangleID_const_&> local_158;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *local_148;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *local_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  FPolygonGroupID *local_f0;
  FPolygonGroupID *local_e8;
  TConstIterator local_e0;
  TArrayView<FVertexInstanceID,int> local_c0;
  TArrayView<FVertexID,int> local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1b8 = param_5;
  local_168 = param_1;
  local_148 = param_3;
  local_140 = param_4;
  pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar9->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pTVar33 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  pTVar21 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar21 = pTVar33;
  }
  if (((pTVar21 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar21 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar21->_padding_,
      (int)pTVar21->_padding_ != 2)) || (*(int *)((longlong)&pTVar21->_padding_ + 4) != 1)) {
    pTVar21 = pTVar33;
  }
  pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar9->Attributes,MeshAttribute::VertexInstance::Color);
  pTVar22 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar22 = pTVar33;
  }
  if (((pTVar22 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar22 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar22->_padding_,
      (int)pTVar22->_padding_ != 0)) || (*(int *)((longlong)&pTVar22->_padding_ + 4) != 1)) {
    pTVar22 = pTVar33;
  }
  pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  uVar32 = (pFVar9->BitArray).NumBits - pFVar9->NumHoles;
  pFVar9 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  uVar29 = (pFVar9->BitArray).NumBits - pFVar9->NumHoles;
  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
  }
  if (param_3->ArrayMax < (int)uVar29) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar29,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((!param_2) || (uVar29 == 0)) goto LAB_14437dfc5;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar29);
  uVar20 = 1;
  if (3 < uVar29) {
    uVar23 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_160 = (undefined4)lVar19;
    uVar20 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((local_50 != 0) && (param_5 = local_1b8, (int)uVar20 <= (int)local_50)) goto LAB_14437dfc5;
  local_50 = uVar20;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar20 != 0) {
    uVar30 = uVar20;
    if (uVar20 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar30 = 0;
        goto LAB_14437ddf1;
      }
    }
    else {
LAB_14437ddf1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar30,4);
    }
    if (0 < (int)uVar20) {
      uVar24 = (ulonglong)uVar20;
      uVar23 = 0;
      do {
        FVar17.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_58.Data;
        }
        uVar11 = uVar23 & (longlong)(int)uVar20 - 1U;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar17.Data + uVar11 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  param_5 = local_1b8;
  if (local_50 != 0) {
    pTStack_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_1a0 = 0;
    uStack_19c = 1;
    iStack_18c = 0;
    iStack_188 = 0;
    if (local_70 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_78;
      }
      uVar20 = *(uint *)FVar26;
      iStack_188 = 0;
      local_1a0 = 0;
      while (uVar20 == 0) {
        iStack_188 = iStack_188 + 0x20;
        lVar19 = (longlong)local_1a0;
        local_1a0 = local_1a0 + 1;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1a0)
        goto LAB_14437df1f;
        uVar20 = ((uint *)((longlong)FVar26 + 4))[lVar19];
      }
      uStack_19c = -uVar20 & uVar20;
      uVar23 = (ulonglong)uStack_19c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_15c = (int)lVar19;
      iStack_18c = local_15c + -1 + iStack_188;
      if (local_70 < iStack_18c) {
LAB_14437df1f:
        iStack_18c = local_70;
      }
    }
    local_190 = 0xffffffff;
    local_138 = (longlong *)local_98;
    local_130._padding_ = CONCAT44(uStack_19c,local_1a0);
    local_130.CurrentBitIndex = iStack_18c;
    local_130.UnvisitedBitMask = 0xffffffff;
    local_130._28_4_ = uStack_184;
    local_130.BaseBitIndex = iStack_188;
    iVar27 = iStack_18c;
    local_130.Array = pTStack_198;
    if (iStack_18c < local_70) {
      do {
        puVar25 = (uint *)((longlong)iVar27 * 0x10 + *local_138);
        uVar20 = local_50 - 1 & *puVar25;
        puVar25[3] = uVar20;
        FVar17.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_58.Data;
        }
        uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
        puVar25[2] = *(uint *)(FVar17.Data + uVar23 * 4);
        *(int *)(FVar17.Data + uVar23 * 4) = iVar27;
        local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
        param_5 = local_1b8;
        iVar27 = local_130.CurrentBitIndex;
      } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
    }
  }
LAB_14437dfc5:
  if (param_4 != (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
    }
    if (param_4->ArrayMax < (int)uVar32) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar32,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
    }
  }
  if ((param_5 != (TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_5->ArrayMax < (int)uVar29)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar29,&param_5->AllocatorInstance,param_5->ArrayNum,&param_5->ArrayMax);
  }
  pFVar34 = local_168;
  local_180.Array = &FMeshElementChannels::Get(local_168->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_180,(TConstIterator *)&local_110);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_180,&local_e0);
  do {
    if ((local_110.CurrentBitIndex == local_e0.Iterator.CurrentBitIndex) &&
       (local_110.Array == local_e0.Iterator.Array)) {
      if ((param_2) && (local_98._8_4_ - local_64 != param_3->ArrayNum)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTriangleID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTriangleID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTriangleID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return bVar7;
    }
    local_1c4 = (FPolygonGroupID)0xffffffff;
    if (local_110.CurrentBitIndex < (local_110.Array)->NumBits) {
      local_1c4 = (FPolygonGroupID)local_110.CurrentBitIndex;
    }
    pFVar12 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                        (&pFVar34->TrianglePolygonGroups,(int)local_1c4);
    FVar31 = *pFVar12;
    pTVar13 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&pFVar34->TriangleVertexInstances,&local_c0,(int)local_1c4);
    local_170 = pTVar13->DataPtr;
    iVar27 = pTVar13->ArrayNum;
    pFVar28 = (FTriangleID *)(longlong)iVar27;
    TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
              (&pFVar34->TriangleVertices,&local_b0,(int)local_1c4);
    local_1c0[0] = local_1c4;
    local_158.Value = pFVar28;
    if (param_2) {
      local_1a8 = local_170;
      pFVar18 = local_170 + (longlong)pFVar28;
      local_178 = pFVar18;
      if (local_170 != pFVar18) {
        do {
          iVar27 = 0;
          FVar3 = *local_1a8;
          if (0 < ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)&pTVar21->ArrayForChannels)->ArrayNum) {
            do {
              this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                               ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar21,iVar27
                               );
              pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                  (this,(int)FVar3);
              pTVar1 = pTVar14 + 1;
              pFVar18 = local_178;
              for (; local_178 = pFVar18, pTVar14 != pTVar1; pTVar14 = pTVar14 + 1) {
                uVar29 = FCrc::MemCrc_DEPRECATED(pTVar14,8,0);
                uVar20 = (int)FVar31 - uVar29 ^ uVar29 >> 0xd;
                uVar32 = (-0x61c88647 - uVar29) - uVar20 ^ uVar20 << 8;
                uVar30 = (uVar29 - uVar32) - uVar20 ^ uVar32 >> 0xd;
                uVar29 = (uVar20 - uVar30) - uVar32 ^ uVar30 >> 0xc;
                uVar32 = (uVar32 - uVar29) - uVar30 ^ uVar29 << 0x10;
                uVar20 = (uVar30 - uVar32) - uVar29 ^ uVar32 >> 5;
                uVar29 = (uVar29 - uVar20) - uVar32 ^ uVar20 >> 3;
                uVar32 = (uVar32 - uVar29) - uVar20 ^ uVar29 << 10;
                FVar31 = (FPolygonGroupID)((uVar20 - uVar32) - uVar29 ^ uVar32 >> 0xf);
                pFVar18 = local_178;
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 < ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                                *)&pTVar21->ArrayForChannels)->ArrayNum);
          }
          iVar27 = 0;
          FVar3 = *local_1a8;
          if (0 < (pTVar22->ArrayForChannels).ArrayNum) {
            do {
              this_00 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                                  (pTVar22,iVar27);
              pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                                  (this_00,(int)FVar3);
              pTVar2 = pTVar15 + 1;
              pFVar18 = local_178;
              for (; local_178 = pFVar18, pTVar15 != pTVar2; pTVar15 = pTVar15 + 1) {
                uVar29 = FCrc::MemCrc_DEPRECATED(pTVar15,0x10,0);
                uVar20 = (int)FVar31 - uVar29 ^ uVar29 >> 0xd;
                uVar32 = (-0x61c88647 - uVar20) - uVar29 ^ uVar20 << 8;
                uVar30 = (uVar29 - uVar32) - uVar20 ^ uVar32 >> 0xd;
                uVar29 = (uVar20 - uVar30) - uVar32 ^ uVar30 >> 0xc;
                uVar32 = (uVar32 - uVar29) - uVar30 ^ uVar29 << 0x10;
                uVar20 = (uVar30 - uVar32) - uVar29 ^ uVar32 >> 5;
                uVar29 = (uVar29 - uVar20) - uVar32 ^ uVar20 >> 3;
                uVar32 = (uVar32 - uVar29) - uVar20 ^ uVar29 << 10;
                FVar31 = (FPolygonGroupID)((uVar20 - uVar32) - uVar29 ^ uVar32 >> 0xf);
                pFVar18 = local_178;
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 < (pTVar22->ArrayForChannels).ArrayNum);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 != pFVar18);
        iVar27 = (int)local_158.Value;
        param_5 = local_1b8;
        param_3 = local_148;
      }
      pFVar28 = local_158.Value;
      if (local_98._8_4_ != local_64) {
        FVar17.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_58.Data;
        }
        FVar4 = *(FPolygonGroupID *)(FVar17.Data + (ulonglong)(local_50 - 1 & (uint)FVar31) * 4);
        while (FVar4 != (FPolygonGroupID)0xffffffff) {
          pFVar12 = (FPolygonGroupID *)(local_98._0_8_ + (longlong)(int)FVar4 * 0x10);
          if (*pFVar12 == FVar31) {
            pFVar16 = pFVar12 + 1;
            if (pFVar12 == (FPolygonGroupID *)0x0) {
              pFVar16 = (FPolygonGroupID *)0x0;
            }
            if (pFVar16 != (FPolygonGroupID *)0x0) {
              local_1c0[0] = *pFVar16;
              if (param_5 != (TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)0x0) {
                pFVar12 = (FPolygonGroupID *)(param_5->AllocatorInstance).Data;
                if (((pFVar12 <= &local_1c4) && (&local_1c4 < pFVar12 + param_5->ArrayMax)) &&
                   (bVar7 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                iVar27 = param_5->ArrayNum;
                if (iVar27 == param_5->ArrayMax) {
                  iVar27 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
                }
                param_5->ArrayNum = iVar27 + 1;
                *(FPolygonGroupID *)((param_5->AllocatorInstance).Data + (longlong)iVar27 * 4) =
                     local_1c4;
              }
              goto LAB_14437e505;
            }
            break;
          }
          FVar4 = pFVar12[2];
        }
      }
      local_f0 = &local_1ac;
      local_e8 = &local_1c4;
      local_1ac = FVar31;
      TSet<TTuple<unsigned_int,FTriangleID>,TDefaultMapHashableKeyFuncs<unsigned_int,FTriangleID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&&,FTriangleID_const_&>_>
                ((TSet<TTuple<unsigned_int,FTriangleID>,TDefaultMapHashableKeyFuncs<unsigned_int,FTriangleID,0>,FDefaultSetAllocator>
                  *)local_98,&local_158,(bool *)&local_f0);
    }
    pTVar6 = local_140;
    if (local_140 != (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
      if (iVar27 < 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9a9,L"Invalid range size: %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      else if (iVar27 == 0) goto LAB_14437e505;
      iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar27,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax)
      ;
      memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar27 * 4,local_170,(longlong)pFVar28 * 4
            );
    }
LAB_14437e505:
    pFVar12 = (FPolygonGroupID *)(param_3->AllocatorInstance).Data;
    if (((pFVar12 <= local_1c0) && (local_1c0 < pFVar12 + param_3->ArrayMax)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar27 = param_3->ArrayNum;
    if (iVar27 == param_3->ArrayMax) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar27 + 1;
    *(FPolygonGroupID *)((param_3->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_1c0[0];
    local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
    pFVar34 = local_168;
  } while( true );
}

// GetTriangleTangentsAndNormalsWithNoUVs @ 1443817c0

TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_> * __cdecl
GetTriangleTangentsAndNormalsWithNoUVs
          (TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_>
           *__return_storage_ptr__,float param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  undefined8 uVar1;
  TVector<float> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_98;
  float fStack_94;
  
  pTVar2 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,0);
  uVar1 = *(undefined8 *)&pTVar2->field0_0x0;
  fVar10 = (float)uVar1;
  fVar4 = (pTVar2->field0_0x0)._s_0.Z;
  pTVar2 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,1);
  fVar9 = (pTVar2->field0_0x0)._s_0.X - fVar10;
  fStack_94 = (float)((ulonglong)uVar1 >> 0x20);
  fVar8 = (pTVar2->field0_0x0)._s_0.Y - fStack_94;
  fVar7 = (pTVar2->field0_0x0)._s_0.Z - fVar4;
  pTVar2 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,2);
  fStack_94 = (pTVar2->field0_0x0)._s_0.Y - fStack_94;
  fVar4 = (pTVar2->field0_0x0)._s_0.Z - fVar4;
  fVar10 = (pTVar2->field0_0x0)._s_0.X - fVar10;
  local_98 = fStack_94 * fVar7 - fVar4 * fVar8;
  fVar7 = fVar4 * fVar9 - fVar10 * fVar7;
  uVar11 = fVar10 * fVar8 - fStack_94 * fVar9;
  fVar4 = fVar7 * fVar7 + local_98 * local_98 + (float)uVar11 * (float)uVar11;
  if (fVar4 != __real_3f800000) {
    fVar10 = param_1 * param_1;
    if (param_1 * param_1 <= __real_00800000) {
      fVar10 = __real_00800000;
    }
    if (fVar10 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      local_98 = local_98 * fVar4;
      fVar7 = fVar7 * fVar4;
      uVar11 = (float)uVar11 * fVar4;
    }
    else {
      fVar7 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_98 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  fVar4 = fVar7 * fVar7 + local_98 * local_98 + (float)uVar11 * (float)uVar11;
  if (fVar4 <= param_1) {
    *(undefined8 *)__return_storage_ptr__ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)&__return_storage_ptr__->field_0x8 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field_0xc =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)&__return_storage_ptr__->field_0x14 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)&__return_storage_ptr__->field_0x20 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    fVar4 = __real_3f800000 / SQRT(fVar4);
    local_98 = fVar4 * local_98;
    fVar10 = fVar4 * (float)uVar11;
    fVar4 = fVar4 * fVar7;
    if (0.0 <= fVar10) {
      fVar8 = (float)((uint)local_98 ^ __xmm_80000000800000008000000080000000);
      fVar7 = __real_3f800000 / (fVar10 + __real_3f800000);
      fVar9 = local_98 * local_98 * fVar7;
      fVar5 = (float)((uint)(fVar4 * local_98 * fVar7) ^ __xmm_80000000800000008000000080000000);
      fVar3 = __real_3f800000 - fVar4 * fVar4 * fVar7;
      fVar7 = fVar5;
    }
    else {
      fVar9 = __real_3f800000 / (__real_3f800000 - fVar10);
      fVar7 = fVar4 * local_98 * fVar9;
      fVar3 = fVar4 * fVar4 * fVar9 - __real_3f800000;
      fVar9 = local_98 * local_98 * fVar9;
      fVar5 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
      fVar8 = local_98;
    }
    fVar9 = __real_3f800000 - fVar9;
    uVar6 = (uint)fVar4 ^ __xmm_80000000800000008000000080000000;
    *(ulonglong *)__return_storage_ptr__ = CONCAT44(fVar4,local_98);
    *(float *)&__return_storage_ptr__->field_0x8 = fVar10;
    *(ulonglong *)&__return_storage_ptr__->field_0xc = CONCAT44(fVar5,fVar9);
    *(float *)&__return_storage_ptr__->field_0x14 = fVar8;
    *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(fVar3,fVar7);
    *(uint *)&__return_storage_ptr__->field_0x20 = uVar6;
  }
  return __return_storage_ptr__;
}

// GetTriangleTangentsAndNormalsWithUV @ 144381b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_> * __cdecl
GetTriangleTangentsAndNormalsWithUV
          (TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_>
           *__return_storage_ptr__,float param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TVector<float> *pTVar9;
  TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  longlong local_280;
  float local_278;
  float fStack_274;
  undefined4 local_270;
  float local_268;
  float fStack_264;
  undefined4 local_260;
  float local_258;
  float local_254;
  float local_250;
  float fStack_24c;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230;
  float local_22c;
  float local_228;
  undefined8 local_220;
  TMatrix<float> local_218;
  TMatrix<float> local_1d8;
  TMatrix<float> local_198;
  TMatrix<float> local_158;
  TMatrix<float> local_118;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  fVar14 = param_1 * param_1;
  if (param_1 * param_1 <= __real_00800000) {
    fVar14 = __real_00800000;
  }
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,0);
  uVar19 = *(undefined8 *)&pTVar9->field0_0x0;
  fVar17 = (pTVar9->field0_0x0)._s_0.Z;
  local_220 = uVar19;
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,1);
  fStack_264 = (float)((ulonglong)uVar19 >> 0x20);
  fVar21 = fStack_264;
  fVar20 = (pTVar9->field0_0x0)._s_0.Z - fVar17;
  fVar26 = (pTVar9->field0_0x0)._s_0.X - (float)uVar19;
  local_228 = fStack_264;
  fVar28 = (pTVar9->field0_0x0)._s_0.Y - fStack_264;
  _local_268 = uVar19;
  local_230 = fVar20;
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,2);
  local_258 = (pTVar9->field0_0x0)._s_0.Y - fVar21;
  fVar21 = (pTVar9->field0_0x0)._s_0.X - (float)uVar19;
  local_254 = (pTVar9->field0_0x0)._s_0.Z - fVar17;
  local_22c = fVar21;
  if (param_3->ArrayNum < 1) {
    local_288 = 0;
    local_280 = (longlong)param_3->ArrayNum;
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_>
                 *)(*pcVar3)();
      return pTVar10;
    }
  }
  fVar24 = (float)(param_3->DataPtr->field0_0x0)._s_0.X;
  fVar25 = (float)(param_3->DataPtr->field0_0x0)._s_0.Y;
  if (param_3->ArrayNum < 2) {
    local_288 = 1;
    local_280 = (longlong)param_3->ArrayNum;
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_>
                 *)(*pcVar3)();
      return pTVar10;
    }
  }
  dVar1 = param_3->DataPtr[1].field0_0x0._s_0.X;
  dVar2 = param_3->DataPtr[1].field0_0x0._s_0.Y;
  if (param_3->ArrayNum < 3) {
    local_288 = 2;
    local_280 = (longlong)param_3->ArrayNum;
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_>
                 *)(*pcVar3)();
      return pTVar10;
    }
  }
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar15 = __real_3f800000;
  local_1d8.M[1][0] = (float)param_3->DataPtr[2].field0_0x0._s_0.X - fVar24;
  local_240 = CONCAT44(local_240._4_4_,local_1d8.M[1][0]);
  local_1d8.M[1][1] = (float)param_3->DataPtr[2].field0_0x0._s_0.Y - fVar25;
  local_238 = CONCAT44(local_238._4_4_,local_1d8.M[1][1]);
  fVar16 = local_258 * fVar20 - local_254 * fVar28;
  fVar20 = local_254 * fVar26 - fVar21 * fVar20;
  local_270 = fVar21 * fVar28 - local_258 * fVar26;
  fVar21 = fVar20 * fVar20 + fVar16 * fVar16 + (float)local_270 * (float)local_270;
  if (fVar21 == __real_3f800000) {
    _local_278 = CONCAT44(fVar20,fVar16);
  }
  else if (fVar14 <= fVar21) {
    fVar14 = __real_3f800000 / SQRT(fVar21);
    local_270 = fVar14 * (float)local_270;
    fStack_274 = fVar14 * fVar20;
    local_278 = fVar14 * fVar16;
  }
  else {
    local_270 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    _local_278 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                          UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  }
  if ((((float)((uint)local_278 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1) &&
      ((float)((uint)fStack_274 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)) &&
     ((float)(local_270 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)) {
    *(ulonglong *)__return_storage_ptr__ =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    *(float *)&__return_storage_ptr__->field_0x8 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(ulonglong *)&__return_storage_ptr__->field_0xc =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    *(float *)&__return_storage_ptr__->field_0x14 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(ulonglong *)&__return_storage_ptr__->field_0x18 =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    *(float *)&__return_storage_ptr__->field_0x20 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  fVar20 = 0.0;
  local_218.M[0][2] = local_230;
  local_218.M[1][0] = local_22c;
  local_218.M[2][0] = (float)local_220;
  local_218.M[3][0] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_218.M[1][1] = local_258;
  local_218.M[3][2] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_218.M[2][1] = local_228;
  local_218.M[3][1] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_1d8.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_1d8.M[3][1] = _UNK_150689644;
  local_1d8.M[3][2] = _UNK_150689648;
  local_1d8.M[3][3] = _UNK_15068964c;
  local_218.M[1][2] = local_254;
  local_218.M[0][3] = 0.0;
  local_218.M[1][3] = 0.0;
  local_218.M[2][3] = 0.0;
  local_218.M[3][3] = 1.0;
  local_1d8.M[0][2] = 0.0;
  local_1d8.M[0][3] = 0.0;
  local_1d8.M[1][2] = 0.0;
  local_1d8.M[1][3] = 0.0;
  local_1d8.M[2][2] = 1.0;
  local_1d8.M[2][3] = 0.0;
  local_218.M[0][0] = fVar26;
  local_218.M[0][1] = fVar28;
  local_218.M[2][2] = fVar17;
  local_1d8.M[0][0] = (float)dVar1 - fVar24;
  local_1d8.M[0][1] = (float)dVar2 - fVar25;
  local_1d8.M[2][0] = fVar24;
  local_1d8.M[2][1] = fVar25;
  FMath::MatrixInverse(&local_198,&local_1d8);
  local_158.M[0][0] = local_198.M[0][0];
  local_158.M[0][1] = local_198.M[0][1];
  local_158.M[0][2] = local_198.M[0][2];
  local_158.M[0][3] = local_198.M[0][3];
  local_158.M[1][0] = local_198.M[1][0];
  local_158.M[1][1] = local_198.M[1][1];
  local_158.M[1][2] = local_198.M[1][2];
  local_158.M[1][3] = local_198.M[1][3];
  local_158.M[2][0] = local_198.M[2][0];
  local_158.M[2][1] = local_198.M[2][1];
  local_158.M[2][2] = local_198.M[2][2];
  local_158.M[2][3] = local_198.M[2][3];
  local_158.M[3][0] = local_198.M[3][0];
  local_158.M[3][1] = local_198.M[3][1];
  local_158.M[3][2] = local_198.M[3][2];
  local_158.M[3][3] = local_198.M[3][3];
  VectorMatrixMultiply(&local_118,&local_158,&local_218);
  fVar17 = _UNK_1506894f4 * local_118.M[1][0] +
           ___xmm_0000000000000000000000003f800000 * local_118.M[0][0] +
           _UNK_1506894f8 * local_118.M[2][0] + _UNK_1506894fc * local_118.M[3][0];
  fStack_264 = _UNK_1506894f4 * local_118.M[1][1] +
               ___xmm_0000000000000000000000003f800000 * local_118.M[0][1] +
               _UNK_1506894f8 * local_118.M[2][1] + _UNK_1506894fc * local_118.M[3][1];
  fVar21 = _UNK_1506894f4 * local_118.M[1][2] +
           ___xmm_0000000000000000000000003f800000 * local_118.M[0][2] +
           _UNK_1506894f8 * local_118.M[2][2] + _UNK_1506894fc * local_118.M[3][2];
  fVar14 = fStack_264 * fStack_264 + fVar17 * fVar17 + fVar21 * fVar21;
  if (fVar14 <= __real_322bcc77) {
    fStack_264 = 0.0;
    local_260 = 0.0;
    local_268 = 0.0;
  }
  else {
    local_268 = fVar15 / SQRT(fVar14);
    fStack_264 = local_268 * fStack_264;
    local_260 = local_268 * fVar21;
    local_268 = local_268 * fVar17;
  }
  local_250 = _UNK_150689504 * local_118.M[1][0] +
              ___xmm_00000000000000003f80000000000000 * local_118.M[0][0] +
              _UNK_150689508 * local_118.M[2][0] + _UNK_15068950c * local_118.M[3][0];
  fVar17 = _UNK_150689504 * local_118.M[1][1] +
           ___xmm_00000000000000003f80000000000000 * local_118.M[0][1] +
           _UNK_150689508 * local_118.M[2][1] + _UNK_15068950c * local_118.M[3][1];
  fVar21 = _UNK_150689504 * local_118.M[1][2] +
           ___xmm_00000000000000003f80000000000000 * local_118.M[0][2] +
           _UNK_150689508 * local_118.M[2][2] + _UNK_15068950c * local_118.M[3][2];
  fVar14 = fVar17 * fVar17 + local_250 * local_250 + fVar21 * fVar21;
  if (fVar14 <= __real_322bcc77) {
    local_248 = 0.0;
    local_250 = 0.0;
  }
  else {
    fVar15 = fVar15 / SQRT(fVar14);
    fVar20 = fVar15 * fVar17;
    local_248 = fVar15 * fVar21;
    local_250 = fVar15 * local_250;
  }
  fStack_24c = fVar20;
  UE::Math::TVector<float>::CreateOrthonormalBasis
            ((TVector<float> *)&local_268,(TVector<float> *)&local_250,(TVector<float> *)&local_278)
  ;
  uVar11 = local_260;
  uVar19 = _local_268;
  fVar14 = __real_38d1b717;
  uVar27 = fStack_264;
  if (((((float)((uint)local_268 & uVar5) <= __real_38d1b717) &&
       ((float)((uint)fStack_264 & uVar5) <= __real_38d1b717)) &&
      ((float)(local_260 & uVar5) <= __real_38d1b717)) ||
     (((iVar8 = _finite((double)local_268), iVar8 == 0 ||
       (iVar8 = _finite((double)(float)uVar27), iVar8 == 0)) ||
      (iVar8 = _finite((double)(float)uVar11), uVar12 = local_248, uVar6 = _local_250, iVar8 == 0)))
     ) {
LAB_144382296:
    uVar18 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                      UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    _local_268 = uVar18;
    _local_250 = uVar18;
    local_240 = uVar18;
    local_238 = uVar18;
  }
  else {
    uVar23 = local_250;
    uVar22 = fStack_24c;
    if ((((((float)((uint)local_250 & uVar5) <= fVar14) &&
          ((float)((uint)fStack_24c & uVar5) <= fVar14)) && ((float)(local_248 & uVar5) <= fVar14))
        || ((iVar8 = _finite((double)local_250), iVar8 == 0 ||
            (iVar8 = _finite((double)(float)uVar22), iVar8 == 0)))) ||
       (iVar8 = _finite((double)(float)uVar12), iVar8 == 0)) goto LAB_144382296;
    uVar18 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                      UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    local_240 = uVar19;
    local_238 = uVar6;
  }
  uVar4 = local_270;
  uVar19 = _local_278;
  fVar17 = local_278;
  fVar21 = fStack_274;
  if (((fVar14 < (float)((uint)local_278 & uVar5)) || (fVar14 < (float)((uint)fStack_274 & uVar5)))
     || (fVar14 < (float)(local_270 & uVar5))) {
    iVar8 = _finite((double)local_278);
    if (((iVar8 != 0) && (iVar8 = _finite((double)fVar21), iVar8 != 0)) &&
       (iVar8 = _finite((double)(float)uVar4), iVar8 != 0)) {
      uVar18 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                        UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      local_278 = fVar17;
      goto LAB_14438239a;
    }
    uVar18 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                      UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  }
  fVar21 = (float)((ulonglong)uVar18 >> 0x20);
  local_278 = (float)uVar18;
  uVar19 = uVar18;
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
LAB_14438239a:
  fVar20 = (float)uVar22 * (float)uVar22 + (float)uVar23 * (float)uVar23 +
           (float)uVar12 * (float)uVar12;
  fVar14 = (float)uVar18;
  fVar17 = (float)((ulonglong)uVar18 >> 0x20);
  if (fVar20 == __real_3f800000) {
    fVar26 = (float)local_238;
    fVar28 = (float)((ulonglong)local_238 >> 0x20);
    uVar13 = uVar12;
  }
  else {
    fVar26 = fVar14;
    fVar28 = fVar17;
    uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar20) {
      fVar20 = __real_3f800000 / SQRT(fVar20);
      fVar26 = fVar20 * (float)uVar23;
      fVar28 = fVar20 * (float)uVar22;
      uVar13 = fVar20 * (float)uVar12;
    }
  }
  fVar20 = (float)uVar27 * (float)uVar27 + local_268 * local_268 + (float)uVar11 * (float)uVar11;
  uVar12 = uVar11;
  if ((fVar20 != __real_3f800000) &&
     (local_240 = uVar18, uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     __real_322bcc77 <= fVar20)) {
    fVar20 = __real_3f800000 / SQRT(fVar20);
    local_240 = CONCAT44(fVar20 * (float)uVar27,fVar20 * local_268);
    uVar12 = fVar20 * (float)uVar11;
  }
  fVar20 = fVar21 * fVar21 + local_278 * local_278 + (float)uVar4 * (float)uVar4;
  if (fVar20 == __real_3f800000) {
    fVar14 = (float)uVar19;
    fVar17 = (float)((ulonglong)uVar19 >> 0x20);
    uVar27 = uVar4;
  }
  else {
    uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar20) {
      fVar20 = __real_3f800000 / SQRT(fVar20);
      fVar17 = fVar20 * fVar21;
      fVar14 = fVar20 * local_278;
      uVar27 = fVar20 * (float)uVar4;
    }
  }
  *(ulonglong *)__return_storage_ptr__ = CONCAT44(fVar17,fVar14);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar27;
  *(undefined8 *)&__return_storage_ptr__->field_0xc = local_240;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uVar12;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(fVar28,fVar26);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = uVar13;
  return __return_storage_ptr__;
}

// IsTriangleDegenerated @ 1443847a0

bool __cdecl
IsTriangleDegenerated
          (FRawMesh *param_1,TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if (param_3 < (param_1->WedgeIndices).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = *(uint *)((param_1->WedgeIndices).AllocatorInstance.Data + (longlong)param_3 * 4);
  uVar8 = 0;
  if ((int)uVar7 < param_2->ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar1 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
  uVar8 = param_3 + 1;
  uVar7 = 0;
  if ((int)uVar8 < (param_1->WedgeIndices).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = *(uint *)((param_1->WedgeIndices).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  uVar8 = 0;
  if ((int)uVar7 < param_2->ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar2 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
  uVar8 = param_3 + 2;
  uVar7 = 0;
  if ((int)uVar8 < (param_1->WedgeIndices).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = *(uint *)((param_1->WedgeIndices).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  uVar8 = 0;
  if ((int)uVar7 < param_2->ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar3 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
  if (((iVar1 != iVar2) && (iVar1 != iVar3)) && (iVar2 != iVar3)) {
    return false;
  }
  return true;
}

// MikkGetNormal @ 1443849e0

void __cdecl
MeshDescriptionMikktSpaceInterface::MikkGetNormal
          (SMikkTSpaceContext *param_1,float *param_2,int param_3,int param_4)

{
  void *pvVar1;
  FVertexInstanceID *pFVar2;
  TVector<float> *pTVar3;
  
  pvVar1 = param_1->m_pUserData;
  pFVar2 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                     ((TArrayView<FVertexInstanceID_const_,int> *)((longlong)pvVar1 + 0x18),
                      param_4 + param_3 * 3);
  pTVar3 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>_const_,int> *)((longlong)pvVar1 + 0x38),
                      (int)*pFVar2);
  *param_2 = (pTVar3->field0_0x0)._s_0.X;
  param_2[1] = (pTVar3->field0_0x0)._s_0.Y;
  param_2[2] = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// MikkGetNumFaces @ 144384a30

int __cdecl MeshDescriptionMikktSpaceInterface::MikkGetNumFaces(SMikkTSpaceContext *param_1)

{
  return *(int *)param_1->m_pUserData;
}

// MikkGetNumVertsOfFace @ 144384a40

int __cdecl
MeshDescriptionMikktSpaceInterface::MikkGetNumVertsOfFace(SMikkTSpaceContext *param_1,int param_2)

{
  return 3;
}

// MikkGetPosition @ 144384a50

void __cdecl
MeshDescriptionMikktSpaceInterface::MikkGetPosition
          (SMikkTSpaceContext *param_1,float *param_2,int param_3,int param_4)

{
  void *pvVar1;
  FVertexID *pFVar2;
  TVector<float> *pTVar3;
  
  pvVar1 = param_1->m_pUserData;
  pFVar2 = TArrayView<FVertexID_const_,int>::operator[]
                     ((TArrayView<FVertexID_const_,int> *)((longlong)pvVar1 + 8),
                      param_4 + param_3 * 3);
  pTVar3 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>_const_,int> *)((longlong)pvVar1 + 0x28),
                      (int)*pFVar2);
  *param_2 = (pTVar3->field0_0x0)._s_0.X;
  param_2[1] = (pTVar3->field0_0x0)._s_0.Y;
  param_2[2] = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// MikkGetTexCoord @ 144384aa0

void __cdecl
MeshDescriptionMikktSpaceInterface::MikkGetTexCoord
          (SMikkTSpaceContext *param_1,float *param_2,int param_3,int param_4)

{
  void *pvVar1;
  FVertexInstanceID *pFVar2;
  TVector2<float> *pTVar3;
  
  pvVar1 = param_1->m_pUserData;
  pFVar2 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                     ((TArrayView<FVertexInstanceID_const_,int> *)((longlong)pvVar1 + 0x18),
                      param_4 + param_3 * 3);
  pTVar3 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                     ((TArrayView<UE::Math::TVector2<float>_const_,int> *)((longlong)pvVar1 + 0x48),
                      (int)*pFVar2);
  *param_2 = (pTVar3->field0_0x0)._s_0.X;
  param_2[1] = (pTVar3->field0_0x0)._s_0.Y;
  return;
}

// MikkSetTSpaceBasic @ 144384af0

void __cdecl
MeshDescriptionMikktSpaceInterface::MikkSetTSpaceBasic
          (SMikkTSpaceContext *param_1,float *param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FVertexInstanceID FVar4;
  void *pvVar5;
  FVertexInstanceID *pFVar6;
  TVector<float> *pTVar7;
  float *pfVar8;
  
  pvVar5 = param_1->m_pUserData;
  pFVar6 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                     ((TArrayView<FVertexInstanceID_const_,int> *)((longlong)pvVar5 + 0x18),
                      param_5 + param_4 * 3);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  FVar4 = *pFVar6;
  pTVar7 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>,int> *)((longlong)pvVar5 + 0x58),
                      (int)FVar4);
  (pTVar7->field0_0x0)._s_0.X = fVar1;
  (pTVar7->field0_0x0)._s_0.Y = fVar2;
  (pTVar7->field0_0x0)._s_0.Z = fVar3;
  pfVar8 = TArrayView<float,int>::operator[]
                     ((TArrayView<float,int> *)((longlong)pvVar5 + 0x68),(int)FVar4);
  *pfVar8 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
  return;
}

// Z_Construct_UClass_UStaticMeshDescription_NoRegister @ 14438a360

UClass * __cdecl Z_Construct_UClass_UStaticMeshDescription_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StaticMeshDescription",L"StaticMeshDescription",
               &Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton,
               UStaticMeshDescription::StaticRegisterNativesUStaticMeshDescription,0x2f0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UStaticMeshDescription>,
               InternalVTableHelperCtorCaller<UStaticMeshDescription>,local_res8,
               UMeshDescriptionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton;
}

// Z_Construct_UScriptStruct_FUVMapSettings @ 14438a420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUVMapSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUVMapSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUVMapSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FUVMapSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUVMapSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUVMapSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_StaticMeshDescription @ 14438b880

void __cdecl IMPLEMENT_MODULE_StaticMeshDescription(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStaticMeshOperations'' @ 15036b6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStaticMeshOperations__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStaticMeshOperations);
  return;
}

