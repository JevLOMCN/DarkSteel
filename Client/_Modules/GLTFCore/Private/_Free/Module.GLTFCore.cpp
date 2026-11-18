// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 149

// SupportedExtensions'' @ 141424c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'GLTF::FAsset::SupportedExtensions__(void)

{
  undefined1 auStack_68 [32];
  initializer_list<GLTF::EExtension> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  EExtension local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._First = (EExtension *)&local_38;
  local_48._Last = &local_14;
  local_18 = 6;
  local_38 = ___xmm_000000020000000d0000000100000000;
  uStack_30 = _UNK_152f118f8;
  local_28 = ___xmm_00000007000000050000000400000003;
  uStack_20 = _UNK_152f11908;
  TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
  TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            (&GLTF::FAsset::SupportedExtensions,&local_48);
  atexit(`dynamic_atexit_destructor_for_'GLTF::FAsset::SupportedExtensions__);
  return;
}

// SupportedModes'' @ 141424cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl `dynamic_initializer_for_'GLTF::FPrimitive::SupportedModes__(void)

{
  ForAnyElementType FVar1;
  
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&GLTF::FPrimitive::SupportedModes.AllocatorInstance,3,
             &GLTF::FPrimitive::SupportedModes.ArrayMax);
  FVar1 = GLTF::FPrimitive::SupportedModes.AllocatorInstance;
  *(undefined8 *)GLTF::FPrimitive::SupportedModes.AllocatorInstance.Data = 0x500000004;
  *(undefined4 *)(FVar1.Data + 8) = 6;
  atexit(`dynamic_atexit_destructor_for_'GLTF::FPrimitive::SupportedModes__);
  return;
}

// `dynamic_initializer_for_'MaterialsExtensions'' @ 141424d50

void __cdecl GLTF::`anonymous_namespace'::_dynamic_initializer_for__MaterialsExtensions__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"KHR_materials_variants");
  MaterialsExtensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  MaterialsExtensions.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&MaterialsExtensions.AllocatorInstance,1,&MaterialsExtensions.ArrayMax);
  ConstructItems<FString,FString,int>(MaterialsExtensions.AllocatorInstance.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__MaterialsExtensions__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGLTFCore'' @ 141424df0

void __cdecl _dynamic_initializer_for__ModuleRegistrantGLTFCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GLTFCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GLTFCore",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGLTFCoreModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14e620d90

void * __thiscall IGLTFCoreModule::_scalar_deleting_destructor_(IGLTFCoreModule *this,uint param_1)

{
  *this = (IGLTFCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e620df0

void * __thiscall FGLTFCoreModule::_scalar_deleting_destructor_(FGLTFCoreModule *this,uint param_1)

{
  *this = (FGLTFCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AcquireDataFromDracoAttribute<signed_char> @ 14e620ec0

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute<signed_char>
          (PointAttribute *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar7 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_4);
  }
  iVar9 = 0;
  if (0 < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_4,&local_38,0,local_30 + 1);
    iVar9 = local_30[0];
  }
  if (iVar9 < (int)param_4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_4 - iVar9,&local_38,local_30,local_30 + 1);
  }
  else if ((int)param_4 < iVar9) {
    uVar6 = iVar9 - param_4;
    if ((int)(uVar6 | param_4) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      iVar9 = local_30[0];
    }
    if (uVar6 != 0) {
      iVar4 = (iVar9 - uVar6) - param_4;
      if (iVar4 != 0) {
        memmove(local_38.Data + (int)param_4,local_38.Data + (int)param_4 + (int)uVar6,
                (longlong)iVar4);
        iVar9 = local_30[0];
      }
      local_30[0] = iVar9 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&local_38,iVar9 - uVar6,local_30 + 1);
    }
  }
  uVar8 = uVar7;
  if ((ulonglong)param_2 != 0) {
    do {
      if (param_1->identity_mapping_ == false) {
        IVar5.value_ = (param_1->indices_map_).vector_._Mypair._Myval2._Myfirst[uVar8 & 0xffffffff].
                       value_;
      }
      else {
        IVar5.value_ = (uint)uVar8;
      }
      bVar3 = draco::GeometryAttribute::ConvertValue<signed_char>
                        ((GeometryAttribute *)param_1,IVar5,(schar)param_4,(schar *)local_38.Data);
      if (!bVar3) {
        bVar3 = false;
        goto LAB_14e621057;
      }
      memcpy(param_5 + uVar7,local_38.Data,(ulonglong)param_3);
      uVar7 = uVar7 + param_3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  bVar3 = true;
LAB_14e621057:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return bVar3;
}

// AcquireDataFromDracoAttribute<unsigned_char> @ 14e6210a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute<unsigned_char>
          (PointAttribute *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  bool bVar1;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38;
  
  uVar4 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_4);
  }
  if (0 < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_4,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_4,Default);
  FVar3.Data = local_38.AllocatorInstance.Data;
  uVar5 = uVar4;
  if (param_2 != 0) {
    do {
      if (param_1->identity_mapping_ == false) {
        IVar2.value_ = (param_1->indices_map_).vector_._Mypair._Myval2._Myfirst[uVar4 & 0xffffffff].
                       value_;
      }
      else {
        IVar2.value_ = (uint)uVar4;
      }
      bVar1 = draco::GeometryAttribute::ConvertValue<unsigned_char>
                        ((GeometryAttribute *)param_1,IVar2,(schar)param_4,(uchar *)FVar3.Data);
      FVar3.Data = local_38.AllocatorInstance.Data;
      if (!bVar1) {
        bVar1 = false;
        goto LAB_14e62117e;
      }
      memcpy(param_5 + uVar5,local_38.AllocatorInstance.Data,(ulonglong)param_3);
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + param_3;
    } while (uVar4 < param_2);
  }
  bVar1 = true;
LAB_14e62117e:
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar1;
}

// AcquireDataFromDracoAttribute<short> @ 14e6211d0

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute<short>
          (PointAttribute *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar7 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_4);
  }
  iVar9 = 0;
  if (0 < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_4,&local_38,0,local_30 + 1);
    iVar9 = local_30[0];
  }
  if (iVar9 < (int)param_4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_4 - iVar9,&local_38,local_30,local_30 + 1);
  }
  else if ((int)param_4 < iVar9) {
    uVar6 = iVar9 - param_4;
    if ((int)(uVar6 | param_4) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      iVar9 = local_30[0];
    }
    if (uVar6 != 0) {
      iVar4 = (iVar9 - uVar6) - param_4;
      if (iVar4 != 0) {
        memmove(local_38.Data + (longlong)(int)param_4 * 2,
                local_38.Data + (longlong)(int)param_4 * 2 + (longlong)(int)uVar6 * 2,
                (longlong)iVar4 * 2);
        iVar9 = local_30[0];
      }
      local_30[0] = iVar9 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,&local_38,iVar9 - uVar6,local_30 + 1);
    }
  }
  uVar8 = uVar7;
  if ((ulonglong)param_2 != 0) {
    do {
      if (param_1->identity_mapping_ == false) {
        IVar5.value_ = (param_1->indices_map_).vector_._Mypair._Myval2._Myfirst[uVar8 & 0xffffffff].
                       value_;
      }
      else {
        IVar5.value_ = (uint)uVar8;
      }
      bVar3 = draco::GeometryAttribute::ConvertValue<short>
                        ((GeometryAttribute *)param_1,IVar5,(schar)param_4,(short *)local_38.Data);
      if (!bVar3) {
        bVar3 = false;
        goto LAB_14e621369;
      }
      memcpy(param_5 + uVar7,local_38.Data,(ulonglong)param_3);
      uVar7 = uVar7 + param_3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  bVar3 = true;
LAB_14e621369:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return bVar3;
}

// AcquireDataFromDracoAttribute<unsigned_short> @ 14e6213c0

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute<unsigned_short>
          (PointAttribute *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar7 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_4);
  }
  iVar9 = 0;
  if (0 < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_4,&local_38,0,local_30 + 1);
    iVar9 = local_30[0];
  }
  if (iVar9 < (int)param_4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_4 - iVar9,&local_38,local_30,local_30 + 1);
  }
  else if ((int)param_4 < iVar9) {
    uVar6 = iVar9 - param_4;
    if ((int)(uVar6 | param_4) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      iVar9 = local_30[0];
    }
    if (uVar6 != 0) {
      iVar4 = (iVar9 - uVar6) - param_4;
      if (iVar4 != 0) {
        memmove(local_38.Data + (longlong)(int)param_4 * 2,
                local_38.Data + (longlong)(int)param_4 * 2 + (longlong)(int)uVar6 * 2,
                (longlong)iVar4 * 2);
        iVar9 = local_30[0];
      }
      local_30[0] = iVar9 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,&local_38,iVar9 - uVar6,local_30 + 1);
    }
  }
  uVar8 = uVar7;
  if ((ulonglong)param_2 != 0) {
    do {
      if (param_1->identity_mapping_ == false) {
        IVar5.value_ = (param_1->indices_map_).vector_._Mypair._Myval2._Myfirst[uVar8 & 0xffffffff].
                       value_;
      }
      else {
        IVar5.value_ = (uint)uVar8;
      }
      bVar3 = draco::GeometryAttribute::ConvertValue<unsigned_short>
                        ((GeometryAttribute *)param_1,IVar5,(schar)param_4,(ushort *)local_38.Data);
      if (!bVar3) {
        bVar3 = false;
        goto LAB_14e621559;
      }
      memcpy(param_5 + uVar7,local_38.Data,(ulonglong)param_3);
      uVar7 = uVar7 + param_3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  bVar3 = true;
LAB_14e621559:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return bVar3;
}

// AcquireDataFromDracoAttribute<unsigned_int> @ 14e6215b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute<unsigned_int>
          (PointAttribute *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  bool bVar1;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  
  uVar4 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_4);
  }
  if (0 < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_4,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_4,Default);
  FVar3.Data = local_38.AllocatorInstance.Data;
  uVar5 = uVar4;
  if (param_2 != 0) {
    do {
      if (param_1->identity_mapping_ == false) {
        IVar2.value_ = (param_1->indices_map_).vector_._Mypair._Myval2._Myfirst[uVar4 & 0xffffffff].
                       value_;
      }
      else {
        IVar2.value_ = (uint)uVar4;
      }
      bVar1 = draco::GeometryAttribute::ConvertValue<unsigned_int>
                        ((GeometryAttribute *)param_1,IVar2,(schar)param_4,(uint *)FVar3.Data);
      FVar3.Data = local_38.AllocatorInstance.Data;
      if (!bVar1) {
        bVar1 = false;
        goto LAB_14e62168e;
      }
      memcpy(param_5 + uVar5,local_38.AllocatorInstance.Data,(ulonglong)param_3);
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + param_3;
    } while (uVar4 < param_2);
  }
  bVar1 = true;
LAB_14e62168e:
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar1;
}

// AcquireDataFromDracoAttribute<float> @ 14e6216e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute<float>
          (PointAttribute *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  bool bVar1;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  
  uVar4 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_4);
  }
  if (0 < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_4,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_4,Default);
  FVar3.Data = local_38.AllocatorInstance.Data;
  uVar5 = uVar4;
  if (param_2 != 0) {
    do {
      if (param_1->identity_mapping_ == false) {
        IVar2.value_ = (param_1->indices_map_).vector_._Mypair._Myval2._Myfirst[uVar4 & 0xffffffff].
                       value_;
      }
      else {
        IVar2.value_ = (uint)uVar4;
      }
      bVar1 = draco::GeometryAttribute::ConvertValue<float>
                        ((GeometryAttribute *)param_1,IVar2,(schar)param_4,(float *)FVar3.Data);
      FVar3.Data = local_38.AllocatorInstance.Data;
      if (!bVar1) {
        bVar1 = false;
        goto LAB_14e6217be;
      }
      memcpy(param_5 + uVar5,local_38.AllocatorInstance.Data,(ulonglong)param_3);
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + param_3;
    } while (uVar4 < param_2);
  }
  bVar1 = true;
LAB_14e6217be:
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar1;
}

// AcquireIndicesFromDracoMesh<unsigned_char> @ 14e621810

/* WARNING: Type propagation algorithm not settling */

void __cdecl
GLTF::DracoHelpers::AcquireIndicesFromDracoMesh<unsigned_char>(Mesh *param_1,uchar *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uchar *puVar4;
  ulonglong uVar5;
  array<draco::IndexType<unsigned_int,draco::PointIndex_tag_type_>,3> *paVar6;
  
  paVar6 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
  lVar3 = (longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast - (longlong)paVar6;
  uVar5 = 0;
  iVar1 = (int)(lVar3 >> 0x3f);
  if ((int)(lVar3 / 0xc) + iVar1 != iVar1) {
    puVar4 = param_2 + 2;
    do {
      uVar2 = uVar5 & 0xffffffff;
      uVar5 = uVar5 + 1;
      puVar4[-2] = (uchar)paVar6[uVar2]._Elems[0].value_;
      puVar4[-1] = (uchar)paVar6[uVar2]._Elems[1].value_;
      *puVar4 = (uchar)paVar6[uVar2]._Elems[2].value_;
      paVar6 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
      puVar4 = puVar4 + 3;
    } while (uVar5 < (((longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast -
                      (longlong)paVar6) / 0xc & 0xffffffffU));
  }
  return;
}

// AcquireIndicesFromDracoMesh<unsigned_short> @ 14e6218d0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
GLTF::DracoHelpers::AcquireIndicesFromDracoMesh<unsigned_short>(Mesh *param_1,ushort *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort *puVar4;
  ulonglong uVar5;
  array<draco::IndexType<unsigned_int,draco::PointIndex_tag_type_>,3> *paVar6;
  
  paVar6 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
  lVar3 = (longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast - (longlong)paVar6;
  uVar5 = 0;
  iVar1 = (int)(lVar3 >> 0x3f);
  if ((int)(lVar3 / 0xc) + iVar1 != iVar1) {
    puVar4 = param_2 + 2;
    do {
      uVar2 = uVar5 & 0xffffffff;
      uVar5 = uVar5 + 1;
      puVar4[-2] = (ushort)paVar6[uVar2]._Elems[0].value_;
      puVar4[-1] = (ushort)paVar6[uVar2]._Elems[1].value_;
      *puVar4 = (ushort)paVar6[uVar2]._Elems[2].value_;
      paVar6 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
      puVar4 = puVar4 + 3;
    } while (uVar5 < (((longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast -
                      (longlong)paVar6) / 0xc & 0xffffffffU));
  }
  return;
}

// AcquireIndicesFromDracoMesh<unsigned_int> @ 14e621990

/* WARNING: Type propagation algorithm not settling */

void __cdecl
GLTF::DracoHelpers::AcquireIndicesFromDracoMesh<unsigned_int>(Mesh *param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  array<draco::IndexType<unsigned_int,draco::PointIndex_tag_type_>,3> *paVar6;
  
  paVar6 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
  lVar3 = (longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast - (longlong)paVar6;
  uVar5 = 0;
  iVar1 = (int)(lVar3 >> 0x3f);
  if ((int)(lVar3 / 0xc) + iVar1 != iVar1) {
    puVar4 = param_2 + 2;
    do {
      uVar2 = uVar5 & 0xffffffff;
      uVar5 = uVar5 + 1;
      puVar4[-2] = paVar6[uVar2]._Elems[0].value_;
      puVar4[-1] = paVar6[uVar2]._Elems[1].value_;
      *puVar4 = paVar6[uVar2]._Elems[2].value_;
      paVar6 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
      puVar4 = puVar4 + 3;
    } while (uVar5 < (((longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast -
                      (longlong)paVar6) / 0xc & 0xffffffffU));
  }
  return;
}

// ConstructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,TTuple<enum_GLTF::EMessageSeverity,FText>,int> @ 14e621b40

void __cdecl
ConstructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,TTuple<enum_GLTF::EMessageSeverity,FText>,int>
          (void *param_1,TTuple<GLTF::EMessageSeverity,FText> *param_2,int param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    puVar3 = (undefined4 *)&param_2->field_0x10;
    plVar4 = (longlong *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)((longlong)puVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           puVar3[-4];
      *plVar4 = 0;
      plVar2 = *(longlong **)(puVar3 + -2);
      *plVar4 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res18);
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 6;
      *(undefined4 *)(plVar4 + 1) = uVar1;
      plVar4 = plVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConvertQuat<float> @ 14e621bc0

TQuat<float> * __cdecl
GLTF::ConvertQuat<float>(TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar3 = param_1->W;
  fVar1 = param_1->Y;
  __return_storage_ptr__->X = (float)((uint)param_1->X ^ __xmm_80000000800000008000000080000000);
  fVar2 = param_1->Z;
  __return_storage_ptr__->W = fVar3;
  __return_storage_ptr__->Y = (float)((uint)fVar2 ^ uVar4);
  __return_storage_ptr__->Z = (float)((uint)fVar1 ^ uVar4);
  return __return_storage_ptr__;
}

// ConvertQuat<double> @ 14e621c00

TQuat<double> * __cdecl
GLTF::ConvertQuat<double>(TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  
  dVar3 = param_1->W;
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = param_1->Y;
  __return_storage_ptr__->X =
       (double)CONCAT44((uint)((ulonglong)param_1->X >> 0x20) ^ uVar5,SUB84(param_1->X,0) ^ uVar4);
  dVar2 = param_1->Z;
  __return_storage_ptr__->W = dVar3;
  __return_storage_ptr__->Y =
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar5,SUB84(dVar2,0) ^ uVar4);
  __return_storage_ptr__->Z =
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar5,SUB84(dVar1,0) ^ uVar4);
  return __return_storage_ptr__;
}

// ConvertValue<signed_char> @ 14e621c40

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
draco::GeometryAttribute::ConvertValue<signed_char>
          (GeometryAttribute *this,
          IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> param_1,schar param_2,
          schar *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  schar sVar13;
  bool bVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar22;
  double *pdVar23;
  int iVar24;
  byte *pbVar25;
  short *psVar26;
  ushort *puVar27;
  int *piVar28;
  uint *puVar29;
  longlong *plVar30;
  ulonglong *puVar31;
  uchar *puVar32;
  byte *pbVar33;
  schar *psVar34;
  uchar *puVar35;
  DataBuffer *pDVar36;
  float fVar37;
  
  fVar12 = __real_c3000000;
  fVar11 = __real_42fe0000;
  dVar10 = __real_c060000000000000;
  dVar9 = __real_405fc00000000000;
  fVar8 = __real_3f000000;
  dVar7 = __real_3fe0000000000000;
  fVar6 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  uVar5 = (ulonglong)(byte)param_2;
  uVar16 = (uint)(byte)param_2;
  if (param_3 == (schar *)0x0) {
switchD_14e621cb1_default:
    bVar14 = false;
  }
  else {
    switch(this->data_type_) {
    case DT_INT8:
      pDVar36 = this->buffer_;
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      puVar32 = (pDVar36->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      puVar35 = (uchar *)param_3;
      if (bVar18 != 0) {
        do {
          if ((pDVar36->data_)._Mypair._Myval2._Mylast <= puVar32) goto switchD_14e621cb1_default;
          iVar24 = iVar24 + 1;
          *puVar35 = *puVar32;
          puVar32 = puVar32 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          pDVar36 = this->buffer_;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          puVar35 = puVar35 + 1;
        } while (iVar24 < (int)uVar19);
      }
      break;
    case DT_UINT8:
      pDVar36 = this->buffer_;
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pbVar25 = (pDVar36->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      pbVar33 = (byte *)param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= pbVar25) || (0x7f < *pbVar25))
          goto switchD_14e621cb1_default;
          *pbVar33 = *pbVar25;
          pbVar25 = pbVar25 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          pbVar33 = pbVar33 + 1;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar24 < (int)uVar19);
      }
      break;
    case DT_INT16:
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      iVar24 = 0;
      pDVar36 = this->buffer_;
      psVar26 = (short *)((pDVar36->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= psVar26) ||
             (0xff < (ushort)(*psVar26 + 0x80U))) goto switchD_14e621cb1_default;
          *psVar34 = (schar)*psVar26;
          psVar26 = psVar26 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          psVar34 = psVar34 + 1;
        } while (iVar24 < (int)uVar19);
      }
      break;
    case DT_UINT16:
      pDVar36 = this->buffer_;
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      puVar27 = (ushort *)
                ((pDVar36->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= puVar27) || (0x7f < *puVar27))
          goto switchD_14e621cb1_default;
          *psVar34 = (schar)*puVar27;
          puVar27 = puVar27 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar34 = psVar34 + 1;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar24 < (int)uVar19);
      }
      break;
    case DT_INT32:
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      iVar24 = 0;
      pDVar36 = this->buffer_;
      piVar28 = (int *)((pDVar36->data_)._Mypair._Myval2._Myfirst +
                       (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= piVar28) || (0xff < *piVar28 + 0x80U))
          goto switchD_14e621cb1_default;
          *psVar34 = (schar)*piVar28;
          piVar28 = piVar28 + 1;
          bVar18 = this->num_components_;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          psVar34 = psVar34 + 1;
        } while (iVar24 < (int)uVar19);
        uVar17 = (ulonglong)bVar18;
      }
      break;
    case DT_UINT32:
      pDVar36 = this->buffer_;
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      puVar29 = (uint *)((pDVar36->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= puVar29) || (0x7f < *puVar29))
          goto switchD_14e621cb1_default;
          *psVar34 = (schar)*puVar29;
          puVar29 = puVar29 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar34 = psVar34 + 1;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar24 < (int)uVar19);
      }
      break;
    case DT_INT64:
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      iVar24 = 0;
      pDVar36 = this->buffer_;
      plVar30 = (longlong *)
                ((pDVar36->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= plVar30) || (0xff < *plVar30 + 0x80U))
          goto switchD_14e621cb1_default;
          *psVar34 = (schar)*plVar30;
          plVar30 = plVar30 + 1;
          bVar18 = this->num_components_;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          psVar34 = psVar34 + 1;
        } while (iVar24 < (int)uVar19);
        uVar17 = (ulonglong)bVar18;
      }
      break;
    case DT_UINT64:
      pDVar36 = this->buffer_;
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      puVar31 = (ulonglong *)
                ((pDVar36->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar36->data_)._Mypair._Myval2._Mylast <= puVar31) || (0x7f < *puVar31))
          goto switchD_14e621cb1_default;
          *psVar34 = (schar)*puVar31;
          puVar31 = puVar31 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar34 = psVar34 + 1;
          pDVar36 = this->buffer_;
          iVar24 = iVar24 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar24 < (int)uVar19);
      }
      break;
    case DT_FLOAT32:
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pfVar22 = (float *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pfVar22)
          goto switchD_14e621cb1_default;
          fVar37 = *pfVar22;
          uVar15 = _fdclass(fVar37);
          if ((((short)uVar15 == 2) || ((short)uVar15 == 1)) ||
             ((fVar37 < fVar12 || (fVar11 <= fVar37)))) goto switchD_14e621cb1_default;
          if (this->normalized_ == false) {
            sVar13 = (schar)(int)fVar37;
          }
          else {
            if ((fVar6 < fVar37) || (fVar37 < 0.0)) goto switchD_14e621cb1_default;
            fVar37 = fVar37 * fVar11 + fVar8;
            dVar3 = (double)fVar37;
            lVar20 = (longlong)fVar37;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar3)) {
              auVar2._8_4_ = SUB84(dVar3,0);
              auVar2._0_8_ = dVar3;
              auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar16 = movmskpd(uVar15,auVar2);
              dVar3 = (double)(longlong)(lVar20 - (ulonglong)(uVar16 & 1));
            }
            sVar13 = (schar)(int)dVar3;
          }
          *psVar34 = sVar13;
          pfVar22 = pfVar22 + 1;
          uVar17 = (ulonglong)this->num_components_;
          iVar24 = iVar24 + 1;
          uVar21 = uVar17;
          if ((byte)param_2 < this->num_components_) {
            uVar21 = uVar5;
          }
          psVar34 = psVar34 + 1;
        } while (iVar24 < (int)uVar21);
      }
      break;
    case DT_FLOAT64:
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pdVar23 = (double *)
                ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar34 = param_3;
      if (bVar18 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pdVar23)
          goto switchD_14e621cb1_default;
          dVar1 = *pdVar23;
          uVar15 = _dclass(SUB84(dVar1,0));
          if (((((short)uVar15 == 2) || ((short)uVar15 == 1)) || (dVar1 < dVar10)) ||
             (dVar9 <= dVar1)) goto switchD_14e621cb1_default;
          if (this->normalized_ != false) {
            if ((dVar3 < dVar1) || (dVar1 < 0.0)) goto switchD_14e621cb1_default;
            dVar1 = dVar1 * dVar9 + dVar7;
            lVar20 = (longlong)dVar1;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar1)) {
              auVar4._8_4_ = SUB84(dVar1,0);
              auVar4._0_8_ = dVar1;
              auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
              uVar16 = movmskpd(uVar15,auVar4);
              dVar1 = (double)(longlong)(lVar20 - (ulonglong)(uVar16 & 1));
            }
          }
          pdVar23 = pdVar23 + 1;
          iVar24 = iVar24 + 1;
          *psVar34 = (schar)(int)dVar1;
          uVar17 = (ulonglong)this->num_components_;
          uVar21 = uVar17;
          if ((byte)param_2 < this->num_components_) {
            uVar21 = uVar5;
          }
          psVar34 = psVar34 + 1;
        } while (iVar24 < (int)uVar21);
      }
      break;
    case DT_BOOL:
      iVar24 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      puVar32 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      puVar35 = (uchar *)param_3;
      if (bVar18 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= puVar32)
          goto switchD_14e621cb1_default;
          iVar24 = iVar24 + 1;
          *puVar35 = *puVar32;
          puVar32 = puVar32 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          puVar35 = puVar35 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar24 < (int)uVar19);
      }
      break;
    default:
      goto switchD_14e621cb1_default;
    }
    if (uVar17 < uVar5) {
      memset(param_3 + uVar17,0,uVar5 - uVar17);
    }
    bVar14 = true;
  }
  return bVar14;
}

// ConvertValue<unsigned_char> @ 14e622360

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
draco::GeometryAttribute::ConvertValue<unsigned_char>
          (GeometryAttribute *this,
          IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> param_1,schar param_2,
          uchar *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  uchar uVar11;
  bool bVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  double *pdVar21;
  int iVar22;
  ushort *puVar23;
  uint *puVar24;
  ulonglong *puVar25;
  uchar *puVar26;
  uchar *puVar27;
  DataBuffer *pDVar28;
  float fVar29;
  
  dVar10 = __real_406fe00000000000;
  fVar9 = __real_437f0000;
  fVar8 = __real_3f000000;
  dVar7 = __real_3fe0000000000000;
  fVar6 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  uVar5 = (ulonglong)(byte)param_2;
  uVar14 = (uint)(byte)param_2;
  if (param_3 == (uchar *)0x0) {
switchD_14e6223c9_default:
    bVar12 = false;
  }
  else {
    switch(this->data_type_) {
    case DT_INT8:
      pDVar28 = this->buffer_;
      iVar22 = 0;
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      puVar26 = (pDVar28->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar27 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar26) || ((char)*puVar26 < '\0'))
          goto switchD_14e6223c9_default;
          *puVar27 = *puVar26;
          puVar26 = puVar26 + 1;
          bVar16 = this->num_components_;
          uVar15 = (ulonglong)bVar16;
          puVar27 = puVar27 + 1;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
        } while (iVar22 < (int)uVar17);
      }
      break;
    case DT_UINT8:
      pDVar28 = this->buffer_;
      iVar22 = 0;
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      puVar26 = (pDVar28->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar27 = param_3;
      if (bVar16 != 0) {
        do {
          if ((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar26) goto switchD_14e6223c9_default;
          iVar22 = iVar22 + 1;
          *puVar27 = *puVar26;
          puVar26 = puVar26 + 1;
          bVar16 = this->num_components_;
          uVar15 = (ulonglong)bVar16;
          pDVar28 = this->buffer_;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar27 = puVar27 + 1;
        } while (iVar22 < (int)uVar17);
      }
      break;
    case DT_INT16:
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      iVar22 = 0;
      pDVar28 = this->buffer_;
      puVar23 = (ushort *)
                ((pDVar28->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar23) || (0xff < *puVar23))
          goto switchD_14e6223c9_default;
          *puVar26 = (uchar)*puVar23;
          puVar23 = puVar23 + 1;
          bVar16 = this->num_components_;
          uVar15 = (ulonglong)bVar16;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar17);
      }
      break;
    case DT_UINT16:
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      iVar22 = 0;
      pDVar28 = this->buffer_;
      puVar23 = (ushort *)
                ((pDVar28->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar23) || (0xff < *puVar23))
          goto switchD_14e6223c9_default;
          *puVar26 = (uchar)*puVar23;
          puVar23 = puVar23 + 1;
          bVar16 = this->num_components_;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar17);
        uVar15 = (ulonglong)bVar16;
      }
      break;
    case DT_INT32:
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      iVar22 = 0;
      pDVar28 = this->buffer_;
      puVar24 = (uint *)((pDVar28->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar24) || (0xff < *puVar24))
          goto switchD_14e6223c9_default;
          *puVar26 = (uchar)*puVar24;
          puVar24 = puVar24 + 1;
          bVar16 = this->num_components_;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar17);
        uVar15 = (ulonglong)bVar16;
      }
      break;
    case DT_UINT32:
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      iVar22 = 0;
      pDVar28 = this->buffer_;
      puVar24 = (uint *)((pDVar28->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar24) || (0xff < *puVar24))
          goto switchD_14e6223c9_default;
          *puVar26 = (uchar)*puVar24;
          puVar24 = puVar24 + 1;
          bVar16 = this->num_components_;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar17);
        uVar15 = (ulonglong)bVar16;
      }
      break;
    case DT_INT64:
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      iVar22 = 0;
      pDVar28 = this->buffer_;
      puVar25 = (ulonglong *)
                ((pDVar28->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar25) || (0xff < *puVar25))
          goto switchD_14e6223c9_default;
          *puVar26 = (uchar)*puVar25;
          puVar25 = puVar25 + 1;
          bVar16 = this->num_components_;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar17);
        uVar15 = (ulonglong)bVar16;
      }
      break;
    case DT_UINT64:
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      iVar22 = 0;
      pDVar28 = this->buffer_;
      puVar25 = (ulonglong *)
                ((pDVar28->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if (((pDVar28->data_)._Mypair._Myval2._Mylast <= puVar25) || (0xff < *puVar25))
          goto switchD_14e6223c9_default;
          *puVar26 = (uchar)*puVar25;
          puVar25 = puVar25 + 1;
          bVar16 = this->num_components_;
          pDVar28 = this->buffer_;
          iVar22 = iVar22 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar17);
        uVar15 = (ulonglong)bVar16;
      }
      break;
    case DT_FLOAT32:
      iVar22 = 0;
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      pfVar20 = (float *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pfVar20)
          goto switchD_14e6223c9_default;
          fVar29 = *pfVar20;
          uVar13 = _fdclass(fVar29);
          if ((((short)uVar13 == 2) || ((short)uVar13 == 1)) ||
             ((fVar29 < 0.0 || (fVar9 <= fVar29)))) goto switchD_14e6223c9_default;
          if (this->normalized_ == false) {
            uVar11 = (uchar)(int)fVar29;
          }
          else {
            if (fVar6 < fVar29) goto switchD_14e6223c9_default;
            fVar29 = fVar29 * fVar9 + fVar8;
            dVar3 = (double)fVar29;
            lVar18 = (longlong)fVar29;
            if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar3)) {
              auVar2._8_4_ = SUB84(dVar3,0);
              auVar2._0_8_ = dVar3;
              auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar14 = movmskpd(uVar13,auVar2);
              dVar3 = (double)(longlong)(lVar18 - (ulonglong)(uVar14 & 1));
            }
            uVar11 = (uchar)(int)dVar3;
          }
          *puVar26 = uVar11;
          pfVar20 = pfVar20 + 1;
          uVar15 = (ulonglong)this->num_components_;
          iVar22 = iVar22 + 1;
          uVar19 = uVar15;
          if ((byte)param_2 < this->num_components_) {
            uVar19 = uVar5;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar19);
      }
      break;
    case DT_FLOAT64:
      iVar22 = 0;
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      pdVar21 = (double *)
                ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar26 = param_3;
      if (bVar16 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pdVar21)
          goto switchD_14e6223c9_default;
          dVar1 = *pdVar21;
          uVar13 = _dclass(SUB84(dVar1,0));
          if (((((short)uVar13 == 2) || ((short)uVar13 == 1)) || (dVar1 < 0.0)) || (dVar10 <= dVar1)
             ) goto switchD_14e6223c9_default;
          if (this->normalized_ != false) {
            if (dVar3 < dVar1) goto switchD_14e6223c9_default;
            dVar1 = dVar1 * dVar10 + dVar7;
            lVar18 = (longlong)dVar1;
            if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar1)) {
              auVar4._8_4_ = SUB84(dVar1,0);
              auVar4._0_8_ = dVar1;
              auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
              uVar14 = movmskpd(uVar13,auVar4);
              dVar1 = (double)(longlong)(lVar18 - (ulonglong)(uVar14 & 1));
            }
          }
          pdVar21 = pdVar21 + 1;
          iVar22 = iVar22 + 1;
          *puVar26 = (uchar)(int)dVar1;
          uVar15 = (ulonglong)this->num_components_;
          uVar19 = uVar15;
          if ((byte)param_2 < this->num_components_) {
            uVar19 = uVar5;
          }
          puVar26 = puVar26 + 1;
        } while (iVar22 < (int)uVar19);
      }
      break;
    case DT_BOOL:
      iVar22 = 0;
      bVar16 = this->num_components_;
      uVar15 = (ulonglong)bVar16;
      puVar26 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar16) {
        bVar16 = param_2;
      }
      puVar27 = param_3;
      if (bVar16 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= puVar26)
          goto switchD_14e6223c9_default;
          iVar22 = iVar22 + 1;
          *puVar27 = *puVar26;
          puVar26 = puVar26 + 1;
          bVar16 = this->num_components_;
          uVar15 = (ulonglong)bVar16;
          puVar27 = puVar27 + 1;
          uVar17 = (uint)bVar16;
          if ((byte)param_2 < bVar16) {
            uVar17 = uVar14;
          }
        } while (iVar22 < (int)uVar17);
      }
      break;
    default:
      goto switchD_14e6223c9_default;
    }
    if (uVar15 < uVar5) {
      memset(param_3 + uVar15,0,uVar5 - uVar15);
    }
    bVar12 = true;
  }
  return bVar12;
}

// ConvertValue<short> @ 14e622a60

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
draco::GeometryAttribute::ConvertValue<short>
          (GeometryAttribute *this,
          IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> param_1,schar param_2,
          short *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  short sVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  DataBuffer *pDVar22;
  float *pfVar23;
  double *pdVar24;
  uchar *puVar25;
  short *psVar26;
  ushort *puVar27;
  int *piVar28;
  uint *puVar29;
  longlong *plVar30;
  ulonglong *puVar31;
  byte *pbVar32;
  short *psVar33;
  int iVar34;
  ushort *puVar35;
  float fVar36;
  
  fVar12 = __real_c7000000;
  fVar11 = __real_46fffe00;
  dVar10 = __real_c0e0000000000000;
  dVar9 = __real_40dfffc000000000;
  fVar8 = __real_3f000000;
  dVar7 = __real_3fe0000000000000;
  fVar6 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  uVar5 = (ulonglong)(byte)param_2;
  uVar16 = (uint)(byte)param_2;
  if (param_3 == (short *)0x0) {
switchD_14e622ad0_default:
    bVar13 = false;
  }
  else {
    switch(this->data_type_) {
    case DT_INT8:
      pDVar22 = this->buffer_;
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      puVar25 = (pDVar22->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if ((pDVar22->data_)._Mypair._Myval2._Mylast <= puVar25) goto switchD_14e622ad0_default;
          iVar34 = iVar34 + 1;
          *psVar26 = (short)(char)*puVar25;
          puVar25 = puVar25 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar26 = psVar26 + 1;
          pDVar22 = this->buffer_;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar34 < (int)uVar19);
      }
      break;
    case DT_UINT8:
      pDVar22 = this->buffer_;
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pbVar32 = (pDVar22->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      puVar27 = (ushort *)param_3;
      if (bVar18 != 0) {
        do {
          if ((pDVar22->data_)._Mypair._Myval2._Mylast <= pbVar32) goto switchD_14e622ad0_default;
          iVar34 = iVar34 + 1;
          *puVar27 = (ushort)*pbVar32;
          pbVar32 = pbVar32 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          puVar27 = puVar27 + 1;
          pDVar22 = this->buffer_;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar34 < (int)uVar19);
      }
      break;
    case DT_INT16:
      pDVar22 = this->buffer_;
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      psVar26 = (short *)((pDVar22->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar33 = param_3;
      if (bVar18 != 0) {
        do {
          if ((pDVar22->data_)._Mypair._Myval2._Mylast <= psVar26) goto switchD_14e622ad0_default;
          iVar34 = iVar34 + 1;
          *psVar33 = *psVar26;
          psVar26 = psVar26 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar33 = psVar33 + 1;
          pDVar22 = this->buffer_;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar34 < (int)uVar19);
      }
      break;
    case DT_UINT16:
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pDVar22 = this->buffer_;
      iVar34 = 0;
      puVar27 = (ushort *)
                ((pDVar22->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      puVar35 = (ushort *)param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar22->data_)._Mypair._Myval2._Mylast <= puVar27) || (0x7fff < *puVar27))
          goto switchD_14e622ad0_default;
          *puVar35 = *puVar27;
          puVar27 = puVar27 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          pDVar22 = this->buffer_;
          iVar34 = iVar34 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          puVar35 = puVar35 + 1;
        } while (iVar34 < (int)uVar19);
      }
      break;
    case DT_INT32:
      pDVar22 = this->buffer_;
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      piVar28 = (int *)((pDVar22->data_)._Mypair._Myval2._Myfirst +
                       (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar22->data_)._Mypair._Myval2._Mylast <= piVar28) || (0xffff < *piVar28 + 0x8000U)
             ) goto switchD_14e622ad0_default;
          *psVar26 = (short)*piVar28;
          piVar28 = piVar28 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar26 = psVar26 + 1;
          pDVar22 = this->buffer_;
          iVar34 = iVar34 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar34 < (int)uVar19);
      }
      break;
    case DT_UINT32:
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pDVar22 = this->buffer_;
      iVar34 = 0;
      puVar29 = (uint *)((pDVar22->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar22->data_)._Mypair._Myval2._Mylast <= puVar29) || (0x7fff < *puVar29))
          goto switchD_14e622ad0_default;
          *psVar26 = (short)*puVar29;
          puVar29 = puVar29 + 1;
          bVar18 = this->num_components_;
          pDVar22 = this->buffer_;
          iVar34 = iVar34 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          psVar26 = psVar26 + 1;
        } while (iVar34 < (int)uVar19);
        uVar17 = (ulonglong)bVar18;
      }
      break;
    case DT_INT64:
      pDVar22 = this->buffer_;
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      plVar30 = (longlong *)
                ((pDVar22->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar22->data_)._Mypair._Myval2._Mylast <= plVar30) || (0xffff < *plVar30 + 0x8000U)
             ) goto switchD_14e622ad0_default;
          *psVar26 = (short)*plVar30;
          plVar30 = plVar30 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          psVar26 = psVar26 + 1;
          pDVar22 = this->buffer_;
          iVar34 = iVar34 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar34 < (int)uVar19);
      }
      break;
    case DT_UINT64:
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pDVar22 = this->buffer_;
      iVar34 = 0;
      puVar31 = (ulonglong *)
                ((pDVar22->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if (((pDVar22->data_)._Mypair._Myval2._Mylast <= puVar31) || (0x7fff < *puVar31))
          goto switchD_14e622ad0_default;
          *psVar26 = (short)*puVar31;
          puVar31 = puVar31 + 1;
          bVar18 = this->num_components_;
          pDVar22 = this->buffer_;
          iVar34 = iVar34 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
          psVar26 = psVar26 + 1;
        } while (iVar34 < (int)uVar19);
        uVar17 = (ulonglong)bVar18;
      }
      break;
    case DT_FLOAT32:
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pfVar23 = (float *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pfVar23)
          goto switchD_14e622ad0_default;
          fVar36 = *pfVar23;
          uVar15 = _fdclass(fVar36);
          if ((((short)uVar15 == 2) || ((short)uVar15 == 1)) ||
             ((fVar36 < fVar12 || (fVar11 <= fVar36)))) goto switchD_14e622ad0_default;
          if (this->normalized_ == false) {
            sVar14 = (short)(int)fVar36;
          }
          else {
            if ((fVar6 < fVar36) || (fVar36 < 0.0)) goto switchD_14e622ad0_default;
            fVar36 = fVar36 * fVar11 + fVar8;
            dVar3 = (double)fVar36;
            lVar20 = (longlong)fVar36;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar3)) {
              auVar2._8_4_ = SUB84(dVar3,0);
              auVar2._0_8_ = dVar3;
              auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar16 = movmskpd(uVar15,auVar2);
              dVar3 = (double)(longlong)(lVar20 - (ulonglong)(uVar16 & 1));
            }
            sVar14 = (short)(int)dVar3;
          }
          *psVar26 = sVar14;
          pfVar23 = pfVar23 + 1;
          uVar17 = (ulonglong)this->num_components_;
          iVar34 = iVar34 + 1;
          uVar21 = uVar17;
          if ((byte)param_2 < this->num_components_) {
            uVar21 = uVar5;
          }
          psVar26 = psVar26 + 1;
        } while (iVar34 < (int)uVar21);
      }
      break;
    case DT_FLOAT64:
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pdVar24 = (double *)
                ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      psVar26 = param_3;
      if (bVar18 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pdVar24)
          goto switchD_14e622ad0_default;
          dVar1 = *pdVar24;
          uVar15 = _dclass(SUB84(dVar1,0));
          if (((((short)uVar15 == 2) || ((short)uVar15 == 1)) || (dVar1 < dVar10)) ||
             (dVar9 <= dVar1)) goto switchD_14e622ad0_default;
          if (this->normalized_ != false) {
            if ((dVar3 < dVar1) || (dVar1 < 0.0)) goto switchD_14e622ad0_default;
            dVar1 = dVar1 * dVar9 + dVar7;
            lVar20 = (longlong)dVar1;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar1)) {
              auVar4._8_4_ = SUB84(dVar1,0);
              auVar4._0_8_ = dVar1;
              auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
              uVar16 = movmskpd(uVar15,auVar4);
              dVar1 = (double)(longlong)(lVar20 - (ulonglong)(uVar16 & 1));
            }
          }
          pdVar24 = pdVar24 + 1;
          iVar34 = iVar34 + 1;
          *psVar26 = (short)(int)dVar1;
          uVar17 = (ulonglong)this->num_components_;
          uVar21 = uVar17;
          if ((byte)param_2 < this->num_components_) {
            uVar21 = uVar5;
          }
          psVar26 = psVar26 + 1;
        } while (iVar34 < (int)uVar21);
      }
      break;
    case DT_BOOL:
      iVar34 = 0;
      bVar18 = this->num_components_;
      uVar17 = (ulonglong)bVar18;
      pbVar32 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar18) {
        bVar18 = param_2;
      }
      puVar27 = (ushort *)param_3;
      if (bVar18 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pbVar32)
          goto switchD_14e622ad0_default;
          iVar34 = iVar34 + 1;
          *puVar27 = (ushort)*pbVar32;
          pbVar32 = pbVar32 + 1;
          bVar18 = this->num_components_;
          uVar17 = (ulonglong)bVar18;
          puVar27 = puVar27 + 1;
          uVar19 = (uint)bVar18;
          if ((byte)param_2 < bVar18) {
            uVar19 = uVar16;
          }
        } while (iVar34 < (int)uVar19);
      }
      break;
    default:
      goto switchD_14e622ad0_default;
    }
    if (uVar17 < uVar5) {
      psVar26 = param_3 + uVar17;
      for (lVar20 = uVar5 - uVar17; lVar20 != 0; lVar20 = lVar20 + -1) {
        *psVar26 = 0;
        psVar26 = psVar26 + 1;
      }
    }
    bVar13 = true;
  }
  return bVar13;
}

// ConvertValue<unsigned_short> @ 14e6231b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
draco::GeometryAttribute::ConvertValue<unsigned_short>
          (GeometryAttribute *this,
          IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> param_1,schar param_2,
          ushort *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  ushort uVar12;
  undefined4 uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float *pfVar20;
  double *pdVar21;
  uchar *puVar22;
  ushort *puVar23;
  uint *puVar24;
  ulonglong *puVar25;
  byte *pbVar26;
  ushort *puVar27;
  int iVar28;
  DataBuffer *pDVar29;
  float fVar30;
  
  fVar10 = __real_477fff00;
  dVar9 = __real_40efffe000000000;
  fVar8 = __real_3f000000;
  dVar7 = __real_3fe0000000000000;
  fVar6 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  uVar5 = (ulonglong)(byte)param_2;
  uVar14 = (uint)(byte)param_2;
  if (param_3 == (ushort *)0x0) {
switchD_14e623217_default:
    bVar11 = false;
  }
  else {
    switch(this->data_type_) {
    case DT_INT8:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar22 = (pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar22) || ((char)*puVar22 < '\0'))
          goto switchD_14e623217_default;
          *puVar23 = (short)(char)*puVar22;
          puVar22 = puVar22 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          pDVar29 = this->buffer_;
          iVar28 = iVar28 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_UINT8:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      pbVar26 = (pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= pbVar26) goto switchD_14e623217_default;
          iVar28 = iVar28 + 1;
          *puVar23 = (ushort)*pbVar26;
          pbVar26 = pbVar26 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          pDVar29 = this->buffer_;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_INT16:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar23 = (ushort *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar27 = param_3;
      if (bVar15 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar23) || ((short)*puVar23 < 0))
          goto switchD_14e623217_default;
          *puVar27 = *puVar23;
          puVar23 = puVar23 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar27 = puVar27 + 1;
          pDVar29 = this->buffer_;
          iVar28 = iVar28 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_UINT16:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar23 = (ushort *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar27 = param_3;
      if (bVar15 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar23) goto switchD_14e623217_default;
          iVar28 = iVar28 + 1;
          *puVar27 = *puVar23;
          puVar23 = puVar23 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar27 = puVar27 + 1;
          pDVar29 = this->buffer_;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_INT32:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar24 = (uint *)((pDVar29->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar24) || (0xffff < *puVar24))
          goto switchD_14e623217_default;
          *puVar23 = (ushort)*puVar24;
          puVar24 = puVar24 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          pDVar29 = this->buffer_;
          iVar28 = iVar28 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_UINT32:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar24 = (uint *)((pDVar29->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar24) || (0xffff < *puVar24))
          goto switchD_14e623217_default;
          *puVar23 = (ushort)*puVar24;
          puVar24 = puVar24 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          pDVar29 = this->buffer_;
          iVar28 = iVar28 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_INT64:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar25 = (ulonglong *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar25) || (0xffff < *puVar25))
          goto switchD_14e623217_default;
          *puVar23 = (ushort)*puVar25;
          puVar25 = puVar25 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          pDVar29 = this->buffer_;
          iVar28 = iVar28 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_UINT64:
      pDVar29 = this->buffer_;
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      puVar25 = (ulonglong *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar25) || (0xffff < *puVar25))
          goto switchD_14e623217_default;
          *puVar23 = (ushort)*puVar25;
          puVar25 = puVar25 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          pDVar29 = this->buffer_;
          iVar28 = iVar28 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    case DT_FLOAT32:
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      pfVar20 = (float *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pfVar20)
          goto switchD_14e623217_default;
          fVar30 = *pfVar20;
          uVar13 = _fdclass(fVar30);
          if ((((short)uVar13 == 2) || ((short)uVar13 == 1)) ||
             ((fVar30 < 0.0 || (fVar10 <= fVar30)))) goto switchD_14e623217_default;
          if (this->normalized_ == false) {
            uVar12 = (ushort)(int)fVar30;
          }
          else {
            if (fVar6 < fVar30) goto switchD_14e623217_default;
            fVar30 = fVar30 * fVar10 + fVar8;
            dVar3 = (double)fVar30;
            lVar17 = (longlong)fVar30;
            if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar3)) {
              auVar2._8_4_ = SUB84(dVar3,0);
              auVar2._0_8_ = dVar3;
              auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar14 = movmskpd(uVar13,auVar2);
              dVar3 = (double)(longlong)(lVar17 - (ulonglong)(uVar14 & 1));
            }
            uVar12 = (ushort)(int)dVar3;
          }
          *puVar23 = uVar12;
          pfVar20 = pfVar20 + 1;
          uVar19 = (ulonglong)this->num_components_;
          iVar28 = iVar28 + 1;
          uVar18 = uVar19;
          if ((byte)param_2 < this->num_components_) {
            uVar18 = uVar5;
          }
          puVar23 = puVar23 + 1;
        } while (iVar28 < (int)uVar18);
      }
      break;
    case DT_FLOAT64:
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      pdVar21 = (double *)
                ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pdVar21)
          goto switchD_14e623217_default;
          dVar1 = *pdVar21;
          uVar13 = _dclass(SUB84(dVar1,0));
          if (((((short)uVar13 == 2) || ((short)uVar13 == 1)) || (dVar1 < 0.0)) || (dVar9 <= dVar1))
          goto switchD_14e623217_default;
          if (this->normalized_ != false) {
            if (dVar3 < dVar1) goto switchD_14e623217_default;
            dVar1 = dVar1 * dVar9 + dVar7;
            lVar17 = (longlong)dVar1;
            if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar1)) {
              auVar4._8_4_ = SUB84(dVar1,0);
              auVar4._0_8_ = dVar1;
              auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
              uVar14 = movmskpd(uVar13,auVar4);
              dVar1 = (double)(longlong)(lVar17 - (ulonglong)(uVar14 & 1));
            }
          }
          pdVar21 = pdVar21 + 1;
          iVar28 = iVar28 + 1;
          *puVar23 = (ushort)(int)dVar1;
          uVar19 = (ulonglong)this->num_components_;
          uVar18 = uVar19;
          if ((byte)param_2 < this->num_components_) {
            uVar18 = uVar5;
          }
          puVar23 = puVar23 + 1;
        } while (iVar28 < (int)uVar18);
      }
      break;
    case DT_BOOL:
      iVar28 = 0;
      bVar15 = this->num_components_;
      uVar19 = (ulonglong)bVar15;
      pbVar26 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar15) {
        bVar15 = param_2;
      }
      puVar23 = param_3;
      if (bVar15 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pbVar26)
          goto switchD_14e623217_default;
          iVar28 = iVar28 + 1;
          *puVar23 = (ushort)*pbVar26;
          pbVar26 = pbVar26 + 1;
          bVar15 = this->num_components_;
          uVar19 = (ulonglong)bVar15;
          puVar23 = puVar23 + 1;
          uVar16 = (uint)bVar15;
          if ((byte)param_2 < bVar15) {
            uVar16 = uVar14;
          }
        } while (iVar28 < (int)uVar16);
      }
      break;
    default:
      goto switchD_14e623217_default;
    }
    if (uVar19 < uVar5) {
      puVar23 = param_3 + uVar19;
      for (lVar17 = uVar5 - uVar19; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar23 = 0;
        puVar23 = puVar23 + 1;
      }
    }
    bVar11 = true;
  }
  return bVar11;
}

// ConvertValue<unsigned_int> @ 14e623890

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
draco::GeometryAttribute::ConvertValue<unsigned_int>
          (GeometryAttribute *this,
          IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> param_1,schar param_2,
          uint *param_3)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  float *pfVar20;
  double *pdVar21;
  uchar *puVar22;
  short *psVar23;
  ushort *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  byte *pbVar27;
  uint *puVar28;
  DataBuffer *pDVar29;
  
  fVar10 = __real_4f800000;
  dVar9 = __real_41efffffffe00000;
  dVar8 = __real_3fe0000000000000;
  fVar7 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  uVar6 = (ulonglong)(byte)param_2;
  uVar13 = (uint)(byte)param_2;
  if (param_3 == (uint *)0x0) {
switchD_14e6238fc_default:
    bVar11 = false;
  }
  else {
    switch(this->data_type_) {
    case DT_INT8:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      puVar22 = (pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar22) goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar25 = (int)(char)*puVar22;
          puVar22 = puVar22 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          puVar25 = puVar25 + 1;
          pDVar29 = this->buffer_;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_UINT8:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      pbVar27 = (pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= pbVar27) goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          pDVar29 = this->buffer_;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
          puVar25 = puVar25 + 1;
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_INT16:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      psVar23 = (short *)((pDVar29->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= psVar23) goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar25 = (int)*psVar23;
          psVar23 = psVar23 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          pDVar29 = this->buffer_;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
          puVar25 = puVar25 + 1;
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_UINT16:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      puVar24 = (ushort *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar24) goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar25 = (uint)*puVar24;
          puVar24 = puVar24 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          puVar25 = puVar25 + 1;
          pDVar29 = this->buffer_;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_INT32:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      puVar25 = (uint *)((pDVar29->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar28 = param_3;
      if (bVar14 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar25) goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar28 = *puVar25;
          puVar25 = puVar25 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          puVar28 = puVar28 + 1;
          pDVar29 = this->buffer_;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_UINT32:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      puVar25 = (uint *)((pDVar29->data_)._Mypair._Myval2._Myfirst +
                        (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar28 = param_3;
      if (bVar14 != 0) {
        do {
          if ((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar25) goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar28 = *puVar25;
          puVar25 = puVar25 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          puVar28 = puVar28 + 1;
          pDVar29 = this->buffer_;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_INT64:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      puVar26 = (ulonglong *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar26) || (0xffffffff < *puVar26))
          goto switchD_14e6238fc_default;
          *puVar25 = (uint)*puVar26;
          puVar26 = puVar26 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          pDVar29 = this->buffer_;
          iVar19 = iVar19 + 1;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
          puVar25 = puVar25 + 1;
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_UINT64:
      pDVar29 = this->buffer_;
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      puVar26 = (ulonglong *)
                ((pDVar29->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if (((pDVar29->data_)._Mypair._Myval2._Mylast <= puVar26) || (0xffffffff < *puVar26))
          goto switchD_14e6238fc_default;
          *puVar25 = (uint)*puVar26;
          puVar26 = puVar26 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          pDVar29 = this->buffer_;
          iVar19 = iVar19 + 1;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
          puVar25 = puVar25 + 1;
        } while (iVar19 < (int)uVar15);
      }
      break;
    case DT_FLOAT32:
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      pfVar20 = (float *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                         (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pfVar20) {
            return false;
          }
          fVar1 = *pfVar20;
          uVar12 = _fdclass(fVar1);
          if ((short)uVar12 == 2) {
            return false;
          }
          if ((short)uVar12 == 1) {
            return false;
          }
          if (fVar1 < 0.0) {
            return false;
          }
          if (fVar10 <= fVar1) {
            return false;
          }
          if (this->normalized_ == false) {
            uVar13 = (uint)(longlong)fVar1;
          }
          else {
            if (fVar7 < fVar1) {
              return false;
            }
            dVar4 = (double)fVar1 * dVar9 + dVar8;
            lVar16 = (longlong)dVar4;
            if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar4)) {
              auVar3._8_4_ = SUB84(dVar4,0);
              auVar3._0_8_ = dVar4;
              auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              uVar13 = movmskpd(uVar12,auVar3);
              dVar4 = (double)(longlong)(lVar16 - (ulonglong)(uVar13 & 1));
            }
            uVar13 = (uint)(longlong)dVar4;
          }
          *puVar25 = uVar13;
          pfVar20 = pfVar20 + 1;
          uVar18 = (ulonglong)this->num_components_;
          iVar19 = iVar19 + 1;
          uVar17 = uVar18;
          if ((byte)param_2 < this->num_components_) {
            uVar17 = uVar6;
          }
          puVar25 = puVar25 + 1;
        } while (iVar19 < (int)uVar17);
      }
      if (uVar18 < uVar6) {
        memset(param_3 + uVar18,0,(uVar6 - uVar18) * 4);
      }
      return true;
    case DT_FLOAT64:
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      pdVar21 = (double *)
                ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pdVar21)
          goto switchD_14e6238fc_default;
          dVar2 = *pdVar21;
          uVar12 = _dclass(SUB84(dVar2,0));
          if (((((short)uVar12 == 2) || ((short)uVar12 == 1)) || (dVar2 < 0.0)) || (dVar9 <= dVar2))
          goto switchD_14e6238fc_default;
          if (this->normalized_ != false) {
            if (dVar4 < dVar2) goto switchD_14e6238fc_default;
            dVar2 = dVar2 * dVar9 + dVar8;
            lVar16 = (longlong)dVar2;
            if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar2)) {
              auVar5._8_4_ = SUB84(dVar2,0);
              auVar5._0_8_ = dVar2;
              auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
              uVar13 = movmskpd(uVar12,auVar5);
              dVar2 = (double)(longlong)(lVar16 - (ulonglong)(uVar13 & 1));
            }
          }
          pdVar21 = pdVar21 + 1;
          iVar19 = iVar19 + 1;
          *puVar25 = (uint)(longlong)dVar2;
          uVar18 = (ulonglong)this->num_components_;
          uVar17 = uVar18;
          if ((byte)param_2 < this->num_components_) {
            uVar17 = uVar6;
          }
          puVar25 = puVar25 + 1;
        } while (iVar19 < (int)uVar17);
      }
      break;
    case DT_BOOL:
      iVar19 = 0;
      bVar14 = this->num_components_;
      uVar18 = (ulonglong)bVar14;
      pbVar27 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
                (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
      if ((byte)param_2 < bVar14) {
        bVar14 = param_2;
      }
      puVar25 = param_3;
      if (bVar14 != 0) {
        do {
          if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pbVar27)
          goto switchD_14e6238fc_default;
          iVar19 = iVar19 + 1;
          *puVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
          bVar14 = this->num_components_;
          uVar18 = (ulonglong)bVar14;
          puVar25 = puVar25 + 1;
          uVar15 = (uint)bVar14;
          if ((byte)param_2 < bVar14) {
            uVar15 = uVar13;
          }
        } while (iVar19 < (int)uVar15);
      }
      break;
    default:
      goto switchD_14e6238fc_default;
    }
    if (uVar18 < uVar6) {
      memset(param_3 + uVar18,0,(uVar6 - uVar18) * 4);
    }
    bVar11 = true;
  }
  return bVar11;
}

// ConvertValue<float> @ 14e623f70

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
draco::GeometryAttribute::ConvertValue<float>
          (GeometryAttribute *this,
          IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> param_1,schar param_2,
          float *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  uchar *puVar14;
  short *psVar15;
  ushort *puVar16;
  int *piVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  float *pfVar21;
  double *pdVar22;
  byte *pbVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  
  fVar7 = __real_20000000;
  fVar6 = __real_1f800000;
  fVar5 = __real_30000000;
  fVar4 = __real_2f800000;
  fVar3 = __real_37800080;
  fVar2 = __real_3c010204;
  fVar25 = __real_3b808081;
  fVar26 = __real_38000100;
  uVar10 = (uint)(byte)param_2;
  if (param_3 == (float *)0x0) {
switchD_14e623faf_default:
    return false;
  }
  switch(this->data_type_) {
  case DT_INT8:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    puVar14 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= puVar14) {
          return false;
        }
        fVar26 = (float)(int)(char)*puVar14;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar2;
        }
        *pfVar21 = fVar26;
        puVar14 = puVar14 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar10 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar10 = (uint)(byte)param_2;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar10);
    }
    break;
  case DT_UINT8:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    pbVar23 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pbVar23) {
          return false;
        }
        fVar26 = (float)*pbVar23;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar25;
        }
        *pfVar21 = fVar26;
        pbVar23 = pbVar23 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_INT16:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    psVar15 = (short *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                       (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= psVar15) {
          return false;
        }
        fVar25 = (float)(int)*psVar15;
        if (this->normalized_ != false) {
          fVar25 = fVar25 * fVar26;
        }
        *pfVar21 = fVar25;
        psVar15 = psVar15 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_UINT16:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    puVar16 = (ushort *)
              ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= puVar16) {
          return false;
        }
        fVar26 = (float)*puVar16;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar3;
        }
        *pfVar21 = fVar26;
        puVar16 = puVar16 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_INT32:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    piVar17 = (int *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                     (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= piVar17) {
          return false;
        }
        fVar26 = (float)*piVar17;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar5;
        }
        *pfVar21 = fVar26;
        piVar17 = piVar17 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_UINT32:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    puVar18 = (uint *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                      (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= puVar18) {
          return false;
        }
        fVar26 = (float)*puVar18;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar4;
        }
        *pfVar21 = fVar26;
        puVar18 = puVar18 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_INT64:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    plVar19 = (longlong *)
              ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= plVar19) {
          return false;
        }
        fVar26 = (float)*plVar19;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar7;
        }
        *pfVar21 = fVar26;
        plVar19 = plVar19 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_UINT64:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    puVar20 = (ulonglong *)
              ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= puVar20) {
          return false;
        }
        fVar26 = (float)*puVar20;
        if (this->normalized_ != false) {
          fVar26 = fVar26 * fVar6;
        }
        *pfVar21 = fVar26;
        puVar20 = puVar20 + 1;
        uVar24 = (uint)this->num_components_;
        iVar12 = iVar12 + 1;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_FLOAT32:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    pfVar21 = (float *)((this->buffer_->data_)._Mypair._Myval2._Myfirst +
                       (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar13 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pfVar21) {
          return false;
        }
        iVar12 = iVar12 + 1;
        *pfVar13 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        uVar24 = (uint)this->num_components_;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar13 = pfVar13 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_FLOAT64:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    pdVar22 = (double *)
              ((this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_);
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pdVar22) {
          return false;
        }
        dVar1 = *pdVar22;
        iVar12 = iVar12 + 1;
        pdVar22 = pdVar22 + 1;
        *pfVar21 = (float)dVar1;
        uVar24 = (uint)this->num_components_;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  case DT_BOOL:
    bVar9 = this->num_components_;
    uVar24 = (uint)bVar9;
    iVar12 = 0;
    pbVar23 = (this->buffer_->data_)._Mypair._Myval2._Myfirst +
              (ulonglong)param_1.value_ * this->byte_stride_ + this->byte_offset_;
    if ((byte)param_2 < bVar9) {
      bVar9 = param_2;
    }
    pfVar21 = param_3;
    if (bVar9 != 0) {
      do {
        if ((this->buffer_->data_)._Mypair._Myval2._Mylast <= pbVar23) {
          return false;
        }
        bVar9 = *pbVar23;
        iVar12 = iVar12 + 1;
        pbVar23 = pbVar23 + 1;
        *pfVar21 = (float)bVar9;
        uVar24 = (uint)this->num_components_;
        uVar11 = uVar24;
        if ((byte)param_2 < this->num_components_) {
          uVar11 = uVar10;
        }
        pfVar21 = pfVar21 + 1;
      } while (iVar12 < (int)uVar11);
    }
    break;
  default:
    goto switchD_14e623faf_default;
  }
  uVar8 = (ulonglong)uVar24;
  if (uVar8 < (byte)param_2) {
    memset(param_3 + uVar8,0,((byte)param_2 - uVar8) * 4);
  }
  return true;
}

// CopyWithoutConversion<UE::Math::TVector2<float>,2> @ 14e6245b0

void __cdecl
GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector2<float>,2>
          (uint param_1,EComponentType param_2,bool param_3,uint param_4,FBufferView *param_5,
          ulong64 param_6,TVector2<float> *param_7)

{
  uchar *puVar1;
  code *pcVar2;
  longlong lVar3;
  FBufferView *pFVar4;
  bool bVar5;
  TVector2<float> TVar6;
  uint uVar7;
  undefined1 local_38 [16];
  
  pFVar4 = param_5;
  puVar1 = (param_5->Buffer).Data;
  if (puVar1 != (uchar *)0x0) {
    if (((param_1 & 0xfffffff7) == 0) && (param_2 == F32)) {
      memcpy(param_7,puVar1 + param_6 + param_5->ByteOffset,(ulonglong)param_4 << 3);
      return;
    }
    uVar7 = 0;
    if (param_3) {
      if (param_4 != 0) {
        do {
          TVar6 = GetNormalized<UE::Math::TVector2<float>,2>
                            ((EComponentType)local_38,(void *)(ulonglong)param_2);
          uVar7 = uVar7 + 1;
          *param_7 = (TVector2<float>)*(TVector2<float>_u_0 *)TVar6.field0_0x0;
          param_7 = (TVector2<float> *)&param_7[1].field0_0x0;
        } while (uVar7 < param_4);
      }
    }
    else if (param_4 != 0) {
      do {
        puVar1 = (pFVar4->Buffer).Data;
        lVar3 = pFVar4->ByteOffset + (ulonglong)(uVar7 * param_1);
        switch(param_2) {
        case S8:
          param_5 = (FBufferView *)
                    CONCAT44((float)(int)(char)puVar1[param_6 + lVar3 + 1],
                             (float)(int)(char)puVar1[param_6 + lVar3]);
          break;
        case U8:
          param_5 = (FBufferView *)
                    CONCAT44((float)puVar1[param_6 + lVar3 + 1],(float)puVar1[param_6 + lVar3]);
          break;
        case S16:
          param_5 = (FBufferView *)
                    CONCAT44((float)(int)*(short *)(puVar1 + param_6 + lVar3 + 2),
                             (float)(int)*(short *)(puVar1 + param_6 + lVar3));
          break;
        case U16:
          param_5 = (FBufferView *)
                    CONCAT44((float)*(ushort *)(puVar1 + param_6 + lVar3 + 2),
                             (float)*(ushort *)(puVar1 + param_6 + lVar3));
          break;
        case U32:
          param_5 = (FBufferView *)
                    CONCAT44((float)*(uint *)(puVar1 + param_6 + lVar3 + 4),
                             (float)*(uint *)(puVar1 + param_6 + lVar3));
          break;
        case F32:
          param_5 = (FBufferView *)
                    CONCAT44(*(undefined4 *)(puVar1 + param_6 + lVar3 + 4),
                             *(undefined4 *)(puVar1 + param_6 + lVar3));
          break;
        default:
          param_5 = (FBufferView *)0x0;
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2814153273458556710>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                             ,0xda,"false");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar7 = uVar7 + 1;
        param_7->field0_0x0 = (TVector2<float>_u_0)param_5;
        param_7 = param_7 + 1;
      } while (uVar7 < param_4);
    }
  }
  return;
}

// CopyWithoutConversion<UE::Math::TVector4<float>,4> @ 14e624890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector4<float>,4>
          (uint param_1,EComponentType param_2,bool param_3,uint param_4,FBufferView *param_5,
          ulong64 param_6,TVector4<float> *param_7)

{
  uchar *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector4<float> *pTVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  TVector4<float> local_48 [2];
  
  uVar4 = _UNK_150689648;
  uVar3 = ___xmm_3f800000000000000000000000000000;
  puVar1 = (param_5->Buffer).Data;
  if (puVar1 != (uchar *)0x0) {
    if (((param_1 & 0xffffffef) == 0) && (param_2 == F32)) {
      memcpy(param_7,puVar1 + param_6 + param_5->ByteOffset,(ulonglong)param_4 << 4);
      return;
    }
    uVar8 = 0;
    if (param_3) {
      if (param_4 != 0) {
        do {
          pTVar6 = GetNormalized<UE::Math::TVector4<float>,4>
                             (local_48,param_2,
                              (param_5->Buffer).Data +
                              param_6 + (ulonglong)(uVar8 * param_1) + param_5->ByteOffset);
          uVar8 = uVar8 + 1;
          uVar3 = *(undefined8 *)((longlong)&pTVar6->field0_0x0 + 8);
          *(undefined8 *)&param_7->field0_0x0 = *(undefined8 *)&pTVar6->field0_0x0;
          *(undefined8 *)((longlong)&param_7->field0_0x0 + 8) = uVar3;
          param_7 = param_7 + 1;
        } while (uVar8 < param_4);
      }
    }
    else if (param_4 != 0) {
      do {
        lVar7 = (ulonglong)(uVar8 * param_1) + param_5->ByteOffset;
        puVar1 = (param_5->Buffer).Data;
        switch(param_2) {
        case S8:
          local_58 = CONCAT44((float)(int)(char)puVar1[param_6 + lVar7 + 1],
                              (float)(int)(char)puVar1[param_6 + lVar7]);
          uStack_50 = CONCAT44((float)(int)(char)puVar1[param_6 + lVar7 + 3],
                               (float)(int)(char)puVar1[param_6 + lVar7 + 2]);
          break;
        case U8:
          local_58 = CONCAT44((float)puVar1[param_6 + lVar7 + 1],(float)puVar1[param_6 + lVar7]);
          uStack_50 = CONCAT44((float)puVar1[param_6 + lVar7 + 3],(float)puVar1[param_6 + lVar7 + 2]
                              );
          break;
        case S16:
          local_58 = CONCAT44((float)(int)*(short *)(puVar1 + param_6 + lVar7 + 2),
                              (float)(int)*(short *)(puVar1 + param_6 + lVar7));
          uStack_50 = CONCAT44((float)(int)*(short *)(puVar1 + param_6 + lVar7 + 6),
                               (float)(int)*(short *)(puVar1 + param_6 + lVar7 + 4));
          break;
        case U16:
          local_58 = CONCAT44((float)*(ushort *)(puVar1 + param_6 + lVar7 + 2),
                              (float)*(ushort *)(puVar1 + param_6 + lVar7));
          uStack_50 = CONCAT44((float)*(ushort *)(puVar1 + param_6 + lVar7 + 6),
                               (float)*(ushort *)(puVar1 + param_6 + lVar7 + 4));
          break;
        case U32:
          local_58 = CONCAT44((float)*(uint *)(puVar1 + param_6 + lVar7 + 4),
                              (float)*(uint *)(puVar1 + param_6 + lVar7));
          uStack_50 = CONCAT44((float)*(uint *)(puVar1 + param_6 + lVar7 + 0xc),
                               (float)*(uint *)(puVar1 + param_6 + lVar7 + 8));
          break;
        case F32:
          local_58 = *(undefined8 *)(puVar1 + param_6 + lVar7);
          uStack_50 = *(undefined8 *)(puVar1 + param_6 + lVar7 + 8);
          break;
        default:
          local_58 = uVar3;
          uStack_50 = uVar4;
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2814153273458556710>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                             ,0xda,"false");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar8 = uVar8 + 1;
        *(undefined8 *)&param_7->field0_0x0 = local_58;
        *(undefined8 *)((longlong)&param_7->field0_0x0 + 8) = uStack_50;
        param_7 = param_7 + 1;
      } while (uVar8 < param_4);
    }
  }
  return;
}

// CopyWithoutConversion<UE::Math::TVector<float>,3> @ 14e624c10

void __cdecl
GLTF::`anonymous_namespace'::CopyWithoutConversion<UE::Math::TVector<float>,3>
          (uint param_1,EComponentType param_2,bool param_3,uint param_4,FBufferView *param_5,
          ulong64 param_6,TVector<float> *param_7)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<float> local_50 [3];
  
  puVar1 = (param_5->Buffer).Data;
  if (puVar1 != (uchar *)0x0) {
    if (((param_1 == 0) || (param_1 == 0xc)) && (param_2 == F32)) {
      memcpy(param_7,puVar1 + param_6 + param_5->ByteOffset,(ulonglong)param_4 * 0xc);
      return;
    }
    uVar6 = 0;
    if (param_3) {
      if (param_4 != 0) {
        do {
          pTVar4 = GetNormalized<UE::Math::TVector<float>,3>
                             (local_50,param_2,
                              (param_5->Buffer).Data +
                              (ulonglong)(uVar6 * param_1) + param_5->ByteOffset + param_6);
          uVar6 = uVar6 + 1;
          *(undefined8 *)&param_7->field0_0x0 = *(undefined8 *)&pTVar4->field0_0x0;
          (param_7->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
          param_7 = param_7 + 1;
        } while (uVar6 < param_4);
      }
    }
    else if (param_4 != 0) {
      do {
        puVar1 = (param_5->Buffer).Data;
        lVar5 = (ulonglong)(uVar6 * param_1) + param_5->ByteOffset + param_6;
        switch(param_2) {
        case S8:
          fVar8 = (float)(int)(char)puVar1[lVar5];
          fVar9 = (float)(int)(char)puVar1[lVar5 + 1];
          fVar7 = (float)(int)(char)puVar1[lVar5 + 2];
          break;
        case U8:
          fVar8 = (float)puVar1[lVar5];
          fVar9 = (float)puVar1[lVar5 + 1];
          fVar7 = (float)puVar1[lVar5 + 2];
          break;
        case S16:
          fVar8 = (float)(int)*(short *)(puVar1 + lVar5);
          fVar9 = (float)(int)*(short *)(puVar1 + lVar5 + 2);
          fVar7 = (float)(int)*(short *)(puVar1 + lVar5 + 4);
          break;
        case U16:
          fVar8 = (float)*(ushort *)(puVar1 + lVar5);
          fVar9 = (float)*(ushort *)(puVar1 + lVar5 + 2);
          fVar7 = (float)*(ushort *)(puVar1 + lVar5 + 4);
          break;
        case U32:
          fVar8 = (float)*(uint *)(puVar1 + lVar5);
          fVar9 = (float)*(uint *)(puVar1 + lVar5 + 4);
          fVar7 = (float)*(uint *)(puVar1 + lVar5 + 8);
          break;
        case F32:
          fVar9 = *(float *)(puVar1 + lVar5 + 4);
          fVar8 = *(float *)(puVar1 + lVar5);
          fVar7 = *(float *)(puVar1 + lVar5 + 8);
          break;
        default:
          fVar8 = 0.0;
          fVar9 = 0.0;
          fVar7 = 0.0;
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2814153273458556710>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                             ,0xda,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        *(ulonglong *)&param_7->field0_0x0 = CONCAT44(fVar9,fVar8);
        uVar6 = uVar6 + 1;
        (param_7->field0_0x0)._s_0.Z = fVar7;
        param_7 = param_7 + 1;
      } while (uVar6 < param_4);
    }
  }
  return;
}

// DefaultConstructItems<GLTF::FAccessor,int> @ 14e6253c0

void __cdecl DefaultConstructItems<GLTF::FAccessor,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined2 *)(lVar1 + 8) = 0;
      *(undefined1 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined4 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0;
      *(undefined8 *)(lVar1 + 0x60) = 0;
      *(undefined8 *)(lVar1 + 0x68) = 0;
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x80) = 0;
      *(undefined8 *)(lVar1 + 0x88) = 0;
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined8 *)(lVar1 + 0x98) = 0;
      *(undefined8 *)(lVar1 + 0xa0) = 0;
      *(undefined4 *)(lVar1 + 0xa8) = 0;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
      *(undefined8 *)(lVar1 + 0xb8) = 0;
      *(undefined4 *)(lVar1 + 0xc0) = 0;
      lVar1 = lVar1 + 0xd0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int> @ 14e625470

void __cdecl
DefaultConstructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int> @ 14e6254c0

void __cdecl
DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
          (TTuple<GLTF::EMessageSeverity,FText> *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)&param_1->field_0x8;
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FAnimation,int> @ 14e625500

void __cdecl DestructItems<GLTF::FAnimation,int>(FAnimation *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FCamera,int> @ 14e6255a0

void __cdecl DestructItems<GLTF::FCamera,int>(FCamera *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xd] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xd]);
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FMetadata::FExtraData,int> @ 14e625620

void __cdecl DestructItems<GLTF::FMetadata::FExtraData,int>(FExtraData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<GLTF::FImage,int> @ 14e625670

void __cdecl DestructItems<GLTF::FImage,int>(FImage *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      if ((void *)puVar1[-0xf] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xf]);
      }
      if ((void *)puVar1[-0x11] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x11]);
      }
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FLight,int> @ 14e625710

void __cdecl DestructItems<GLTF::FLight,int>(FLight *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = pFVar2[4].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FMaterial,int> @ 14e625760

void __cdecl DestructItems<GLTF::FMaterial,int>(FMaterial *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0x6a] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x6a]);
      }
      puVar1 = puVar1 + 0x6e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FMesh,int> @ 14e6257e0

void __cdecl DestructItems<GLTF::FMesh,int>(FMesh *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      DestructItems<FString,int>((FString *)puVar1[-10],*(int *)(puVar1 + -9));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      DestructItems<GLTF::FPrimitive,int>((FPrimitive *)puVar1[-0xe],*(int *)(puVar1 + -0xd));
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      if ((void *)puVar1[-0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x10]);
      }
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FMorphTarget,int> @ 14e6258a0

void __cdecl DestructItems<GLTF::FMorphTarget,int>(FMorphTarget *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<GLTF::FNode,int> @ 14e6258e0

void __cdecl DestructItems<GLTF::FNode,int>(FNode *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -0x17) = 0;
      if ((void *)puVar1[-0x18] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x18]);
      }
      TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x20));
      *(undefined4 *)(puVar1 + -0x21) = 0;
      if ((void *)puVar1[-0x22] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x22]);
      }
      TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x2a));
      if ((void *)puVar1[-0x2c] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x2c]);
      }
      if ((void *)puVar1[-0x3a] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x3a]);
      }
      if ((void *)puVar1[-0x48] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x48]);
      }
      puVar1 = puVar1 + 0x4c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FPrimitive,int> @ 14e6259d0

void __cdecl DestructItems<GLTF::FPrimitive,int>(FPrimitive *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      DestructItems<GLTF::FMorphTarget,int>((FMorphTarget *)puVar1[2],*(int *)(puVar1 + 3));
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      DestructItems<GLTF::FVariantMapping,int>((FVariantMapping *)puVar1[-10],*(int *)(puVar1 + -9))
      ;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FScene,int> @ 14e625a70

void __cdecl DestructItems<GLTF::FScene,int>(FScene *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FSkinInfo,int> @ 14e625b00

void __cdecl DestructItems<GLTF::FSkinInfo,int>(FSkinInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[3]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xb] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xb]);
      }
      if ((void *)puVar1[-0xd] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xd]);
      }
      puVar1 = puVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FTexture,int> @ 14e625b90

void __cdecl DestructItems<GLTF::FTexture,int>(FTexture *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Extras).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FVariantMapping,int> @ 14e625c10

void __cdecl DestructItems<GLTF::FVariantMapping,int>(FVariantMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->VariantIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FVariantMapping *)(&param_1->VariantIndices + 1);
  }
  return;
}

// DestructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int> @ 14e625c50

void __cdecl
DestructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int>
          (TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GLTF::FMaterialExpressionInput,int> @ 14e625cb0

void __cdecl
DestructItems<GLTF::FMaterialExpressionInput,int>(FMaterialExpressionInput *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Emplace<TPairInitializer<int_const_&,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps_&&>_> @ 14e626a10

FSetElementId __thiscall
TSet<TTuple<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,_GLTF::FFileReader::ResolveConflictingTextures_::__l2::FAffectedTextureMaps_&&>_>
          (void *this,
          TPairInitializer<int_const_&,_private:_void___cdecl_GLTF::FFileReader::ResolveConflictingTextures(void)_::_2_::FAffectedTextureMaps_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  void *_Dst;
  uint *_Src;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar5);
  if (local_48.Pointer == (uint *)0x0) {
    _Src = (uint *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    ((uint *)((longlong)local_48.Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_48.Pointer + 8))[1] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *puVar3 = 0;
    *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)(puVar3 + 1);
    *(uint *)((longlong)local_48.Pointer + 0x14) = *(uint *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  bVar11 = false;
  uVar10 = *_Src;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar8 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar8 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar10) * 4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)this;
      do {
        if (*(uint *)((longlong)iVar5 * 0x20 + lVar8) == uVar10) {
          bVar11 = iVar5 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar5 * 0x20 + lVar8);
            pvVar4 = *(void **)((longlong)_Dst + 8);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar8);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
      _Src[7] = uVar10;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
      _Src[6] = *(uint *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindByPredicate<`GLTF::FMetadata::GetExtraData'::__l2::<lambda_1>_> @ 14e626df0

FExtraData * __thiscall
TArray<GLTF::FMetadata::FExtraData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_GLTF::FMetadata::GetExtraData_::__l2::<lambda_1>_>
          (TArray<GLTF::FMetadata::FExtraData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  int iVar2;
  FExtraData *pFVar3;
  FExtraData *pFVar4;
  bool bVar5;
  
  pFVar4 = (FExtraData *)(this->AllocatorInstance).Data;
  pFVar3 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar3) {
      return (FExtraData *)0x0;
    }
    iVar2 = (pFVar4->Name).Data.ArrayNum;
    iVar1 = ((param_1.Name)->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return pFVar4;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data,
                         (wchar_t *)((param_1.Name)->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (bVar5) break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// FindByPredicate<`GLTF::FMesh::HasTexCoords'::__l2::<lambda_1>_> @ 14e626e80

FPrimitive * __thiscall
TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_>::
FindByPredicate<_GLTF::FMesh::HasTexCoords_::__l2::<lambda_1>_>
          (TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  FPrimitive *pFVar4;
  FPrimitive *pFVar5;
  
  pFVar4 = (FPrimitive *)(this->AllocatorInstance).Data;
  pFVar5 = pFVar4 + this->ArrayNum;
  do {
    if (pFVar4 == pFVar5) {
      return (FPrimitive *)0x0;
    }
    if (param_1.Index < 8) {
      bVar3 = (byte)(param_1.Index + 3);
      if ((((int)(param_1.Index + 3 & 0xff) < (int)pFVar4->_padding_) &&
          (*(byte *)(pFVar4->_padding_ + (ulonglong)bVar3 * 0x10) == bVar3)) &&
         ((lVar1 = *(longlong *)(pFVar4->_padding_ + 8 + (ulonglong)bVar3 * 0x10),
          *(longlong *)(lVar1 + 0x98) != 0 || (*(char *)(lVar1 + 0x18) != '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        return pFVar4;
      }
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// FindByPredicate<`GLTF::FMesh::IsValidPrivate'::__l2::<lambda_1>_> @ 14e626f00

FPrimitive * __thiscall
TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_>::
FindByPredicate<_GLTF::FMesh::IsValidPrivate_::__l2::<lambda_1>_>
          (TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  char cVar1;
  FPrimitive *this_00;
  FPrimitive *pFVar2;
  
  this_00 = (FPrimitive *)(this->AllocatorInstance).Data;
  pFVar2 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FPrimitive *)0x0;
    }
    if ((this_00->bIsValidCache).bIsSet == false) {
      cVar1 = GLTF::FPrimitive::IsValidPrivate(this_00);
    }
    else {
      cVar1 = (this_00->bIsValidCache).TypedValue;
    }
    if (cVar1 == '\0') break;
    this_00 = this_00 + 1;
  }
  return this_00;
}

// FindExpression<GLTF::FMaterialExpressionColor> @ 14e626f70

FMaterialExpressionColor * __cdecl
GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionColor>
          (FString *param_1,FMaterialElement *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMaterialExpressionColor *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int iVar8;
  
  iVar3 = (param_2->Expressions).ArrayNum;
  iVar8 = 0;
  if (iVar3 < 1) {
    return (FMaterialExpressionColor *)0x0;
  }
  lVar7 = 0;
  if (0 < iVar3) goto LAB_14e626fdd;
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_589650665588916036>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                     ,0xbc,"Index < Expressions.Num()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMaterialExpressionColor *)(*pcVar1)();
    return pFVar4;
  }
  do {
    do {
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      if ((param_2->Expressions).ArrayNum <= iVar8) goto LAB_14e6270b6;
LAB_14e626fdd:
      if ((iVar8 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMaterialExpressionColor *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = *(FMaterialExpressionColor **)((param_2->Expressions).AllocatorInstance.Data + lVar7)
      ;
    } while ((pFVar4 == (FMaterialExpressionColor *)0x0) ||
            (((iVar3 = (int)pFVar4->_padding_, iVar3 != 0 && (iVar3 != 1)) && (iVar3 != 4))));
    if ((int)pFVar4->_padding_ == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)pFVar4->_padding_;
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
  } while (iVar3 != 0);
  if ((int)pFVar4->_padding_ != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8988603957609758824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialFactory.cpp"
                       ,0x68,"Expression->GetType() == (EMaterialExpressionType)ReturnClass::Type");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMaterialExpressionColor *)(*pcVar1)();
      return pFVar4;
    }
LAB_14e6270b6:
    pFVar4 = (FMaterialExpressionColor *)0x0;
  }
  return pFVar4;
}

// FindExpression<GLTF::FMaterialExpressionTexture> @ 14e6270f0

FMaterialExpressionTexture * __cdecl
GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionTexture>
          (FString *param_1,FMaterialElement *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMaterialExpressionTexture *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int iVar8;
  
  iVar3 = (param_2->Expressions).ArrayNum;
  iVar8 = 0;
  if (iVar3 < 1) {
    return (FMaterialExpressionTexture *)0x0;
  }
  lVar7 = 0;
  if (0 < iVar3) goto LAB_14e62715d;
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_589650665588916036>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                     ,0xbc,"Index < Expressions.Num()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMaterialExpressionTexture *)(*pcVar1)();
    return pFVar4;
  }
  do {
    do {
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      if ((param_2->Expressions).ArrayNum <= iVar8) goto LAB_14e627236;
LAB_14e62715d:
      if ((iVar8 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMaterialExpressionTexture *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = *(FMaterialExpressionTexture **)
                ((param_2->Expressions).AllocatorInstance.Data + lVar7);
    } while ((pFVar4 == (FMaterialExpressionTexture *)0x0) ||
            (((iVar3 = (int)pFVar4->_padding_, iVar3 != 0 && (iVar3 != 1)) && (iVar3 != 4))));
    if ((int)pFVar4->_padding_ == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)pFVar4->_padding_;
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
  } while (iVar3 != 0);
  if ((int)pFVar4->_padding_ != 4) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8988603957609758824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialFactory.cpp"
                       ,0x68,"Expression->GetType() == (EMaterialExpressionType)ReturnClass::Type");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMaterialExpressionTexture *)(*pcVar1)();
      return pFVar4;
    }
LAB_14e627236:
    pFVar4 = (FMaterialExpressionTexture *)0x0;
  }
  return pFVar4;
}

// GetNormalized<UE::Math::TVector2<float>,2> @ 14e627460

TVector2<float> __cdecl
GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector2<float>,2>
          (EComponentType param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  undefined4 in_register_0000000c;
  TVector2<float>_u_0 TVar4;
  int iVar5;
  ushort *in_R8;
  float fVar6;
  
  TVar4._s_0.Y = (float)in_register_0000000c;
  TVar4._s_0.X = (float)param_1;
  iVar5 = (int)param_2;
  if (iVar5 == 1) {
    fVar6 = (float)(int)(char)(byte)*in_R8 * __real_3c010204;
    if (fVar6 <= __real_bf800000) {
      fVar6 = __real_bf800000;
    }
    *(float *)TVar4 = fVar6;
    fVar6 = (float)(int)(char)*(byte *)((longlong)in_R8 + 1) * __real_3c010204;
  }
  else {
    if (iVar5 == 2) {
      *(float *)TVar4 = (float)(byte)*in_R8 * __real_3b808081;
      *(float *)((longlong)TVar4 + 4) = (float)*(byte *)((longlong)in_R8 + 1) * __real_3b808081;
      return (TVector2<float>)TVar4;
    }
    if (iVar5 != 3) {
      if (iVar5 == 4) {
        *(float *)TVar4 = (float)*in_R8 * __real_37800080;
        *(float *)((longlong)TVar4 + 4) = (float)in_R8[1] * __real_37800080;
        return (TVector2<float>)TVar4;
      }
      *(undefined8 *)TVar4 = 0;
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556814>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x72,"false");
      if (!bVar2) {
        return (TVector2<float>)TVar4;
      }
      pcVar1 = (code *)swi(3);
      TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar3.field0_0x0;
    }
    fVar6 = (float)(int)(short)*in_R8 * __real_38000100;
    if ((float)(int)(short)*in_R8 * __real_38000100 <= __real_bf800000) {
      fVar6 = __real_bf800000;
    }
    *(float *)TVar4 = fVar6;
    fVar6 = (float)(int)(short)in_R8[1] * __real_38000100;
  }
  if (fVar6 <= __real_bf800000) {
    fVar6 = __real_bf800000;
  }
  *(float *)((longlong)TVar4 + 4) = fVar6;
  return (TVector2<float>)TVar4;
}

// GetNormalized<UE::Math::TVector4<float>,4> @ 14e6275c0

TVector4<float> * __cdecl
GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector4<float>,4>
          (TVector4<float> *__return_storage_ptr__,EComponentType param_1,void *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TVector4<float> *pTVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar3 = __real_37800080;
  fVar9 = __real_3c010204;
  fVar7 = __real_3b808081;
  fVar2 = __real_bf800000;
  fVar8 = __real_38000100;
  if (param_1 == S8) {
    fVar8 = (float)(int)*(char *)param_2 * __real_3c010204;
    if ((float)(int)*(char *)param_2 * __real_3c010204 <= __real_bf800000) {
      fVar8 = __real_bf800000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8;
    fVar8 = (float)(int)*(char *)((longlong)param_2 + 1) * fVar9;
    if (fVar8 <= fVar2) {
      fVar8 = fVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar8;
    fVar8 = (float)(int)*(char *)((longlong)param_2 + 2) * fVar9;
    if (fVar8 <= fVar2) {
      fVar8 = fVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar8;
    iVar5 = (int)*(char *)((longlong)param_2 + 3);
  }
  else {
    if (param_1 == U8) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*(byte *)param_2 * __real_3b808081;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)*(byte *)((longlong)param_2 + 1) * fVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)*(byte *)((longlong)param_2 + 2) * fVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.W = (float)*(byte *)((longlong)param_2 + 3) * fVar7;
      return __return_storage_ptr__;
    }
    if (param_1 != S16) {
      if (param_1 == U16) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*(ushort *)param_2 * __real_37800080;
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             (float)*(ushort *)((longlong)param_2 + 2) * fVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             (float)*(ushort *)((longlong)param_2 + 4) * fVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.W =
             (float)*(ushort *)((longlong)param_2 + 6) * fVar3;
        return __return_storage_ptr__;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556814>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x72,"false");
      if (!bVar4) {
        return __return_storage_ptr__;
      }
      pcVar1 = (code *)swi(3);
      pTVar6 = (TVector4<float> *)(*pcVar1)();
      return pTVar6;
    }
    fVar7 = (float)(int)*(short *)param_2 * __real_38000100;
    if ((float)(int)*(short *)param_2 * __real_38000100 <= __real_bf800000) {
      fVar7 = __real_bf800000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar7;
    fVar7 = (float)(int)*(short *)((longlong)param_2 + 2) * fVar8;
    if (fVar7 <= fVar2) {
      fVar7 = fVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar7;
    fVar7 = (float)(int)*(short *)((longlong)param_2 + 4) * fVar8;
    if (fVar7 <= fVar2) {
      fVar7 = fVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7;
    iVar5 = (int)*(short *)((longlong)param_2 + 6);
    fVar9 = fVar8;
  }
  fVar8 = (float)iVar5 * fVar9;
  if ((float)iVar5 * fVar9 <= fVar2) {
    fVar8 = fVar2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar8;
  return __return_storage_ptr__;
}

// GetNormalized<UE::Math::TVector<float>,3> @ 14e6277f0

TVector<float> * __cdecl
GLTF::`anonymous_namespace'::GetNormalized<UE::Math::TVector<float>,3>
          (TVector<float> *__return_storage_ptr__,EComponentType param_1,void *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TVector<float> *pTVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = __real_37800080;
  fVar9 = __real_3c010204;
  fVar7 = __real_3b808081;
  fVar2 = __real_bf800000;
  fVar8 = __real_38000100;
  if (param_1 == S8) {
    fVar8 = (float)(int)*(char *)param_2 * __real_3c010204;
    if ((float)(int)*(char *)param_2 * __real_3c010204 <= __real_bf800000) {
      fVar8 = __real_bf800000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8;
    fVar8 = (float)(int)*(char *)((longlong)param_2 + 1) * fVar9;
    if (fVar8 <= fVar2) {
      fVar8 = fVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar8;
    iVar5 = (int)*(char *)((longlong)param_2 + 2);
  }
  else {
    if (param_1 == U8) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*(byte *)param_2 * __real_3b808081;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)*(byte *)((longlong)param_2 + 1) * fVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)*(byte *)((longlong)param_2 + 2) * fVar7;
      return __return_storage_ptr__;
    }
    if (param_1 != S16) {
      if (param_1 == U16) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*(ushort *)param_2 * __real_37800080;
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             (float)*(ushort *)((longlong)param_2 + 2) * fVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             (float)*(ushort *)((longlong)param_2 + 4) * fVar3;
        return __return_storage_ptr__;
      }
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556814>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x72,"false");
      if (!bVar4) {
        return __return_storage_ptr__;
      }
      pcVar1 = (code *)swi(3);
      pTVar6 = (TVector<float> *)(*pcVar1)();
      return pTVar6;
    }
    fVar7 = (float)(int)*(short *)param_2 * __real_38000100;
    if ((float)(int)*(short *)param_2 * __real_38000100 <= __real_bf800000) {
      fVar7 = __real_bf800000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar7;
    fVar7 = (float)(int)*(short *)((longlong)param_2 + 2) * fVar8;
    if (fVar7 <= fVar2) {
      fVar7 = fVar2;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar7;
    iVar5 = (int)*(short *)((longlong)param_2 + 4);
    fVar9 = fVar8;
  }
  fVar8 = (float)iVar5 * fVar9;
  if ((float)iVar5 * fVar9 <= fVar2) {
    fVar8 = fVar2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar8;
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>_>::FValueComparisonClass<`GLTF::FFileReader::BuildRootJoints'::__l3::<lambda_2>_>_>_>_> @ 14e6279c0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>_>::FValueComparisonClass<_GLTF::FFileReader::BuildRootJoints_::__l3::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints>,TDefaultMapHashableKeyFuncs<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,0>_>::FValueComparisonClass<_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::<lambda_2>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14e627ae5:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18) <
                      *(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18) <=
                    *(int *)((pTVar1->ElementData).Pad + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18) <
          *(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18) <=
        *(int *)((pTVar17->ElementData).Pad + 0x18)) goto LAB_14e627ae5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>_>::FValueComparisonClass<`GLTF::FFileReader::BuildRootJoints'::__l3::<lambda_2>_>_>_>_> @ 14e627c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>_>::FValueComparisonClass<_GLTF::FFileReader::BuildRootJoints_::__l3::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints>,TDefaultMapHashableKeyFuncs<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,0>_>::FValueComparisonClass<_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::<lambda_2>_>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_14e627cf0:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_14e627d50:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x00014e627d59;
          goto LAB_14e627d63;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*piVar1 < *(int *)((pTVar3->ElementData).Pad + 0x18)) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_14e627ead;
      }
LAB_14e627e9e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>_>::FValueComparisonClass<_GLTF::FFileReader::BuildRootJoints_::__l3::<lambda_2>_>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_14e627ead:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x00014e627d59:
  if (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar13 + 0x40))
  goto LAB_14e627d50;
LAB_14e627d63:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((longlong)pTVar15 + -0x10) <= *(int *)((pTVar16->ElementData).Pad + 0x18));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_14e627d50;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_14e627ead;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_14e627ead;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_14e627e9e;
  goto LAB_14e627cf0;
}

// ReIndex<UE::Math::TVector2<float>_> @ 14e627f70

void __cdecl
GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector2<float>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  if (param_1 == param_3) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2073350223253471360>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                       ,0x80,"&Source != &Dst");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    uVar4 = param_2->ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar4,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar5 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar2) break;
      uVar4 = *(uint *)pFVar11;
      uVar9 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_3->AllocatorInstance).Data;
      pFVar3 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8;
      if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_3->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar10 + 1;
      pFVar11 = pFVar11 + 4;
      *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar3;
    }
  }
  return;
}

// ReIndex<UE::Math::TVector4<float>_> @ 14e628160

void __cdecl
GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector4<float>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  if (param_1 == param_3) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2073350223253471360>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                       ,0x80,"&Source != &Dst");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar3 = param_2->ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pFVar12 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar2 = pFVar12 + (longlong)iVar4 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar2) break;
      uVar3 = *(uint *)pFVar12;
      uVar9 = 0;
      if ((int)uVar3 < param_1->ArrayNum) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_3->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar12 = pFVar12 + 4;
      pFVar5 = (param_3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
    }
  }
  return;
}

// ReIndex<UE::Math::TVector<float>_> @ 14e628360

void __cdecl
GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector<float>_>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  if (param_1 == param_3) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2073350223253471360>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                       ,0x80,"&Source != &Dst");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    uVar4 = param_2->ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar4,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar5 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar2) break;
      uVar4 = *(uint *)pFVar11;
      uVar9 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_3->AllocatorInstance).Data;
      pFVar3 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xc;
      if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)*piVar1 * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_3->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_3->AllocatorInstance,piVar1);
      }
      pFVar11 = pFVar11 + 4;
      param_3->ArrayNum = iVar10 + 1;
      pFVar6 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar3;
      *(undefined4 *)(pFVar6 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(pFVar3 + 8);
    }
  }
  return;
}

// SetTransformFromMatrix<double> @ 14e628650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GLTF::`anonymous_namespace'::SetTransformFromMatrix<double>
          (TTransform<double> *param_1,TMatrix<double> *param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  TQuat<double> local_118;
  TVector<double>_u_0 local_f8 [2];
  TMatrix<double> local_b8;
  
  local_b8.M[0][0] = param_2->M[0][0];
  local_b8.M[0][1] = param_2->M[0][1];
  local_b8.M[0][2] = param_2->M[0][2];
  local_b8.M[0][3] = param_2->M[0][3];
  local_b8.M[1][0] = param_2->M[1][0];
  local_b8.M[1][1] = param_2->M[1][1];
  local_b8.M[1][2] = param_2->M[1][2];
  local_b8.M[1][3] = param_2->M[1][3];
  local_b8.M[2][0] = param_2->M[2][0];
  local_b8.M[2][1] = param_2->M[2][1];
  local_b8.M[2][2] = param_2->M[2][2];
  local_b8.M[2][3] = param_2->M[2][3];
  local_b8.M[3][0] = param_2->M[3][0];
  local_b8.M[3][1] = param_2->M[3][1];
  local_b8.M[3][2] = param_2->M[3][2];
  local_b8.M[3][3] = param_2->M[3][3];
  UE::Math::TMatrix<double>::ExtractScaling(&local_b8,(TVector<double> *)&local_f8[0]._s_0,0.0);
  dVar1 = UE::Math::TMatrix<double>::Determinant(param_2);
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  if (dVar1 < 0.0) {
    local_f8[0]._0_8_ = (double)local_f8[0]._0_8_ * __real_bff0000000000000;
    local_b8.M[0][0] =
         (double)CONCAT44(local_b8.M[0][0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                          local_b8.M[0][0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
    local_b8.M[0][1] =
         (double)CONCAT44(local_b8.M[0][1]._4_4_ ^ _UNK_15066df7c,
                          local_b8.M[0][1]._0_4_ ^ _UNK_15066df78);
    local_b8.M[0][2] =
         (double)CONCAT44((uint)((ulonglong)local_b8.M[0][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_b8.M[0][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  UE::Math::TQuat<double>::TQuat<double>(&local_118,&local_b8);
  dVar4 = param_2->M[3][0];
  dVar5 = param_2->M[3][1];
  dVar1 = param_2->M[3][2];
  dVar10 = local_118.Z * local_118.Z + local_118.X * local_118.X;
  dVar12 = local_118.W * local_118.W + local_118.Y * local_118.Y;
  dVar2 = dVar12 + dVar10;
  dVar10 = dVar10 + dVar12;
  auVar13._8_4_ = SUB84(dVar10,0);
  auVar13._0_8_ = dVar2;
  auVar13._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar13 = sqrtpd(in_XMM3,auVar13);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar17 = (uint)(uVar8 >> 0x20);
  uVar18 = (uint)(uVar9 >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar16._0_8_ = uVar8 & (ulonglong)(auVar15._0_8_ * local_118.X);
  uVar3 = uVar9 & (ulonglong)(auVar15._8_8_ * local_118.Y);
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar15._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar16 = auVar16 | auVar15;
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
  auVar14._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar11._0_8_ = (ulonglong)(auVar13._0_8_ * local_118.Z) & uVar8;
  uVar9 = (ulonglong)(auVar13._8_8_ * local_118.W) & uVar9;
  auVar11._8_4_ = (undefined4)uVar9;
  auVar11._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar14 = auVar14 | auVar11;
  local_118.W = auVar14._8_8_;
  (param_1->Scale3D).XY.m128d_f64[0] = (double)local_f8[0]._0_8_;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)local_f8[0]._8_8_;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)local_f8[0]._16_8_;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  (param_1->Rotation).XY.m128d_f64[0] =
       (double)CONCAT44(auVar16._4_4_ ^ uVar7,auVar16._0_4_ ^ uVar6);
  (param_1->Rotation).XY.m128d_f64[1] =
       (double)CONCAT44(auVar14._4_4_ ^ uVar7,auVar14._0_4_ ^ uVar6);
  (param_1->Rotation).ZW.m128d_f64[0] =
       (double)CONCAT44(auVar16._12_4_ ^ uVar7,auVar16._8_4_ ^ uVar6);
  (param_1->Rotation).ZW.m128d_f64[1] = local_118.W;
  (param_1->Translation).XY.m128d_f64[0] = dVar4;
  (param_1->Translation).XY.m128d_f64[1] = dVar5;
  (param_1->Translation).ZW.m128d_f64[0] = dVar1;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// SetupObjects<`GLTF::FFileReader::ImportAsset'::__l53::<lambda_10>_> @ 14e628850

bool __thiscall
GLTF::FFileReader::SetupObjects<_GLTF::FFileReader::ImportAsset_::__l53::<lambda_10>_>
          (FFileReader *this,uint param_1,wchar_t *param_2,<lambda_10> *param_3)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  lVar2 = this->_padding_;
  if (param_1 != 0) {
    if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = 0;
    if (param_2 != (wchar_t *)0x0) {
      sVar6 = wcslen(param_2);
      iVar5 = (int)sVar6;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iVar5;
    local_48.DataPtr = param_2;
    pTVar7 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_48);
    iVar5 = pTVar7->ArrayNum;
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar5 * 0x10;
    while( true ) {
      if (pTVar7->ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar10) break;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      plVar8 = (longlong *)(**(code **)**(undefined8 **)pFVar9)();
      if ((*plVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      SetupImage(param_3->__this,(FJsonObject *)*plVar8,&param_3->InResourcesPath,
                 param_3->bInLoadImageData);
      pFVar9 = pFVar9 + 0x10;
    }
  }
  bVar3 = CheckForErrors(this,(int)lVar2);
  pFVar9 = (param_3->InResourcesPath).Data.AllocatorInstance.Data;
  if (!bVar3) {
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    return true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return false;
}

// SetupObjects<`GLTF::FFileReader::ImportAsset'::__l17::<lambda_1>_> @ 14e628a30

bool __thiscall
GLTF::FFileReader::SetupObjects<_GLTF::FFileReader::ImportAsset_::__l17::<lambda_1>_>
          (FFileReader *this,uint param_1,wchar_t *param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  lVar2 = this->_padding_;
  if (param_1 != 0) {
    if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = 0;
    if (param_2 != (wchar_t *)0x0) {
      sVar6 = wcslen(param_2);
      iVar5 = (int)sVar6;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iVar5;
    local_48.DataPtr = param_2;
    pTVar7 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_48);
    iVar5 = pTVar7->ArrayNum;
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar5 * 0x10;
    while( true ) {
      if (pTVar7->ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar10) break;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      plVar8 = (longlong *)(**(code **)**(undefined8 **)pFVar9)();
      if ((*plVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      SetupBuffer(param_3->__this,(FJsonObject *)*plVar8,&param_3->InResourcesPath);
      pFVar9 = pFVar9 + 0x10;
    }
  }
  bVar3 = CheckForErrors(this,(int)lVar2);
  pFVar9 = (param_3->InResourcesPath).Data.AllocatorInstance.Data;
  if (!bVar3) {
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    return true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return false;
}

// _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>_> @ 14e6292a0

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
::
_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>
                 *param_1,
          _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>
          *param_2)

{
  char cVar1;
  _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>
  *p_Var2;
  
  cVar1 = param_2->_Isnil;
  while (cVar1 == '\0') {
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>_>
              (this,param_1,param_2->_Right);
    p_Var2 = param_2->_Left;
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&(param_2->_Myval).second);
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&(param_2->_Myval).first);
    ::operator_delete(param_2,0x60);
    param_2 = p_Var2;
    cVar1 = p_Var2->_Isnil;
  }
  return;
}

// _Erase_tree<std::allocator<std::_Tree_node<std::pair<enum_draco::GeometryAttribute::Type_const_,draco::Options>,void_*>_>_> @ 14e629330

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<enum_draco::GeometryAttribute::Type_const_,draco::Options>_>_>
::
_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum_draco::GeometryAttribute::Type_const_,draco::Options>,void_*>_>_>
          (void *this,
          allocator<std::_Tree_node<std::pair<draco::GeometryAttribute::Type_const_,draco::Options>,void_*>_>
          *param_1,_Tree_node<std::pair<draco::GeometryAttribute::Type_const_,draco::Options>,void_*>
                   *param_2)

{
  char cVar1;
  _Tree_node<std::pair<draco::GeometryAttribute::Type_const_,draco::Options>,void_*> *p_Var2;
  
  cVar1 = param_2->_Isnil;
  while (cVar1 == '\0') {
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<enum_draco::GeometryAttribute::Type_const_,draco::Options>,void_*>_>_>
              (this,param_1,param_2->_Right);
    p_Var2 = param_2->_Left;
    _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>_>
              ((_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
                *)&(param_2->_Myval).second,
               (allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>
                *)&(param_2->_Myval).second,
               *(_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>
                 **)(*(longlong *)&(param_2->_Myval).second.options_ + 8));
    ::operator_delete(*(void **)&(param_2->_Myval).second.options_,0x60);
    ::operator_delete(param_2,0x38);
    param_2 = p_Var2;
    cVar1 = p_Var2->_Isnil;
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14e62ba20

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::ResolveConflictingTextures_::__l2::FAffectedTextureMaps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14e62bac0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// `scalar_deleting_destructor' @ 14e62c320

void * __thiscall
GLTF::FMaterialElement::_scalar_deleting_destructor_(FMaterialElement *this,uint param_1)

{
  ~FMaterialElement(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c360

void * __thiscall
GLTF::FMaterialExpression::_scalar_deleting_destructor_(FMaterialExpression *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c3a0

void * __thiscall
GLTF::FMaterialExpressionColor::_scalar_deleting_destructor_
          (FMaterialExpressionColor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMaterialExpressionParameter_GLTF__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c410

void * __thiscall
GLTF::FMaterialExpressionFunctionCall::_scalar_deleting_destructor_
          (FMaterialExpressionFunctionCall *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<GLTF::FMaterialExpressionInput,int>
            ((FMaterialExpressionInput *)(this->Inputs).AllocatorInstance.Data,
             (this->Inputs).ArrayNum);
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FunctionPathName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c480

void * __thiscall
GLTF::FMaterialExpressionGeneric::_scalar_deleting_destructor_
          (FMaterialExpressionGeneric *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FloatProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FloatProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatProperties);
  *(undefined4 *)&(this->BoolProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoolProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoolProperties);
  DestructItems<GLTF::FMaterialExpressionInput,int>
            ((FMaterialExpressionInput *)(this->Inputs).AllocatorInstance.Data,
             (this->Inputs).ArrayNum);
  pFVar2 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExpressionName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c540

void * __thiscall
GLTF::FMaterialExpressionParameter::_scalar_deleting_destructor_
          (FMaterialExpressionParameter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMaterialExpressionParameter_GLTF__6B_;
  pFVar1 = (this->GroupName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c5b0

void * __thiscall
GLTF::FMaterialExpressionScalar::_scalar_deleting_destructor_
          (FMaterialExpressionScalar *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMaterialExpressionParameter_GLTF__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c620

void * __thiscall
GLTF::FMaterialExpressionTexture::_scalar_deleting_destructor_
          (FMaterialExpressionTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InputCoordinate).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMaterialExpressionParameter_GLTF__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c6a0

void * __thiscall
GLTF::FMaterialExpressionTextureCoordinate::_scalar_deleting_destructor_
          (FMaterialExpressionTextureCoordinate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e62c6e0

void * __thiscall
GLTF::FMeshFactoryImpl::_scalar_deleting_destructor_(FMeshFactoryImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  longlong lVar5;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pFVar1 = (this->CornerVertexInstanceIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&this->IntBuffer;
  pFVar1 = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)pTVar8)->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar4 = 4;
  lVar5 = 4;
  do {
    pFVar1 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  pTVar6 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this->Vector4dBuffers;
  do {
    pFVar1 = pTVar6[-1].AllocatorInstance.Data;
    pTVar6 = pTVar6 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar7 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)this->VectorBuffers;
  lVar4 = 10;
  do {
    pFVar1 = pTVar7[-1].AllocatorInstance.Data;
    pTVar7 = pTVar7 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  DestructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int>
            ((TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
              *)(this->PositionIndexToVertexIdPerPrim).AllocatorInstance.Data,
             (this->PositionIndexToVertexIdPerPrim).ArrayNum);
  pFVar1 = (this->PositionIndexToVertexIdPerPrim).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MaterialIndexToPolygonGroupID).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MaterialIndexToPolygonGroupID).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialIndexToPolygonGroupID);
  (this->MaterialIndicesUsed).HashSize = 0;
  FVar3 = (this->MaterialIndicesUsed).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MaterialIndicesUsed).Elements);
  DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
            ((TTuple<GLTF::EMessageSeverity,FText> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// AccessorAtIndex @ 14e62c860

FAccessor * __cdecl
GLTF::`anonymous_namespace'::AccessorAtIndex
          (TArray<GLTF::FAccessor,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FAccessor *pFVar3;
  
  if ((-1 < param_2) && (param_2 < param_1->ArrayNum)) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAccessor *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FAccessor *)((param_1->AllocatorInstance).Data + (longlong)param_2 * 0xd0);
  }
  return &`GLTF::AccessorAtIndex'::`7'::EmptyAccessor;
}

// AccessorTypeFromString @ 14e62c8f0

EType __cdecl GLTF::AccessorTypeFromString(FString *param_1)

{
  int iVar1;
  int iVar2;
  EType EVar3;
  wchar_t *pwVar4;
  wchar_t *_Str1;
  
  iVar2 = (param_1->Data).ArrayNum;
  _Str1 = L"";
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar4,L"SCALAR");
  if (iVar1 == 0) {
    return Scalar;
  }
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar4,L"VEC2");
  if (iVar1 == 0) {
    return Vec2;
  }
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar4,L"VEC3");
  if (iVar1 == 0) {
    return Vec3;
  }
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar4,L"VEC4");
  if (iVar1 == 0) {
    return Vec4;
  }
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar4,L"MAT2");
  if (iVar1 == 0) {
    return Mat2;
  }
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar4,L"MAT3");
  if (iVar1 == 0) {
    return Mat3;
  }
  if (iVar2 != 0) {
    _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = wcscmp(_Str1,L"MAT4");
  EVar3 = Unknown;
  if (iVar2 == 0) {
    EVar3 = Mat4;
  }
  return EVar3;
}

// AcquireDataFromDracoAttribute @ 14e62ca70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GLTF::DracoHelpers::AcquireDataFromDracoAttribute
          (EComponentType param_1,PointAttribute *param_2,uint param_3,uint param_4,uint param_5,
          uchar *param_6)

{
  ulonglong uVar1;
  bool bVar2;
  IndexType<unsigned_int,draco::AttributeValueIndex_tag_type_> IVar3;
  ulonglong uVar4;
  schar sVar5;
  ulonglong _Size;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_40;
  
  _Size = (ulonglong)param_4;
  uVar1 = (ulonglong)param_3;
  sVar5 = (schar)param_5;
  switch(param_1) {
  case S8:
    bVar2 = AcquireDataFromDracoAttribute<signed_char>(param_2,param_3,param_4,param_5,param_6);
    return bVar2;
  case U8:
    uVar4 = 0;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    if ((int)param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_5);
    }
    if (0 < (int)param_5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_5,&local_40.AllocatorInstance,0,&local_40.ArrayMax);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_40,param_5,Default);
    uVar6 = uVar4;
    FVar7.Data = local_40.AllocatorInstance.Data;
    if (param_3 != 0) {
      do {
        if (param_2->identity_mapping_ == false) {
          IVar3.value_ = (param_2->indices_map_).vector_._Mypair._Myval2._Myfirst
                         [uVar6 & 0xffffffff].value_;
        }
        else {
          IVar3.value_ = (uint)uVar6;
        }
        bVar2 = draco::GeometryAttribute::ConvertValue<unsigned_char>
                          ((GeometryAttribute *)param_2,IVar3,sVar5,(uchar *)FVar7.Data);
        FVar7.Data = local_40.AllocatorInstance.Data;
        if (!bVar2) goto LAB_14e62cb8a;
        memcpy(param_6 + uVar4,local_40.AllocatorInstance.Data,_Size);
        uVar4 = uVar4 + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    break;
  case S16:
    bVar2 = AcquireDataFromDracoAttribute<short>(param_2,param_3,param_4,param_5,param_6);
    return bVar2;
  case U16:
    bVar2 = AcquireDataFromDracoAttribute<unsigned_short>(param_2,param_3,param_4,param_5,param_6);
    return bVar2;
  case U32:
    uVar4 = 0;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    if ((int)param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_5);
    }
    if (0 < (int)param_5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_5,&local_40.AllocatorInstance,0,&local_40.ArrayMax);
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_40,param_5,Default);
    uVar6 = uVar4;
    FVar7.Data = local_40.AllocatorInstance.Data;
    if (param_3 != 0) {
      do {
        if (param_2->identity_mapping_ == false) {
          IVar3.value_ = (param_2->indices_map_).vector_._Mypair._Myval2._Myfirst
                         [uVar6 & 0xffffffff].value_;
        }
        else {
          IVar3.value_ = (uint)uVar6;
        }
        bVar2 = draco::GeometryAttribute::ConvertValue<unsigned_int>
                          ((GeometryAttribute *)param_2,IVar3,sVar5,(uint *)FVar7.Data);
        FVar7.Data = local_40.AllocatorInstance.Data;
        if (!bVar2) goto LAB_14e62cb8a;
        memcpy(param_6 + uVar4,local_40.AllocatorInstance.Data,_Size);
        uVar4 = uVar4 + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    break;
  case F32:
    uVar4 = 0;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    if ((int)param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_5);
    }
    if (0 < (int)param_5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_5,&local_40.AllocatorInstance,0,&local_40.ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<float,TSizedDefaultAllocator<32>_> *)&local_40,param_5,Default);
    uVar6 = uVar4;
    FVar7.Data = local_40.AllocatorInstance.Data;
    if (param_3 != 0) {
      do {
        if (param_2->identity_mapping_ == false) {
          IVar3.value_ = (param_2->indices_map_).vector_._Mypair._Myval2._Myfirst
                         [uVar6 & 0xffffffff].value_;
        }
        else {
          IVar3.value_ = (uint)uVar6;
        }
        bVar2 = draco::GeometryAttribute::ConvertValue<float>
                          ((GeometryAttribute *)param_2,IVar3,sVar5,(float *)FVar7.Data);
        FVar7.Data = local_40.AllocatorInstance.Data;
        if (!bVar2) goto LAB_14e62cb8a;
        memcpy(param_6 + uVar4,local_40.AllocatorInstance.Data,_Size);
        uVar4 = uVar4 + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    break;
  default:
    goto LAB_14e62cb9a;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return true;
LAB_14e62cb8a:
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
LAB_14e62cb9a:
  return false;
}

// AcquireIndicesFromDracoMesh @ 14e62cd80

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
GLTF::DracoHelpers::AcquireIndicesFromDracoMesh(Mesh *param_1,EComponentType param_2,uchar *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  array<draco::IndexType<unsigned_int,draco::PointIndex_tag_type_>,3> *paVar4;
  ulonglong uVar5;
  uchar *puVar6;
  uint *puVar7;
  
  switch(param_2) {
  default:
    return false;
  case U8:
    paVar4 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
    lVar3 = (longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast - (longlong)paVar4;
    uVar5 = 0;
    iVar1 = (int)(lVar3 >> 0x3f);
    if ((int)(lVar3 / 0xc) + iVar1 != iVar1) {
      puVar6 = param_3 + 2;
      do {
        uVar2 = uVar5 & 0xffffffff;
        uVar5 = uVar5 + 1;
        puVar6[-2] = (uchar)paVar4[uVar2]._Elems[0].value_;
        puVar6[-1] = (uchar)paVar4[uVar2]._Elems[1].value_;
        *puVar6 = (uchar)paVar4[uVar2]._Elems[2].value_;
        paVar4 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
        puVar6 = puVar6 + 3;
      } while (uVar5 < (((longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast -
                        (longlong)paVar4) / 0xc & 0xffffffffU));
      return true;
    }
    break;
  case U16:
    paVar4 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
    lVar3 = (longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast - (longlong)paVar4;
    uVar5 = 0;
    iVar1 = (int)(lVar3 >> 0x3f);
    if ((int)(lVar3 / 0xc) + iVar1 != iVar1) {
      puVar6 = param_3 + 4;
      do {
        uVar2 = uVar5 & 0xffffffff;
        uVar5 = uVar5 + 1;
        *(short *)(puVar6 + -4) = (short)paVar4[uVar2]._Elems[0].value_;
        *(short *)(puVar6 + -2) = (short)paVar4[uVar2]._Elems[1].value_;
        *(short *)puVar6 = (short)paVar4[uVar2]._Elems[2].value_;
        paVar4 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
        puVar6 = puVar6 + 6;
      } while (uVar5 < (((longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast -
                        (longlong)paVar4) / 0xc & 0xffffffffU));
      return true;
    }
    break;
  case U32:
    paVar4 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
    lVar3 = (longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast - (longlong)paVar4;
    uVar5 = 0;
    iVar1 = (int)(lVar3 >> 0x3f);
    if ((int)(lVar3 / 0xc) + iVar1 != iVar1) {
      puVar7 = (uint *)(param_3 + 8);
      do {
        uVar2 = uVar5 & 0xffffffff;
        uVar5 = uVar5 + 1;
        puVar7[-2] = paVar4[uVar2]._Elems[0].value_;
        puVar7[-1] = paVar4[uVar2]._Elems[1].value_;
        *puVar7 = paVar4[uVar2]._Elems[2].value_;
        paVar4 = (param_1->faces_).vector_._Mypair._Myval2._Myfirst;
        puVar7 = puVar7 + 3;
      } while (uVar5 < (((longlong)(param_1->faces_).vector_._Mypair._Myval2._Mylast -
                        (longlong)paVar4) / 0xc & 0xffffffffU));
    }
  }
  return true;
}

// AcquireMat4 @ 14e62cfb0

bool __cdecl
GLTF::`anonymous_namespace'::AcquireMat4
          (uint param_1,FBufferView *param_2,ulong64 param_3,uint param_4,EComponentType param_5,
          TMatrix<double> *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uchar *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong lVar24;
  
  param_6->M[0][0] = 0.0;
  param_6->M[0][1] = 0.0;
  param_6->M[0][2] = 0.0;
  param_6->M[0][3] = 0.0;
  param_6->M[1][0] = 0.0;
  param_6->M[1][1] = 0.0;
  param_6->M[1][2] = 0.0;
  param_6->M[1][3] = 0.0;
  param_6->M[2][0] = 0.0;
  param_6->M[2][1] = 0.0;
  param_6->M[2][2] = 0.0;
  param_6->M[2][3] = 0.0;
  param_6->M[3][0] = 0.0;
  param_6->M[3][1] = 0.0;
  param_6->M[3][2] = 0.0;
  param_6->M[3][3] = 0.0;
  if (param_5 == F32) {
    lVar24 = (ulonglong)(param_1 * param_4) + param_2->ByteOffset;
    puVar15 = (param_2->Buffer).Data;
    fVar1 = *(float *)(puVar15 + param_3 + lVar24 + 0x20);
    fVar2 = *(float *)(puVar15 + param_3 + lVar24 + 0x30);
    fVar3 = *(float *)(puVar15 + param_3 + lVar24 + 4);
    fVar4 = *(float *)(puVar15 + param_3 + lVar24 + 0x14);
    fVar5 = *(float *)(puVar15 + param_3 + lVar24 + 0x24);
    fVar6 = *(float *)(puVar15 + param_3 + lVar24 + 0x34);
    fVar7 = *(float *)(puVar15 + param_3 + lVar24 + 8);
    fVar8 = *(float *)(puVar15 + param_3 + lVar24 + 0x18);
    fVar9 = *(float *)(puVar15 + param_3 + lVar24 + 0x28);
    fVar10 = *(float *)(puVar15 + param_3 + lVar24 + 0x38);
    fVar11 = *(float *)(puVar15 + param_3 + lVar24 + 0xc);
    fVar12 = *(float *)(puVar15 + param_3 + lVar24 + 0x1c);
    fVar13 = *(float *)(puVar15 + param_3 + lVar24 + 0x2c);
    fVar14 = *(float *)(puVar15 + param_3 + lVar24 + 0x3c);
    auVar16._8_4_ = SUB84((double)*(float *)(puVar15 + param_3 + lVar24 + 0x10),0);
    auVar16._0_8_ = (double)*(float *)(puVar15 + param_3 + lVar24);
    auVar16._12_4_ = (int)((ulonglong)(double)*(float *)(puVar15 + param_3 + lVar24 + 0x10) >> 0x20)
    ;
    *(undefined1 (*) [16])param_6->M[0] = auVar16;
    auVar17._8_4_ = SUB84((double)fVar2,0);
    auVar17._0_8_ = (double)fVar1;
    auVar17._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(param_6->M[0] + 2) = auVar17;
    auVar18._8_4_ = SUB84((double)fVar4,0);
    auVar18._0_8_ = (double)fVar3;
    auVar18._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])param_6->M[1] = auVar18;
    auVar19._8_4_ = SUB84((double)fVar6,0);
    auVar19._0_8_ = (double)fVar5;
    auVar19._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(param_6->M[1] + 2) = auVar19;
    auVar20._8_4_ = SUB84((double)fVar8,0);
    auVar20._0_8_ = (double)fVar7;
    auVar20._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
    *(undefined1 (*) [16])param_6->M[2] = auVar20;
    auVar21._8_4_ = SUB84((double)fVar10,0);
    auVar21._0_8_ = (double)fVar9;
    auVar21._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    *(undefined1 (*) [16])(param_6->M[2] + 2) = auVar21;
    auVar22._8_4_ = SUB84((double)fVar12,0);
    auVar22._0_8_ = (double)fVar11;
    auVar22._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
    *(undefined1 (*) [16])param_6->M[3] = auVar22;
    auVar23._8_4_ = SUB84((double)fVar14,0);
    auVar23._0_8_ = (double)fVar13;
    auVar23._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
    *(undefined1 (*) [16])(param_6->M[3] + 2) = auVar23;
    return true;
  }
  return false;
}

// AcquireUnsignedInt16x4 @ 14e62d180

bool __cdecl
GLTF::`anonymous_namespace'::AcquireUnsignedInt16x4
          (uint param_1,FBufferView *param_2,ulong64 param_3,uint param_4,EComponentType param_5,
          ushort *param_6)

{
  ushort *puVar1;
  
  param_6[0] = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  puVar1 = (ushort *)
           ((param_2->Buffer).Data + param_3 + (ulonglong)(param_1 * param_4) + param_2->ByteOffset)
  ;
  if (param_5 == U8) {
    *param_6 = (ushort)(byte)*puVar1;
    param_6[1] = (ushort)*(byte *)((longlong)puVar1 + 1);
    param_6[2] = (ushort)(byte)puVar1[1];
    param_6[3] = (ushort)*(byte *)((longlong)puVar1 + 3);
    return true;
  }
  if (param_5 != U16) {
    return false;
  }
  *param_6 = *puVar1;
  param_6[1] = puVar1[1];
  param_6[2] = puVar1[2];
  param_6[3] = puVar1[3];
  return true;
}

// ArraySize @ 14e62e1e0

uint __cdecl GLTF::ArraySize(FJsonObject *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  TSharedPtr<FJsonValue,1> *pTVar3;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  local_18.Size = iVar5;
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,local_18.DataPtr);
  pTVar3 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar2,&local_18);
  if (((pTVar3 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar3->Object != (FJsonValue *)0x0)) &&
     (pTVar3->Object->Type == Array)) {
    local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar5 = (param_2->Data).ArrayNum;
    local_18.Size = iVar5 + -1;
    if (iVar5 == 0) {
      local_18.Size = 0;
    }
    pTVar4 = FJsonObject::GetArrayField(param_1,&local_18);
    return pTVar4->ArrayNum;
  }
  return 0;
}

// ComponentTypeFromNumber @ 14e631dd0

EComponentType __cdecl GLTF::ComponentTypeFromNumber(ushort param_1)

{
  switch(param_1) {
  case 0x1400:
    return S8;
  case 0x1401:
    return U8;
  case 0x1402:
    return S16;
  case 0x1403:
    return U16;
  default:
    return None;
  case 0x1405:
    return U32;
  case 0x1406:
    return F32;
  }
}

// CopyNormalizedFloat @ 14e631e60

void __cdecl
GLTF::`anonymous_namespace'::CopyNormalizedFloat
          (float *param_1,void *param_2,EComponentType param_3,uint param_4)

{
  ushort *puVar1;
  short *psVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  
  fVar12 = __real_37800080;
  fVar11 = __real_3c010204;
  fVar16 = __real_3b808081;
  fVar10 = __real_bf800000;
  fVar17 = __real_38000100;
  if (param_3 == S8) {
    uVar14 = 0;
    if (3 < param_4) {
      uVar14 = (param_4 - 4 >> 2) + 1;
      uVar15 = (ulonglong)uVar14;
      uVar14 = uVar14 * 4;
      do {
        fVar17 = (float)(int)*(char *)param_2 * fVar11;
        if ((float)(int)*(char *)param_2 * fVar11 <= fVar10) {
          fVar17 = fVar10;
        }
        *param_1 = fVar17;
        fVar17 = (float)(int)*(char *)((longlong)param_2 + 1) * fVar11;
        if ((float)(int)*(char *)((longlong)param_2 + 1) * fVar11 <= fVar10) {
          fVar17 = fVar10;
        }
        param_1[1] = fVar17;
        fVar17 = (float)(int)*(char *)((longlong)param_2 + 2) * fVar11;
        if ((float)(int)*(char *)((longlong)param_2 + 2) * fVar11 <= fVar10) {
          fVar17 = fVar10;
        }
        param_1[2] = fVar17;
        pcVar4 = (char *)((longlong)param_2 + 3);
        param_2 = (void *)((longlong)param_2 + 4);
        fVar17 = (float)(int)*pcVar4 * fVar11;
        if ((float)(int)*pcVar4 * fVar11 <= fVar10) {
          fVar17 = fVar10;
        }
        param_1[3] = fVar17;
        param_1 = param_1 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar14 < param_4) {
      uVar15 = (ulonglong)(param_4 - uVar14);
      do {
        cVar6 = *(char *)param_2;
        param_2 = (void *)((longlong)param_2 + 1);
        fVar17 = (float)(int)cVar6 * fVar11;
        if ((float)(int)cVar6 * fVar11 <= fVar10) {
          fVar17 = fVar10;
        }
        *param_1 = fVar17;
        uVar15 = uVar15 - 1;
        param_1 = param_1 + 1;
      } while (uVar15 != 0);
    }
  }
  else if (param_3 == U8) {
    uVar14 = 0;
    if (3 < param_4) {
      uVar14 = (param_4 - 4 >> 2) + 1;
      uVar15 = (ulonglong)uVar14;
      uVar14 = uVar14 * 4;
      do {
        *param_1 = (float)*(byte *)param_2 * fVar16;
        param_1[1] = (float)*(byte *)((longlong)param_2 + 1) * fVar16;
        param_1[2] = (float)*(byte *)((longlong)param_2 + 2) * fVar16;
        pbVar3 = (byte *)((longlong)param_2 + 3);
        param_2 = (void *)((longlong)param_2 + 4);
        param_1[3] = (float)*pbVar3 * fVar16;
        param_1 = param_1 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar14 < param_4) {
      uVar15 = (ulonglong)(param_4 - uVar14);
      do {
        bVar5 = *(byte *)param_2;
        param_2 = (void *)((longlong)param_2 + 1);
        *param_1 = (float)bVar5 * fVar16;
        uVar15 = uVar15 - 1;
        param_1 = param_1 + 1;
      } while (uVar15 != 0);
      return;
    }
  }
  else if (param_3 == S16) {
    uVar14 = 0;
    if (3 < param_4) {
      uVar14 = (param_4 - 4 >> 2) + 1;
      uVar15 = (ulonglong)uVar14;
      uVar14 = uVar14 * 4;
      do {
        fVar16 = (float)(int)*(short *)param_2 * fVar17;
        if ((float)(int)*(short *)param_2 * fVar17 <= fVar10) {
          fVar16 = fVar10;
        }
        *param_1 = fVar16;
        fVar16 = (float)(int)*(short *)((longlong)param_2 + 2) * fVar17;
        if ((float)(int)*(short *)((longlong)param_2 + 2) * fVar17 <= fVar10) {
          fVar16 = fVar10;
        }
        param_1[1] = fVar16;
        fVar16 = (float)(int)*(short *)((longlong)param_2 + 4) * fVar17;
        if ((float)(int)*(short *)((longlong)param_2 + 4) * fVar17 <= fVar10) {
          fVar16 = fVar10;
        }
        param_1[2] = fVar16;
        psVar2 = (short *)((longlong)param_2 + 6);
        param_2 = (void *)((longlong)param_2 + 8);
        fVar16 = (float)(int)*psVar2 * fVar17;
        if ((float)(int)*psVar2 * fVar17 <= fVar10) {
          fVar16 = fVar10;
        }
        param_1[3] = fVar16;
        param_1 = param_1 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar14 < param_4) {
      uVar15 = (ulonglong)(param_4 - uVar14);
      do {
        sVar8 = *(short *)param_2;
        param_2 = (void *)((longlong)param_2 + 2);
        fVar16 = (float)(int)sVar8 * fVar17;
        if ((float)(int)sVar8 * fVar17 <= fVar10) {
          fVar16 = fVar10;
        }
        *param_1 = fVar16;
        uVar15 = uVar15 - 1;
        param_1 = param_1 + 1;
      } while (uVar15 != 0);
      return;
    }
  }
  else if (param_3 == U16) {
    uVar14 = 0;
    if (3 < param_4) {
      uVar14 = (param_4 - 4 >> 2) + 1;
      uVar15 = (ulonglong)uVar14;
      uVar14 = uVar14 * 4;
      do {
        *param_1 = (float)*(ushort *)param_2 * fVar12;
        param_1[1] = (float)*(ushort *)((longlong)param_2 + 2) * fVar12;
        param_1[2] = (float)*(ushort *)((longlong)param_2 + 4) * fVar12;
        puVar1 = (ushort *)((longlong)param_2 + 6);
        param_2 = (void *)((longlong)param_2 + 8);
        param_1[3] = (float)*puVar1 * fVar12;
        param_1 = param_1 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar14 < param_4) {
      uVar15 = (ulonglong)(param_4 - uVar14);
      do {
        uVar7 = *(ushort *)param_2;
        param_2 = (void *)((longlong)param_2 + 2);
        *param_1 = (float)uVar7 * fVar12;
        uVar15 = uVar15 - 1;
        param_1 = param_1 + 1;
      } while (uVar15 != 0);
      return;
    }
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2814153273458556631>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                        ,0x129,"false");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// CreateTextureTransform @ 14e633720

void __cdecl
GLTF::`anonymous_namespace'::CreateTextureTransform
          (FTextureTransform *param_1,FMaterialExpressionTexture *param_2,FMaterialElement *param_3)

{
  FMaterialExpressionTextureCoordinate *pFVar1;
  FMaterialExpression *pFVar2;
  FMaterialExpression *pFVar3;
  longlong lVar4;
  FMaterialExpression *pFVar5;
  FMaterialExpression *pFVar6;
  float fVar7;
  uint uVar8;
  float local_res8 [4];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  pFVar1 = (FMaterialExpressionTextureCoordinate *)(param_2->InputCoordinate).Expression;
  if (pFVar1 == (FMaterialExpressionTextureCoordinate *)0x0) {
    pFVar1 = FMaterialElement::AddMaterialExpression<GLTF::FMaterialExpressionTextureCoordinate>
                       (param_3);
  }
  pFVar2 = FMaterialElement::AddMaterialExpression(param_3,Generic);
  ::FString::operator=((FString *)(pFVar2 + 1),L"Multiply");
  pFVar3 = FMaterialElement::AddMaterialExpression(param_3,Generic);
  ::FString::operator=((FString *)(pFVar3 + 1),L"Constant2Vector");
  local_res8[0] = param_1->Scale[0];
  ::FString::FString((FString *)local_58,L"R");
  local_68._0_8_ = local_58;
  local_68._8_8_ = local_res8;
  TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,float_const_&>_>
            ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
              *)(pFVar3 + 8),(TPairInitializer<FString_&&,float_const_&> *)(local_res8 + 2),
             (bool *)local_68);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_res8[0] = param_1->Scale[1];
  ::FString::FString((FString *)local_68,L"G");
  local_58._0_8_ = local_68;
  local_58._8_8_ = local_res8;
  TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,float_const_&>_>
            ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
              *)(pFVar3 + 8),(TPairInitializer<FString_&&,float_const_&> *)(local_res8 + 2),
             (bool *)local_58);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  lVar4 = (**(code **)(pFVar2->_padding_ + 8))(pFVar2,0);
  *(FMaterialExpressionTextureCoordinate **)(lVar4 + 0x10) = pFVar1;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  lVar4 = (**(code **)(pFVar2->_padding_ + 8))(pFVar2,1);
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(FMaterialExpression **)(lVar4 + 0x10) = pFVar3;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  pFVar3 = pFVar2;
  if (__real_322bcc77 < (float)((uint)param_1->Rotation & uVar8)) {
    pFVar3 = FMaterialElement::AddMaterialExpression(param_3,FunctionCall);
    ::FString::operator=
              ((FString *)(pFVar3 + 1),
               L"/Engine/Functions/Engine_MaterialFunctions02/Texturing/CustomRotator.CustomRotator"
              );
    fVar7 = param_1->Rotation;
    if (fVar7 < 0.0) {
      fVar7 = __real_40c90fdb - fVar7;
    }
    pFVar5 = FMaterialElement::AddMaterialExpression(param_3,ConstantScalar);
    *(float *)&pFVar5[3]._padding_ = __real_3f800000 - fVar7 * __real_3e22f983;
    pFVar6 = FMaterialElement::AddMaterialExpression(param_3,Generic);
    ::FString::operator=((FString *)(pFVar6 + 1),L"Constant2Vector");
    local_res8[0] = 0.0;
    ::FString::FString((FString *)local_68,L"R");
    local_58._0_8_ = local_68;
    local_58._8_8_ = local_res8;
    TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,float_const_&>_>
              ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
                *)(pFVar6 + 8),(TPairInitializer<FString_&&,float_const_&> *)(local_res8 + 2),
               (bool *)local_58);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    local_res8[0] = 0.0;
    ::FString::FString((FString *)local_68,L"G");
    local_58._0_8_ = local_68;
    local_58._8_8_ = local_res8;
    TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,float_const_&>_>
              ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
                *)(pFVar6 + 8),(TPairInitializer<FString_&&,float_const_&> *)(local_res8 + 2),
               (bool *)local_58);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    lVar4 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,0);
    *(FMaterialExpression **)(lVar4 + 0x10) = pFVar2;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar4 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,1);
    *(FMaterialExpression **)(lVar4 + 0x10) = pFVar6;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar4 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,2);
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    *(FMaterialExpression **)(lVar4 + 0x10) = pFVar5;
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  if (((float)((uint)param_1->Offset[0] & uVar8) <= __real_322bcc77) &&
     ((float)((uint)param_1->Offset[1] & uVar8) <= __real_322bcc77)) {
    (param_2->InputCoordinate).Expression = pFVar3;
    (param_2->InputCoordinate).OutputIndex = 0;
    return;
  }
  pFVar2 = FMaterialElement::AddMaterialExpression(param_3,Generic);
  ::FString::operator=((FString *)(pFVar2 + 1),L"Constant2Vector");
  local_res8[0] = param_1->Offset[0];
  ::FString::FString((FString *)local_68,L"R");
  local_58._0_8_ = local_68;
  local_58._8_8_ = local_res8;
  TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,float_const_&>_>
            ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
              *)(pFVar2 + 8),(TPairInitializer<FString_&&,float_const_&> *)(local_res8 + 2),
             (bool *)local_58);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_res8[0] = param_1->Offset[1];
  ::FString::FString((FString *)local_68,L"G");
  local_58._0_8_ = local_68;
  local_58._8_8_ = local_res8;
  TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,float_const_&>_>
            ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
              *)(pFVar2 + 8),(TPairInitializer<FString_&&,float_const_&> *)(local_res8 + 2),
             (bool *)local_58);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar5 = FMaterialElement::AddMaterialExpression(param_3,Generic);
  ::FString::operator=((FString *)(pFVar5 + 1),L"Add");
  lVar4 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,0);
  *(FMaterialExpression **)(lVar4 + 0x10) = pFVar3;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  lVar4 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,1);
  *(FMaterialExpression **)(lVar4 + 0x10) = pFVar2;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  (param_2->InputCoordinate).Expression = pFVar5;
  (param_2->InputCoordinate).OutputIndex = 0;
  return;
}

// DecodeDataURI @ 14e633b90

bool __cdecl
GLTF::`anonymous_namespace'::DecodeDataURI
          (FString *param_1,FString *param_2,uchar *param_3,uint *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar3 = ::FString::StartsWith(param_1,L"data:",5,IgnoreCase);
  if (bVar3) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    for (pFVar12 = pFVar1; pFVar10 = pFVar1,
        pFVar12 != pFVar1 + (longlong)(param_1->Data).ArrayNum * 2; pFVar12 = pFVar12 + 2) {
      if (*(short *)pFVar12 == 0x3b) {
        lVar13 = (longlong)pFVar12 - (longlong)pFVar1 >> 1;
        goto LAB_14e633c50;
      }
    }
    lVar13 = 0xffffffff;
    iVar11 = -1;
    for (; pFVar10 != pFVar1 + (longlong)(param_1->Data).ArrayNum * 2; pFVar10 = pFVar10 + 2) {
LAB_14e633c50:
      iVar11 = (int)lVar13;
      if (*(short *)pFVar10 == 0x2c) {
        iVar9 = (int)((longlong)pFVar10 - (longlong)pFVar1 >> 1);
        goto LAB_14e633c64;
      }
    }
    iVar9 = -1;
LAB_14e633c64:
    if ((iVar11 != -1) && (iVar9 != -1)) {
      ::FString::Mid(param_1,&local_40,iVar11 + 1,(iVar9 - iVar11) + -1);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_40.Data.ArrayNum != 0) {
        FVar8.Data = local_40.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"base64");
      if (iVar5 == 0) {
        pFVar7 = ::FString::Mid(param_1,&local_30,5,iVar11 + -5);
        ::FString::operator=(param_2,pFVar7);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
        ::FString::RightChop(param_1,&local_50,iVar9 + 1);
        uVar6 = FBase64::GetDecodedDataSize(&local_50);
        *param_4 = uVar6;
        uVar6 = local_50.Data.ArrayNum - 1;
        FVar8.Data = local_50.Data.AllocatorInstance.Data;
        if (local_50.Data.ArrayNum == 0) {
          uVar6 = 0;
          FVar8.Data = (FScriptContainerElement *)L"";
        }
        bVar3 = FBase64::Decode<wchar_t>((wchar_t *)FVar8.Data,uVar6,param_3,Standard);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar3 = false;
      }
      if (local_40.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar3;
      }
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
      return bVar3;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8658679761230364638>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                       ,0x22,"URI.StartsWith(L\"data:\")");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// FillFloatArray @ 14e634220

bool __cdecl
GLTF::`anonymous_namespace'::FillFloatArray
          (bool param_1,FBufferView *param_2,ulong64 param_3,EComponentType param_4,uint param_5,
          uint param_6,float *param_7)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort *puVar9;
  uint uVar10;
  float fVar11;
  
  fVar6 = __real_37800080;
  fVar5 = __real_3c010204;
  fVar4 = __real_3b808081;
  fVar3 = __real_bf800000;
  fVar2 = __real_38000100;
  if (!param_1) {
    if (param_4 == F32) {
      memcpy(param_7,(param_2->Buffer).Data + param_3 + param_2->ByteOffset,(ulonglong)param_6 << 2)
      ;
      return true;
    }
    return false;
  }
  if ((param_5 & 0xfffffffb) == 0) {
    CopyNormalizedFloat(param_7,(param_2->Buffer).Data + param_3 + param_2->ByteOffset,param_4,
                        param_6);
  }
  else {
    uVar10 = 0;
    if (param_6 != 0) {
      do {
        puVar9 = (ushort *)
                 ((param_2->Buffer).Data + param_2->ByteOffset + param_3 + uVar10 * param_5);
        if (param_4 == S8) {
          fVar11 = (float)(int)(char)(byte)*puVar9 * fVar5;
LAB_14e6343d4:
          if (fVar11 <= fVar3) {
            fVar11 = fVar3;
          }
        }
        else if (param_4 == U8) {
          fVar11 = (float)(byte)*puVar9 * fVar4;
        }
        else {
          if (param_4 == S16) {
            fVar11 = (float)(int)(short)*puVar9 * fVar2;
            goto LAB_14e6343d4;
          }
          if (param_4 == U16) {
            fVar11 = (float)*puVar9 * fVar6;
          }
          else {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2814153273458556782>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                               ,0x92,"false");
            if (bVar7) {
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return (bool)uVar8;
            }
            fVar11 = 0.0;
          }
        }
        *param_7 = fVar11;
        uVar10 = uVar10 + 1;
        param_7 = param_7 + 1;
      } while (uVar10 < param_6);
    }
  }
  return true;
}

// FillUnsignedIntArray @ 14e635830

bool __cdecl
GLTF::`anonymous_namespace'::FillUnsignedIntArray
          (FBufferView *param_1,ulong64 param_2,EComponentType param_3,uint param_4,uint *param_5)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  undefined1 auVar22 [13];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  undefined1 auVar25 [13];
  undefined1 auVar26 [13];
  undefined1 auVar27 [13];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [13];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  ulonglong uVar36;
  ulonglong *_Src;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 uVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  _Src = (ulonglong *)((param_1->Buffer).Data + param_2 + param_1->ByteOffset);
  if (param_3 == U8) {
    uVar38 = 0;
    if (param_4 != 0) {
      uVar39 = uVar38;
      if ((0xf < param_4) &&
         (((uint *)((ulonglong)(param_4 - 1) + (longlong)_Src) < param_5 ||
          (uVar39 = 0, param_5 + (param_4 - 1) < _Src)))) {
        do {
          uVar3 = (undefined4)*_Src;
          puVar2 = (undefined4 *)((longlong)_Src + 0xc);
          uVar38 = uVar38 + 0x10;
          uVar48 = (undefined1)((uint)uVar3 >> 8);
          uVar37 = (ulonglong)CONCAT12(uVar48,(short)uVar3) & 0xffffffffffff00ff;
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar37;
          auVar16[0xc] = (char)((uint)uVar3 >> 0x18);
          auVar17[8] = (char)((uint)uVar3 >> 0x10);
          auVar17._0_8_ = uVar37;
          auVar17[9] = 0;
          auVar17._10_3_ = auVar16._10_3_;
          auVar32._5_8_ = 0;
          auVar32._0_5_ = auVar17._8_5_;
          auVar18[4] = uVar48;
          auVar18._0_4_ = (uint)uVar37;
          auVar18[5] = 0;
          auVar18._6_7_ = SUB137(auVar32 << 0x40,6);
          auVar44._0_4_ = (uint)uVar37 & 0xffff;
          auVar44._4_9_ = auVar18._4_9_;
          auVar44._13_3_ = 0;
          *(undefined1 (*) [16])param_5 = auVar44;
          uVar3 = *(undefined4 *)((longlong)_Src + 4);
          uVar48 = (undefined1)((uint)uVar3 >> 8);
          uVar37 = (ulonglong)CONCAT12(uVar48,(short)uVar3) & 0xffffffffffff00ff;
          auVar19._8_4_ = 0;
          auVar19._0_8_ = uVar37;
          auVar19[0xc] = (char)((uint)uVar3 >> 0x18);
          auVar20[8] = (char)((uint)uVar3 >> 0x10);
          auVar20._0_8_ = uVar37;
          auVar20[9] = 0;
          auVar20._10_3_ = auVar19._10_3_;
          auVar33._5_8_ = 0;
          auVar33._0_5_ = auVar20._8_5_;
          auVar21[4] = uVar48;
          auVar21._0_4_ = (uint)uVar37;
          auVar21[5] = 0;
          auVar21._6_7_ = SUB137(auVar33 << 0x40,6);
          auVar45._0_4_ = (uint)uVar37 & 0xffff;
          auVar45._4_9_ = auVar21._4_9_;
          auVar45._13_3_ = 0;
          *(undefined1 (*) [16])((longlong)param_5 + 0x10) = auVar45;
          uVar3 = (undefined4)_Src[1];
          _Src = _Src + 2;
          uVar48 = (undefined1)((uint)uVar3 >> 8);
          uVar37 = (ulonglong)CONCAT12(uVar48,(short)uVar3) & 0xffffffffffff00ff;
          auVar22._8_4_ = 0;
          auVar22._0_8_ = uVar37;
          auVar22[0xc] = (char)((uint)uVar3 >> 0x18);
          auVar23[8] = (char)((uint)uVar3 >> 0x10);
          auVar23._0_8_ = uVar37;
          auVar23[9] = 0;
          auVar23._10_3_ = auVar22._10_3_;
          auVar34._5_8_ = 0;
          auVar34._0_5_ = auVar23._8_5_;
          auVar24[4] = uVar48;
          auVar24._0_4_ = (uint)uVar37;
          auVar24[5] = 0;
          auVar24._6_7_ = SUB137(auVar34 << 0x40,6);
          auVar46._0_4_ = (uint)uVar37 & 0xffff;
          auVar46._4_9_ = auVar24._4_9_;
          auVar46._13_3_ = 0;
          *(undefined1 (*) [16])((longlong)param_5 + 0x20) = auVar46;
          uVar3 = *puVar2;
          uVar48 = (undefined1)((uint)uVar3 >> 8);
          uVar37 = (ulonglong)CONCAT12(uVar48,(short)uVar3) & 0xffffffffffff00ff;
          auVar25._8_4_ = 0;
          auVar25._0_8_ = uVar37;
          auVar25[0xc] = (char)((uint)uVar3 >> 0x18);
          auVar26[8] = (char)((uint)uVar3 >> 0x10);
          auVar26._0_8_ = uVar37;
          auVar26[9] = 0;
          auVar26._10_3_ = auVar25._10_3_;
          auVar35._5_8_ = 0;
          auVar35._0_5_ = auVar26._8_5_;
          auVar27[4] = uVar48;
          auVar27._0_4_ = (uint)uVar37;
          auVar27[5] = 0;
          auVar27._6_7_ = SUB137(auVar35 << 0x40,6);
          auVar47._0_4_ = (uint)uVar37 & 0xffff;
          auVar47._4_9_ = auVar27._4_9_;
          auVar47._13_3_ = 0;
          *(undefined1 (*) [16])((longlong)param_5 + 0x30) = auVar47;
          param_5 = (uint *)((longlong)param_5 + 0x40);
        } while (uVar38 < (param_4 & 0xfffffff0));
        uVar39 = uVar38;
        if (param_4 <= uVar38) {
          return true;
        }
      }
      uVar37 = (ulonglong)(param_4 - uVar39);
      do {
        uVar36 = *_Src;
        _Src = (ulonglong *)((longlong)_Src + 1);
        *(uint *)*(undefined1 (*) [16])param_5 = (uint)(byte)uVar36;
        param_5 = (uint *)(*(undefined1 (*) [16])param_5 + 4);
        uVar37 = uVar37 - 1;
      } while (uVar37 != 0);
    }
  }
  else {
    if (param_3 != U16) {
      if (param_3 == U32) {
        memcpy(param_5,_Src,(ulonglong)param_4 << 2);
        return true;
      }
      return false;
    }
    uVar38 = 0;
    if (param_4 != 0) {
      uVar39 = uVar38;
      if ((0xf < param_4) &&
         (((uint *)((longlong)_Src + (ulonglong)(param_4 - 1) * 2) < param_5 ||
          (uVar39 = 0, param_5 + (param_4 - 1) < _Src)))) {
        do {
          uVar37 = *_Src;
          puVar1 = _Src + 3;
          uVar38 = uVar38 + 0x10;
          auVar4._8_4_ = 0;
          auVar4._0_8_ = uVar37;
          auVar4._12_2_ = (short)(uVar37 >> 0x30);
          auVar8._8_2_ = (short)(uVar37 >> 0x20);
          auVar8._0_8_ = uVar37;
          auVar8._10_4_ = auVar4._10_4_;
          auVar28._6_8_ = 0;
          auVar28._0_6_ = auVar8._8_6_;
          auVar12._4_2_ = (short)(uVar37 >> 0x10);
          auVar12._0_4_ = (uint)uVar37;
          auVar12._6_8_ = SUB148(auVar28 << 0x40,6);
          auVar40._0_4_ = (uint)uVar37 & 0xffff;
          auVar40._4_10_ = auVar12._4_10_;
          auVar40._14_2_ = 0;
          *(undefined1 (*) [16])param_5 = auVar40;
          uVar37 = _Src[1];
          auVar5._8_4_ = 0;
          auVar5._0_8_ = uVar37;
          auVar5._12_2_ = (short)(uVar37 >> 0x30);
          auVar9._8_2_ = (short)(uVar37 >> 0x20);
          auVar9._0_8_ = uVar37;
          auVar9._10_4_ = auVar5._10_4_;
          auVar29._6_8_ = 0;
          auVar29._0_6_ = auVar9._8_6_;
          auVar13._4_2_ = (short)(uVar37 >> 0x10);
          auVar13._0_4_ = (uint)uVar37;
          auVar13._6_8_ = SUB148(auVar29 << 0x40,6);
          auVar41._0_4_ = (uint)uVar37 & 0xffff;
          auVar41._4_10_ = auVar13._4_10_;
          auVar41._14_2_ = 0;
          *(undefined1 (*) [16])((longlong)param_5 + 0x10) = auVar41;
          uVar37 = _Src[2];
          _Src = _Src + 4;
          auVar6._8_4_ = 0;
          auVar6._0_8_ = uVar37;
          auVar6._12_2_ = (short)(uVar37 >> 0x30);
          auVar10._8_2_ = (short)(uVar37 >> 0x20);
          auVar10._0_8_ = uVar37;
          auVar10._10_4_ = auVar6._10_4_;
          auVar30._6_8_ = 0;
          auVar30._0_6_ = auVar10._8_6_;
          auVar14._4_2_ = (short)(uVar37 >> 0x10);
          auVar14._0_4_ = (uint)uVar37;
          auVar14._6_8_ = SUB148(auVar30 << 0x40,6);
          auVar42._0_4_ = (uint)uVar37 & 0xffff;
          auVar42._4_10_ = auVar14._4_10_;
          auVar42._14_2_ = 0;
          *(undefined1 (*) [16])((longlong)param_5 + 0x20) = auVar42;
          uVar37 = *puVar1;
          auVar7._8_4_ = 0;
          auVar7._0_8_ = uVar37;
          auVar7._12_2_ = (short)(uVar37 >> 0x30);
          auVar11._8_2_ = (short)(uVar37 >> 0x20);
          auVar11._0_8_ = uVar37;
          auVar11._10_4_ = auVar7._10_4_;
          auVar31._6_8_ = 0;
          auVar31._0_6_ = auVar11._8_6_;
          auVar15._4_2_ = (short)(uVar37 >> 0x10);
          auVar15._0_4_ = (uint)uVar37;
          auVar15._6_8_ = SUB148(auVar31 << 0x40,6);
          auVar43._0_4_ = (uint)uVar37 & 0xffff;
          auVar43._4_10_ = auVar15._4_10_;
          auVar43._14_2_ = 0;
          *(undefined1 (*) [16])((longlong)param_5 + 0x30) = auVar43;
          param_5 = (uint *)((longlong)param_5 + 0x40);
        } while (uVar38 < (param_4 & 0xfffffff0));
        uVar39 = uVar38;
        if (param_4 <= uVar38) {
          return true;
        }
      }
      uVar37 = (ulonglong)(param_4 - uVar39);
      do {
        uVar36 = *_Src;
        _Src = (ulonglong *)((longlong)_Src + 2);
        *(uint *)*(undefined1 (*) [16])param_5 = (uint)(ushort)uVar36;
        param_5 = (uint *)(*(undefined1 (*) [16])param_5 + 4);
        uVar37 = uVar37 - 1;
      } while (uVar37 != 0);
      return true;
    }
  }
  return true;
}

// FilterFromNumber @ 14e635a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EFilter __cdecl GLTF::FilterFromNumber(ushort param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  EFilter EVar5;
  ForAnyElementType FVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'
                           ::__l2::_thread_safe_static_guard_0__), uVar3 = _UNK_152f11938,
     uVar2 = ___xmm_00002701000027000000260100002600,
     `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::SafetyCheck
    .AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::SafetyCheck
    .ArrayNum = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,6,0,&`enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'
                        ::__l2::SafetyCheck.AllocatorInstance,6,
               &`enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2
                ::SafetyCheck.ArrayMax);
    FVar6 = `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
            SafetyCheck.AllocatorInstance;
    *(undefined8 *)
     `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
     SafetyCheck.AllocatorInstance.Data = uVar2;
    *(undefined8 *)(FVar6.Data + 8) = uVar3;
    *(undefined8 *)(FVar6.Data + 0x10) = 0x270300002702;
    atexit(`GLTF::FilterFromNumber'::__l2::_dynamic_atexit_destructor_for__SafetyCheck__);
    _Init_thread_footer(&`enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar6.Data = `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
               SafetyCheck.AllocatorInstance.Data;
  do {
    if (FVar6.Data ==
        `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
        SafetyCheck.AllocatorInstance.Data +
        (longlong)
        `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
        SafetyCheck.ArrayNum * 4) {
LAB_14e635a70:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8036928033329774429>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ConversionUtilities.h"
                         ,0xa3,"SafetyCheck.Find(static_cast<FSampler::EFilter>(Num)) != INDEX_NONE"
                        );
      if (!bVar4) {
        return Linear;
      }
      pcVar1 = (code *)swi(3);
      EVar5 = (*pcVar1)();
      return EVar5;
    }
    if (*(EFilter *)FVar6.Data == (uint)param_1) {
      if ((int)((longlong)FVar6.Data -
                (longlong)
                `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2
                ::SafetyCheck.AllocatorInstance.Data >> 2) != -1) {
        return (uint)param_1;
      }
      goto LAB_14e635a70;
    }
    FVar6.Data = FVar6.Data + 4;
  } while( true );
}

// GenerateFlatNormals @ 14e6369e0

void __cdecl
GLTF::`anonymous_namespace'::GenerateFlatNormals
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  
  piVar1 = &param_3->ArrayNum;
  piVar2 = &param_3->ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,piVar2);
  }
  uVar18 = param_2->ArrayNum;
  uVar13 = (uVar18 / 3) * 3;
  if ((uVar18 != uVar13) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2073350223253471377>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                         ,0x91,"N % 3 == 0"), uVar18 = uVar13, bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,uVar18,&param_3->AllocatorInstance,piVar1,piVar2);
  fVar8 = __real_3f800000;
  fVar7 = __real_322bcc77;
  if (uVar18 != 0) {
    uVar13 = 2;
    do {
      uVar17 = ~(uVar13 - 2) >> 0x1f;
      uVar10 = 0;
      if ((int)(uVar13 - 2) < param_2->ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar12 = (longlong)(int)uVar13 + -2;
      uVar10 = *(uint *)((param_2->AllocatorInstance).Data + lVar12 * 4);
      lVar14 = (longlong)(int)uVar10;
      uVar21 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar21 = ~uVar10 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar21 = ~(uVar13 - 1) >> 0x1f;
      uVar10 = 0;
      if ((int)(uVar13 - 1) < param_2->ArrayNum) {
        uVar10 = uVar21;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar20 = (longlong)(int)uVar13 + -1;
      uVar10 = *(uint *)((param_2->AllocatorInstance).Data + lVar20 * 4);
      lVar15 = (longlong)(int)uVar10;
      uVar11 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar19 = (longlong)(int)uVar13;
      uVar10 = *(uint *)((param_2->AllocatorInstance).Data + lVar19 * 4);
      lVar16 = (longlong)(int)uVar10;
      uVar11 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      fVar25 = (*(float *)(pFVar5 + lVar16 * 0xc + 4) - *(float *)(pFVar3 + lVar14 * 0xc + 4)) *
               (*(float *)(pFVar4 + lVar15 * 0xc + 8) - *(float *)(pFVar3 + lVar14 * 0xc + 8)) -
               (*(float *)(pFVar5 + lVar16 * 0xc + 8) - *(float *)(pFVar3 + lVar14 * 0xc + 8)) *
               (*(float *)(pFVar4 + lVar15 * 0xc + 4) - *(float *)(pFVar3 + lVar14 * 0xc + 4));
      uVar24 = (*(float *)(pFVar5 + lVar16 * 0xc) - *(float *)(pFVar3 + lVar14 * 0xc)) *
               (*(float *)(pFVar4 + lVar15 * 0xc + 4) - *(float *)(pFVar3 + lVar14 * 0xc + 4)) -
               (*(float *)(pFVar5 + lVar16 * 0xc + 4) - *(float *)(pFVar3 + lVar14 * 0xc + 4)) *
               (*(float *)(pFVar4 + lVar15 * 0xc) - *(float *)(pFVar3 + lVar14 * 0xc));
      fVar22 = (*(float *)(pFVar5 + lVar16 * 0xc + 8) - *(float *)(pFVar3 + lVar14 * 0xc + 8)) *
               (*(float *)(pFVar4 + lVar15 * 0xc) - *(float *)(pFVar3 + lVar14 * 0xc)) -
               (*(float *)(pFVar5 + lVar16 * 0xc) - *(float *)(pFVar3 + lVar14 * 0xc)) *
               (*(float *)(pFVar4 + lVar15 * 0xc + 8) - *(float *)(pFVar3 + lVar14 * 0xc + 8));
      fVar23 = fVar22 * fVar22 + fVar25 * fVar25 + (float)uVar24 * (float)uVar24;
      if (fVar23 != fVar8) {
        if (fVar7 <= fVar23) {
          fVar23 = __real_3f800000 / SQRT(fVar23);
          fVar25 = fVar25 * fVar23;
          fVar22 = fVar22 * fVar23;
          uVar24 = (float)uVar24 * fVar23;
        }
        else {
          fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar22 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar10 = 0;
      if ((int)(uVar13 - 2) < *piVar1) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar3 + lVar12 * 0xc) = CONCAT44(fVar22,fVar25);
      *(undefined4 *)(pFVar3 + lVar12 * 0xc + 8) = uVar24;
      uVar10 = 0;
      if ((int)(uVar13 - 1) < *piVar1) {
        uVar10 = uVar21;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar3 + lVar20 * 0xc) = CONCAT44(fVar22,fVar25);
      *(undefined4 *)(pFVar3 + lVar20 * 0xc + 8) = uVar24;
      uVar10 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar3 + lVar19 * 0xc) = CONCAT44(fVar22,fVar25);
      *(undefined4 *)(pFVar3 + lVar19 * 0xc + 8) = uVar24;
      uVar10 = uVar13 + 1;
      uVar13 = uVar13 + 3;
    } while (uVar10 < uVar18);
  }
  return;
}

// GenerateGlobalTransform @ 14e636fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
GLTF::GenerateGlobalTransform
          (TArray<GLTF::FNode,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TTransform<double> *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  if (-1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
    lVar4 = (longlong)param_2;
    if (param_2 < param_1->ArrayNum) {
      if ((param_2 < 0) &&
         (local_a8 = lVar4, local_a0 = (longlong)param_1->ArrayNum,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (param_2 != *param_4) {
        GenerateGlobalTransform(param_1,*(int *)(pFVar1 + lVar4 * 0x260 + 0xcc),param_3,param_4);
      }
      local_98.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_98.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_98.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_98.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_98.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_98.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_98,(TTransform<double> *)(pFVar1 + lVar4 * 0x260 + 0x10),param_3);
      (param_3->Rotation).XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
      (param_3->Rotation).XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
      (param_3->Rotation).ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
      (param_3->Rotation).ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
      (param_3->Translation).XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
      (param_3->Translation).XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
      (param_3->Translation).ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
      (param_3->Translation).ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
      (param_3->Scale3D).XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
      (param_3->Scale3D).ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
      (param_3->Scale3D).ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
    }
  }
  return;
}

// GetAnimationPrefix @ 14e63ab30

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetAnimationPrefix
          (FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_animation_");
  return __return_storage_ptr__;
}

// GetCameraPrefix @ 14e63ab90

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetCameraPrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_camera_");
  return __return_storage_ptr__;
}

// GetDecodedDataSize @ 14e63b000

uint __cdecl GLTF::`anonymous_namespace'::GetDecodedDataSize(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar3 = ::FString::StartsWith(param_1,L"data:",5,IgnoreCase);
  if (bVar3) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    for (pFVar11 = pFVar1; pFVar9 = pFVar1,
        pFVar11 != pFVar1 + (longlong)(param_1->Data).ArrayNum * 2; pFVar11 = pFVar11 + 2) {
      if (*(short *)pFVar11 == 0x3b) {
        lVar12 = (longlong)pFVar11 - (longlong)pFVar1 >> 1;
        goto LAB_14e63b0b0;
      }
    }
    lVar12 = 0xffffffff;
    iVar10 = -1;
    for (; pFVar9 != pFVar1 + (longlong)(param_1->Data).ArrayNum * 2; pFVar9 = pFVar9 + 2) {
LAB_14e63b0b0:
      iVar10 = (int)lVar12;
      if (*(short *)pFVar9 == 0x2c) {
        iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar1 >> 1);
        goto LAB_14e63b0c4;
      }
    }
    iVar8 = -1;
LAB_14e63b0c4:
    if ((iVar10 != -1) && (iVar8 != -1)) {
      ::FString::Mid(param_1,&local_38,iVar10 + 1,(iVar8 - iVar10) + -1);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"base64");
      if (iVar5 == 0) {
        pFVar6 = ::FString::Mid(param_1,&local_18,5,iVar10 + -5);
        ::FString::operator=(param_2,pFVar6);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        ::FString::RightChop(param_1,&local_28,iVar8 + 1);
        uVar4 = FBase64::GetDecodedDataSize(&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar4 = 0;
      }
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return uVar4;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return uVar4;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8658679761230364607>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                       ,0x41,"URI.StartsWith(L\"data:\")");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return 0;
}

// GetFirstInput @ 14e63b270

FMaterialExpressionInput * __cdecl
GLTF::`anonymous_namespace'::GetFirstInput(FMaterialExpression *param_1)

{
  FMaterialExpression *pFVar1;
  FMaterialExpressionInput *pFVar2;
  
  pFVar2 = (FMaterialExpressionInput *)(**(code **)(param_1->_padding_ + 8))(param_1,0);
  pFVar1 = pFVar2->Expression;
  while (pFVar1 != (FMaterialExpression *)0x0) {
    pFVar2 = (FMaterialExpressionInput *)(**(code **)(pFVar1->_padding_ + 8))(pFVar1,0);
    pFVar1 = pFVar2->Expression;
  }
  return pFVar2;
}

// GetIESPrefix @ 14e63c380

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetIESPrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_IES_");
  return __return_storage_ptr__;
}

// GetImagePrefix @ 14e63c3b0

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetImagePrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_image_");
  return __return_storage_ptr__;
}

// GetJointPrefix @ 14e63c930

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetJointPrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_joint_");
  return __return_storage_ptr__;
}

// GetLightPrefix @ 14e63c960

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetLightPrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_light_");
  return __return_storage_ptr__;
}

// GetMat4 @ 14e63cc20

TMatrix<double> * __cdecl
GLTF::GetMat4(TMatrix<double> *__return_storage_ptr__,FJsonObject *param_1,wchar_t *param_2,
             TMatrix<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TMatrix<double> *pTVar11;
  longlong lVar12;
  double *pdVar13;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  double local_c8 [7];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  iVar5 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_2);
    iVar5 = (int)sVar8;
  }
  local_48._12_4_ = uStack_dc;
  local_48.Size = iVar5;
  local_48.DataPtr = param_2;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,param_2);
  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar6,&local_48);
  if (((pTVar9 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar9->Object != (FJsonValue *)0x0)) &&
     (pTVar9->Object->Type == Array)) {
    iVar5 = 0;
    if (param_2 != (wchar_t *)0x0) {
      sVar8 = wcslen(param_2);
      iVar5 = (int)sVar8;
    }
    local_38._12_4_ = uStack_cc;
    local_38.Size = iVar5;
    local_38.DataPtr = param_2;
    pTVar10 = FJsonObject::GetArrayField(param_1,&local_38);
    if (pTVar10->ArrayNum == 0x10) {
      lVar12 = 0x80;
      uVar6 = 8;
      pdVar13 = local_c8 + 1;
      do {
        uVar7 = 0;
        if ((int)(uVar6 - 8) < pTVar10->ArrayNum) {
          uVar7 = ~(uVar6 - 8) >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        pFVar1 = (pTVar10->AllocatorInstance).Data;
        if (*(longlong *)(pFVar1 + lVar12 + -0x80) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        dVar3 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + lVar12 + -0x80));
        iVar5 = pTVar10->ArrayNum;
        pdVar13[-1] = dVar3;
        uVar7 = 0;
        if ((int)(uVar6 - 4) < iVar5) {
          uVar7 = ~(uVar6 - 4) >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        pFVar1 = (pTVar10->AllocatorInstance).Data;
        if (*(longlong *)(pFVar1 + lVar12 + -0x40) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        dVar3 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + lVar12 + -0x40));
        iVar5 = pTVar10->ArrayNum;
        *pdVar13 = dVar3;
        uVar7 = 0;
        if ((int)uVar6 < iVar5) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        pFVar1 = (pTVar10->AllocatorInstance).Data;
        if (*(longlong *)(pFVar1 + lVar12) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        dVar3 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + lVar12));
        iVar5 = pTVar10->ArrayNum;
        pdVar13[1] = dVar3;
        uVar7 = 0;
        if ((int)(uVar6 + 4) < iVar5) {
          uVar7 = ~(uVar6 + 4) >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        pFVar1 = (pTVar10->AllocatorInstance).Data;
        if (*(longlong *)(pFVar1 + lVar12 + 0x40) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMatrix<double> *)(*pcVar2)();
            return pTVar11;
          }
        }
        dVar3 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + lVar12 + 0x40));
        pdVar13[2] = dVar3;
        uVar6 = uVar6 + 1;
        pdVar13 = pdVar13 + 4;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 < 0xc0);
      __return_storage_ptr__->M[0][0] = local_c8[0];
      __return_storage_ptr__->M[0][1] = local_c8[4];
      __return_storage_ptr__->M[0][2] = local_88;
      __return_storage_ptr__->M[0][3] = local_68;
      __return_storage_ptr__->M[1][0] = local_c8[1];
      __return_storage_ptr__->M[1][1] = local_c8[5];
      __return_storage_ptr__->M[1][2] = local_80;
      __return_storage_ptr__->M[1][3] = local_60;
      __return_storage_ptr__->M[2][0] = local_c8[2];
      __return_storage_ptr__->M[2][1] = local_c8[6];
      __return_storage_ptr__->M[2][2] = local_78;
      __return_storage_ptr__->M[2][3] = local_58;
      __return_storage_ptr__->M[3][0] = local_c8[3];
      __return_storage_ptr__->M[3][1] = local_90;
      __return_storage_ptr__->M[3][2] = local_70;
      __return_storage_ptr__->M[3][3] = local_50;
      return __return_storage_ptr__;
    }
  }
  dVar3 = param_3->M[0][1];
  __return_storage_ptr__->M[0][0] = param_3->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar3;
  dVar3 = param_3->M[0][3];
  __return_storage_ptr__->M[0][2] = param_3->M[0][2];
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = param_3->M[1][1];
  __return_storage_ptr__->M[1][0] = param_3->M[1][0];
  __return_storage_ptr__->M[1][1] = dVar3;
  dVar3 = param_3->M[1][3];
  __return_storage_ptr__->M[1][2] = param_3->M[1][2];
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = param_3->M[2][1];
  __return_storage_ptr__->M[2][0] = param_3->M[2][0];
  __return_storage_ptr__->M[2][1] = dVar3;
  dVar3 = param_3->M[2][3];
  __return_storage_ptr__->M[2][2] = param_3->M[2][2];
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = param_3->M[3][1];
  __return_storage_ptr__->M[3][0] = param_3->M[3][0];
  __return_storage_ptr__->M[3][1] = dVar3;
  dVar3 = param_3->M[3][3];
  __return_storage_ptr__->M[3][2] = param_3->M[3][2];
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// GetMaterialPrefix @ 14e63d440

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetMaterialPrefix
          (FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_material_");
  return __return_storage_ptr__;
}

// GetMeshPrefix @ 14e63d480

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetMeshPrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_mesh_");
  return __return_storage_ptr__;
}

// GetNodePrefix @ 14e63d520

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetNodePrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_node_");
  return __return_storage_ptr__;
}

// GetQuat @ 14e63d720

TQuat<double> * __cdecl
GLTF::GetQuat(TQuat<double> *__return_storage_ptr__,FJsonObject *param_1,wchar_t *param_2,
             TQuat<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  TQuat<double> *pTVar13;
  int iVar14;
  float fVar15;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [4];
  size_t sVar10;
  
  iVar14 = 0;
  iVar8 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_2);
    iVar8 = (int)sVar10;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iVar8;
  local_58.DataPtr = param_2;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,param_2);
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_58);
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == Array)) {
    if (param_2 != (wchar_t *)0x0) {
      sVar10 = wcslen(param_2);
      iVar14 = (int)sVar10;
    }
    local_48[0]._12_4_ = uStack_5c;
    local_48[0].Size = iVar14;
    local_48[0].DataPtr = param_2;
    pTVar12 = FJsonObject::GetArrayField(param_1,local_48);
    if (pTVar12->ArrayNum == 4) {
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)pFVar1 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar3 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
      if ((pTVar12->ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar4 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
      if ((pTVar12->ArrayNum < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x20));
      if ((pTVar12->ArrayNum < 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x30) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TQuat<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar6 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x30));
      uVar9 = __xmm_80000000800000008000000080000000;
      fVar15 = (float)((uint)(float)dVar5 ^ __xmm_80000000800000008000000080000000);
      __return_storage_ptr__->X =
           (double)(float)((uint)(float)dVar3 ^ __xmm_80000000800000008000000080000000);
      __return_storage_ptr__->Y = (double)fVar15;
      __return_storage_ptr__->Z = (double)(float)((uint)(float)dVar4 ^ uVar9);
      __return_storage_ptr__->W = (double)(float)dVar6;
      return __return_storage_ptr__;
    }
  }
  dVar3 = param_3->Y;
  dVar4 = param_3->Z;
  dVar5 = param_3->W;
  __return_storage_ptr__->X = param_3->X;
  __return_storage_ptr__->Y = dVar3;
  __return_storage_ptr__->Z = dVar4;
  __return_storage_ptr__->W = dVar5;
  return __return_storage_ptr__;
}

// GetScalar @ 14e63e1c0

float __cdecl GLTF::GetScalar(FJsonObject *param_1,wchar_t *param_2,float param_3)

{
  double dVar1;
  uint uVar2;
  size_t sVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  int iVar5;
  TStringView<wchar_t> local_28 [2];
  
  iVar5 = 0;
  local_28[0].Size = 0;
  local_28[0].DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    local_28[0].Size = (int)sVar3;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(local_28[0].Size,param_2);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar2,local_28);
  if (((pTVar4 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar4->Object != (FJsonValue *)0x0)) &&
     (pTVar4->Object->Type == Number)) {
    local_28[0].DataPtr = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_2);
      iVar5 = (int)sVar3;
    }
    local_28[0].Size = iVar5;
    dVar1 = FJsonObject::GetNumberField(param_1,local_28);
    param_3 = (float)dVar1;
  }
  return param_3;
}

// GetScenePrefix @ 14e63e290

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetScenePrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_scene_");
  return __return_storage_ptr__;
}

// GetSkinPrefix @ 14e63e2c0

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetSkinPrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_skin_");
  return __return_storage_ptr__;
}

// GetTexture @ 14e63e6a0

FTexture * __cdecl
GLTF::`anonymous_namespace'::GetTexture
          (FTextureMap *param_1,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTexture *pFVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `GLTF::GetTexture'::`2'::_TSS0) {
    _Init_thread_header(&`GLTF::GetTexture'::`2'::_TSS0);
    if (`GLTF::GetTexture'::`2'::_TSS0 == -1) {
      atexit(`GLTF::`anonymous_namespace'::GetTexture'::__l2::
             _dynamic_atexit_destructor_for__Image__);
      _Init_thread_footer(&`GLTF::GetTexture'::`2'::_TSS0);
    }
  }
  if (*piVar6 < `GLTF::GetTexture'::`2'::_TSS1) {
    _Init_thread_header(&`GLTF::GetTexture'::`2'::_TSS1);
    if (`GLTF::GetTexture'::`2'::_TSS1 == -1) {
      atexit(`GLTF::`anonymous_namespace'::GetTexture'::__l2::_dynamic_atexit_destructor_for__None__
            );
      _Init_thread_footer(&`GLTF::GetTexture'::`2'::_TSS1);
    }
  }
  uVar1 = param_1->TextureIndex;
  if (uVar1 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar1 < param_2->ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTexture *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FTexture *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x80);
  }
  return &`GLTF::GetTexture'::`2'::None;
}

// GetTexturePrefix @ 14e63e7f0

FString * __cdecl
GLTF::GLTFNodePrefixStaticHelper::GetTexturePrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"_texture_");
  return __return_storage_ptr__;
}

// GetUnsignedInt64 @ 14e63edc0

ulong64 __cdecl GLTF::GetUnsignedInt64(FJsonObject *param_1,wchar_t *param_2,ulong64 param_3)

{
  bool bVar1;
  uint uVar2;
  size_t sVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  int iVar5;
  ulong64 local_res8;
  TStringView<wchar_t> local_18;
  
  iVar5 = 0;
  local_18.Size = 0;
  local_18.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    local_18.Size = (int)sVar3;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,param_2);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar2,&local_18);
  if (((pTVar4 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar4->Object != (FJsonValue *)0x0)) &&
     (pTVar4->Object->Type == Number)) {
    local_18.DataPtr = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_2);
      iVar5 = (int)sVar3;
    }
    local_18.Size = iVar5;
    bVar1 = FJsonObject::TryGetNumberField(param_1,&local_18,&local_res8);
    if (bVar1) {
      return local_res8;
    }
  }
  return param_3;
}

// GetUnsignedInt @ 14e63f040

uint __cdecl GLTF::GetUnsignedInt(FJsonObject *param_1,wchar_t *param_2,uint param_3)

{
  double dVar1;
  uint uVar2;
  size_t sVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  int iVar5;
  TStringView<wchar_t> local_18;
  
  iVar5 = 0;
  local_18.Size = 0;
  local_18.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    local_18.Size = (int)sVar3;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,param_2);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar2,&local_18);
  if (((pTVar4 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar4->Object != (FJsonValue *)0x0)) &&
     (pTVar4->Object->Type == Number)) {
    local_18.DataPtr = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_2);
      iVar5 = (int)sVar3;
    }
    local_18.Size = iVar5;
    dVar1 = FJsonObject::GetNumberField(param_1,&local_18);
    if (-1 < (int)dVar1) {
      param_3 = (int)dVar1;
    }
  }
  return param_3;
}

// GetVec3 @ 14e63fa60

TVector<double> * __cdecl
GLTF::GetVec3(TVector<double> *__return_storage_ptr__,FJsonObject *param_1,wchar_t *param_2,
             TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TSharedPtr<FJsonValue,1> *pTVar10;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  TVector<double> *pTVar12;
  int iVar13;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38 [3];
  size_t sVar9;
  
  iVar13 = 0;
  iVar7 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar9 = wcslen(param_2);
    iVar7 = (int)sVar9;
  }
  local_48._12_4_ = uStack_5c;
  local_48.Size = iVar7;
  local_48.DataPtr = param_2;
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,param_2);
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar8,&local_48);
  if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)) &&
     (pTVar10->Object->Type == Array)) {
    if (param_2 != (wchar_t *)0x0) {
      sVar9 = wcslen(param_2);
      iVar13 = (int)sVar9;
    }
    local_38[0]._12_4_ = uStack_4c;
    local_38[0].Size = iVar13;
    local_38[0].DataPtr = param_2;
    pTVar11 = FJsonObject::GetArrayField(param_1,local_38);
    if (pTVar11->ArrayNum == 3) {
      pFVar1 = (pTVar11->AllocatorInstance).Data;
      if ((*(longlong *)pFVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar2)();
        return pTVar12;
      }
      dVar3 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
      if ((pTVar11->ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar2)();
        return pTVar12;
      }
      pFVar1 = (pTVar11->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x10) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar2)();
        return pTVar12;
      }
      dVar4 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
      if ((pTVar11->ArrayNum < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar2)();
        return pTVar12;
      }
      pFVar1 = (pTVar11->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar2)();
        return pTVar12;
      }
      dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x20));
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(float)dVar5;
      return __return_storage_ptr__;
    }
  }
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  return __return_storage_ptr__;
}

// GetVec4 @ 14e640010

TVector4<double> * __cdecl
GLTF::GetVec4(TVector4<double> *__return_storage_ptr__,FJsonObject *param_1,wchar_t *param_2,
             TVector4<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  TVector4<double> *pTVar13;
  int iVar14;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [4];
  size_t sVar10;
  
  iVar14 = 0;
  iVar8 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_2);
    iVar8 = (int)sVar10;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iVar8;
  local_58.DataPtr = param_2;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,param_2);
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_58);
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == Array)) {
    if (param_2 != (wchar_t *)0x0) {
      sVar10 = wcslen(param_2);
      iVar14 = (int)sVar10;
    }
    local_48[0]._12_4_ = uStack_5c;
    local_48[0].Size = iVar14;
    local_48[0].DataPtr = param_2;
    pTVar12 = FJsonObject::GetArrayField(param_1,local_48);
    if (pTVar12->ArrayNum == 4) {
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)pFVar1 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar3 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
      if ((pTVar12->ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar4 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
      if ((pTVar12->ArrayNum < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x20));
      if ((pTVar12->ArrayNum < 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + 0x30) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TVector4<double> *)(*pcVar2)();
        return pTVar13;
      }
      dVar6 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x30));
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(float)dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.W = (double)(float)dVar6;
      return __return_storage_ptr__;
    }
  }
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_3->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar5;
  return __return_storage_ptr__;
}

// ImageFormatFromFilename @ 14e6424e0

EFormat __cdecl GLTF::ImageFormatFromFilename(FString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::EndsWith(param_1,L".png",4,IgnoreCase);
  if (bVar1) {
    return PNG;
  }
  bVar1 = ::FString::EndsWith(param_1,L".jpg",4,IgnoreCase);
  if (!bVar1) {
    bVar1 = ::FString::EndsWith(param_1,L".jpeg",5,IgnoreCase);
    return -(uint)bVar1 & JPEG;
  }
  return JPEG;
}

// ImageFormatFromMimeType @ 14e642570

EFormat __cdecl GLTF::ImageFormatFromMimeType(FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *_Str1;
  
  _Str1 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar2,L"image/jpeg");
  if (iVar1 != 0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = wcscmp(pwVar2,L"image/jpg");
    if (iVar1 != 0) {
      if ((param_1->Data).ArrayNum != 0) {
        _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar1 = wcscmp(_Str1,L"image/png");
      return (EFormat)(iVar1 == 0);
    }
  }
  return JPEG;
}

// ProcessExtras @ 14e647350

void __cdecl
GLTF::`anonymous_namespace'::ProcessExtras
          (FJsonObject *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FJsonObject *pFVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar9;
  FJsonObject *pFVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  TSharedPtr<FJsonValue,1> *pTVar15;
  TSharedPtr<FJsonObject,1> *pTVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  uint *puVar24;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  FJsonObject *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [16];
  FJsonObject *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  FJsonObject *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FString *local_b8;
  void **local_b0;
  longlong local_a8;
  void **local_a0;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88 [2];
  undefined4 local_5c;
  undefined4 local_3c;
  
  local_d8 = L"extras";
  uStack_d0 = 6;
  local_98._12_4_ = uStack_cc;
  local_98.Size = 6;
  local_98.DataPtr = L"extras";
  local_180 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_2;
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"extras");
  pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar13,&local_98);
  iVar20 = 0;
  iVar14 = 0;
  if ((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar15->Object != (FJsonValue *)0x0)) {
    local_c8 = L"extras";
    uStack_c0 = 6;
    local_88[0]._12_4_ = uStack_bc;
    local_88[0].Size = 6;
    local_88[0].DataPtr = L"extras";
    pTVar16 = FJsonObject::GetObjectField(param_1,local_88);
    iVar22 = 0;
    if (*(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34 < 1) {
      if ((pTVar16->Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = pTVar16->Object;
      iVar22 = *(int *)&(pFVar5->Values).field_0x28;
      puVar1 = &(pFVar5->Values).field_0x10;
      uStack_1a4 = 1;
      iStack_194 = iVar20;
      if (iVar22 != 0) {
        puVar24 = *(uint **)&(pFVar5->Values).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar1;
        }
        uVar13 = *puVar24;
        iVar14 = iVar20;
        while (uVar13 == 0) {
          lVar17 = (longlong)iVar20;
          iVar14 = iVar14 + 0x20;
          iVar20 = iVar20 + 1;
          iStack_194 = iVar22;
          if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14e64777e;
          uVar13 = puVar24[lVar17 + 1];
        }
        uStack_1a4 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_150._4_4_ = (undefined4)lVar17;
        iStack_194 = iVar14 + -1 + local_150._4_4_;
        if (iVar22 < iStack_194) {
          iStack_194 = iVar22;
        }
      }
LAB_14e64777e:
      uVar13 = *(uint *)&(pFVar5->Values).field_0x28;
      uStack_18c = local_3c;
      uVar19 = uVar13 & 0xffffffe0;
      iStack_188 = *(int *)&(pFVar5->Values).field_0x8 - *(int *)&(pFVar5->Values).field_0x34;
      uStack_198 = 0xffffffff;
      TStack_108._padding_ = CONCAT44(uStack_1a4,iVar20);
      TStack_108.CurrentBitIndex = iStack_194;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar13 >> 5;
      TStack_108._28_4_ = local_3c;
      TStack_108.BaseBitIndex = iVar14;
      uStack_e8 = CONCAT44(uStack_184,iStack_188);
      local_190 = iVar14;
      local_1b0 = pFVar5;
      iStack_1a8 = iVar20;
      local_1a0 = puVar1;
      local_110 = pFVar5;
      TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar22 < (int)uVar13)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar9 = local_180;
      uVar4 = *(uint *)&(pFVar5->Values).field_0x28;
      if (uVar13 != uVar4) {
        puVar23 = *(undefined1 **)&(pFVar5->Values).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar21 * 4);
        while (uVar13 == 0) {
          lVar17 = (longlong)iVar21;
          uVar19 = uVar19 + 0x20;
          iVar21 = iVar21 + 1;
          uVar13 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14e6478a0;
          uVar13 = *(uint *)(puVar23 + lVar17 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_150._8_4_ = (undefined4)lVar17;
        uVar13 = local_150._8_4_ + -1 + uVar19;
        if ((int)uVar4 < (int)uVar13) {
          uVar13 = uVar4;
        }
      }
LAB_14e6478a0:
      while( true ) {
        pFVar10 = local_110;
        if (*(int *)&(local_110->Values).field_0x8 - *(int *)&(local_110->Values).field_0x34 !=
            (int)uStack_e8) {
          local_1b7[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b7);
        }
        if (((TStack_108.CurrentBitIndex == uVar13) &&
            (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar10 == pFVar5)) break;
        local_168 = (void *)0x0;
        lVar17 = *(longlong *)&pFVar10->Values + (longlong)TStack_108.CurrentBitIndex * 0x28;
        local_160 = 0;
        if ((*(longlong *)(lVar17 + 0x10) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        cVar12 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x58))
                           (*(longlong **)(lVar17 + 0x10),&local_168);
        if (cVar12 != '\0') {
          local_a0 = &local_168;
          local_a8 = lVar17;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (pTVar9,(TPairInitializer<FString_const_&,FString_const_&> *)(local_150 + 0xc),
                     (bool *)&local_a8);
        }
        if (local_168 != (void *)0x0) {
          FMemory::Free(local_168);
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
    }
    else {
      if ((pTVar16->Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = pTVar16->Object;
      iVar14 = *(int *)&(pFVar5->Values).field_0x28;
      puVar1 = &(pFVar5->Values).field_0x10;
      uStack_1a4 = 1;
      iStack_194 = iVar22;
      local_190 = iVar22;
      if (iVar14 != 0) {
        puVar24 = *(uint **)&(pFVar5->Values).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar1;
        }
        uVar13 = *puVar24;
        local_190 = iVar20;
        iVar22 = iVar20;
        while (uVar13 == 0) {
          lVar17 = (longlong)iVar22;
          local_190 = local_190 + 0x20;
          iVar22 = iVar22 + 1;
          iStack_194 = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14e6474be;
          uVar13 = puVar24[lVar17 + 1];
        }
        uStack_1a4 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_158 = (int)lVar17;
        iStack_194 = local_190 + -1 + local_158;
        if (iVar14 < iStack_194) {
          iStack_194 = iVar14;
        }
      }
LAB_14e6474be:
      uVar13 = *(uint *)&(pFVar5->Values).field_0x28;
      uStack_18c = local_5c;
      uVar19 = uVar13 & 0xffffffe0;
      iStack_188 = *(int *)&(pFVar5->Values).field_0x8 - *(int *)&(pFVar5->Values).field_0x34;
      uStack_198 = 0xffffffff;
      TStack_138._padding_ = CONCAT44(uStack_1a4,iVar22);
      TStack_138.CurrentBitIndex = iStack_194;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar13 >> 5;
      TStack_138._28_4_ = local_5c;
      TStack_138.BaseBitIndex = local_190;
      uStack_118 = CONCAT44(uStack_184,iStack_188);
      local_1b0 = pFVar5;
      iStack_1a8 = iVar22;
      local_1a0 = puVar1;
      local_140 = pFVar5;
      TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar9 = local_180;
      uVar4 = *(uint *)&(pFVar5->Values).field_0x28;
      if (uVar13 != uVar4) {
        puVar23 = *(undefined1 **)&(pFVar5->Values).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
        while (uVar13 == 0) {
          lVar17 = (longlong)iVar20;
          uVar19 = uVar19 + 0x20;
          iVar20 = iVar20 + 1;
          uVar13 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14e6475c0;
          uVar13 = *(uint *)(puVar23 + lVar17 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_154 = (int)lVar17;
        uVar13 = local_154 + -1 + uVar19;
        if ((int)uVar4 < (int)uVar13) {
          uVar13 = uVar4;
        }
      }
LAB_14e6475c0:
      while( true ) {
        pFVar10 = local_140;
        if (*(int *)&(local_140->Values).field_0x8 - *(int *)&(local_140->Values).field_0x34 !=
            (int)uStack_118) {
          local_1b8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
        }
        if (((TStack_138.CurrentBitIndex == uVar13) &&
            (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar10 == pFVar5)) break;
        lVar17 = *(longlong *)&pFVar10->Values;
        pFVar2 = (FString *)(lVar17 + (longlong)TStack_138.CurrentBitIndex * 0x28);
        iVar14 = *(int *)(lVar17 + 8 + (longlong)TStack_138.CurrentBitIndex * 0x28);
        if (iVar14 == 0) {
          pwVar18 = L"";
          iVar14 = 0;
        }
        else {
          pwVar18 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
          iVar14 = iVar14 + -1;
        }
        uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar18);
        iVar14 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>(param_3,uVar19,pFVar2);
        if (iVar14 == -1) {
          local_178 = (void *)0x0;
          local_170 = 0;
          if ((pFVar2[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = pFVar2[1].Data.AllocatorInstance.Data;
          cVar12 = (**(code **)(*(longlong *)pFVar6 + 0x58))(pFVar6,&local_178);
          if (cVar12 != '\0') {
            local_b0 = &local_178;
            local_b8 = pFVar2;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                      (pTVar9,(TPairInitializer<FString_const_&,FString_const_&> *)local_150,
                       (bool *)&local_b8);
          }
          if (local_178 != (void *)0x0) {
            FMemory::Free(local_178);
          }
        }
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
    }
  }
  param_3->HashSize = 0;
  FVar7 = (param_3->Hash).SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_3->Elements);
  return;
}

// ReadBinChunk @ 14e6479d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
GLTF::`anonymous_namespace'::ReadBinChunk
          (FArchive *param_1,char *param_2,bool *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  uint local_res18 [2];
  
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x28))();
  uVar4 = uVar2 + 3 & 0xfffffffffffffffc;
  if (uVar2 != uVar4) {
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar4);
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  uVar2 = (ulonglong)local_res8[0];
  uVar5 = (-8 - uVar4) + lVar3;
  *param_3 = 7 < uVar5 - ((ulonglong)(local_res8[0] + 3) & 0xfffffffc);
  if (uVar2 <= uVar5) {
    if (local_res18[0] == *(uint *)param_2) {
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized(param_4,uVar2,Default);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(param_4->AllocatorInstance).Data,local_res8[0]);
      return true;
    }
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar2 + 8 + uVar4);
  }
  return false;
}

// RuntimeWarningSeverity @ 14e64a800

EMessageSeverity __cdecl GLTF::RuntimeWarningSeverity(void)

{
  return (EMessageSeverity)!GIsAutomationTesting;
}

// SetTextureMap @ 14e64b1f0

/* WARNING: Removing unreachable block (ram,0x00014e64b673) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __cdecl
GLTF::SetTextureMap(FJsonObject *param_1,wchar_t *param_2,wchar_t *param_3,
                   TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_4,FTextureMap *param_5,
                   TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *param_6
                   )

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar1;
  void *_Src;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  double dVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  TSharedPtr<FJsonValue,1> *pTVar13;
  TSharedPtr<FJsonObject,1> *pTVar14;
  wchar_t *pwVar15;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  ForAnyElementType local_338;
  undefined8 local_330;
  FString local_328;
  FString local_318;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_308;
  wchar_t *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FTextFormat local_1d8;
  FText local_1c8;
  FFormatArgumentValue local_1b8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FText local_88;
  TStringView<wchar_t> local_78;
  FText local_68;
  FTextFormat local_58 [3];
  
  fVar25 = __real_3f800000;
  uVar24 = 0;
  iVar11 = 0;
  iStack_2f0 = iVar11;
  local_2f8 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar12 = wcslen(param_2);
    iStack_2f0 = (int)sVar12;
  }
  local_198._12_4_ = uStack_2ec;
  local_198.Size = iStack_2f0;
  local_198.DataPtr = local_2f8;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_2f0,param_2);
  pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_198);
  if (pTVar13 == (TSharedPtr<FJsonValue,1> *)0x0) {
    return fVar25;
  }
  if (pTVar13->Object == (FJsonValue *)0x0) {
    return fVar25;
  }
  if (pTVar13->Object->Type != Object) {
    return fVar25;
  }
  iStack_2e0 = iVar11;
  local_2e8 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar12 = wcslen(param_2);
    iStack_2e0 = (int)sVar12;
  }
  local_188._12_4_ = uStack_2dc;
  local_188.Size = iStack_2e0;
  local_188.DataPtr = local_2e8;
  pTVar14 = FJsonObject::GetObjectField(param_1,&local_188);
  if ((pTVar14->Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    fVar25 = (float)(*pcVar4)();
    return fVar25;
  }
  pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)pTVar14->Object;
  uStack_2d0 = 5;
  local_2d8 = L"index";
  local_178._12_4_ = uStack_2cc;
  local_178.Size = 5;
  local_178.DataPtr = L"index";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"index");
  pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar9,&local_178);
  if (pTVar13 == (TSharedPtr<FJsonValue,1> *)0x0) {
    return fVar25;
  }
  if (pTVar13->Object == (FJsonValue *)0x0) {
    return fVar25;
  }
  if (pTVar13->Object->Type != Number) {
    return fVar25;
  }
  local_2c8 = L"index";
  uStack_2c0 = 5;
  local_168._12_4_ = uStack_2bc;
  local_168.Size = 5;
  local_168.DataPtr = L"index";
  dVar5 = FJsonObject::GetNumberField((FJsonObject *)pTVar1,&local_168);
  iVar10 = (int)dVar5;
  if (iVar10 < 0) {
    return fVar25;
  }
  if (param_4->ArrayNum <= iVar10) {
    return fVar25;
  }
  local_2b8 = L"texCoord";
  uStack_2b0 = 8;
  local_158._12_4_ = uStack_2ac;
  local_158.Size = 8;
  local_158.DataPtr = L"texCoord";
  param_5->TextureIndex = iVar10;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"texCoord");
  pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar9,&local_158);
  if (((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar13->Object != (FJsonValue *)0x0)) &&
     (pTVar13->Object->Type == Number)) {
    local_2a8 = L"texCoord";
    uStack_2a0 = 8;
    local_148._12_4_ = uStack_29c;
    local_148.Size = 8;
    local_148.DataPtr = L"texCoord";
    dVar5 = FJsonObject::GetNumberField((FJsonObject *)pTVar1,&local_148);
    iVar10 = (int)dVar5;
    if (-1 < (int)dVar5) goto LAB_14e64b40a;
  }
  iVar10 = iVar11;
LAB_14e64b40a:
  param_5->TexCoord = (uchar)iVar10;
  if (param_3 != (wchar_t *)0x0) {
    local_298 = param_3;
    sVar12 = wcslen(param_3);
    iStack_290 = (int)sVar12;
    local_138._12_4_ = uStack_28c;
    local_138.Size = iStack_290;
    local_138.DataPtr = local_298;
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_290,param_3);
    pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar9,&local_138);
    if (((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar13->Object != (FJsonValue *)0x0)) &&
       (pTVar13->Object->Type == Number)) {
      local_288 = param_3;
      sVar12 = wcslen(param_3);
      iStack_280 = (int)sVar12;
      local_128._12_4_ = uStack_27c;
      local_128.Size = iStack_280;
      local_128.DataPtr = local_288;
      dVar5 = FJsonObject::GetNumberField((FJsonObject *)pTVar1,&local_128);
      fVar25 = (float)dVar5;
    }
  }
  uStack_270 = 10;
  local_278 = L"extensions";
  local_118._12_4_ = uStack_26c;
  local_118.Size = 10;
  local_118.DataPtr = L"extensions";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"extensions");
  pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar9,&local_118);
  if (((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar13->Object != (FJsonValue *)0x0)) &&
     (pTVar13->Object->Type == Object)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&SupportedTextureInfoExtensions.AllocatorInstance,1,
                 &SupportedTextureInfoExtensions.ArrayMax);
      *(undefined4 *)SupportedTextureInfoExtensions.AllocatorInstance.Data = 0xb;
      atexit(`GLTF::SetTextureMap'::__l14::
             _dynamic_atexit_destructor_for__SupportedTextureInfoExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar21 = (ulonglong)(uint)SupportedTextureInfoExtensions.ArrayNum;
    local_338.Data = (FScriptContainerElement *)0x0;
    local_330 = 0;
    uVar23 = uVar24;
    FVar6.Data = local_318.Data.AllocatorInstance.Data;
    uVar7 = local_318.Data._8_8_;
    if (SupportedTextureInfoExtensions.ArrayNum != 0) {
      do {
        local_318.Data._8_8_ = uVar7;
        local_318.Data.AllocatorInstance.Data = FVar6.Data;
        uVar22 = (uint)uVar23;
        uVar9 = 0;
        if ((int)uVar22 < (int)uVar21) {
          uVar9 = ~uVar22 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          fVar25 = (float)(*pcVar4)();
          return fVar25;
        }
        pwVar15 = ToString(*(EExtension *)
                            (SupportedTextureInfoExtensions.AllocatorInstance.Data +
                            (longlong)(int)uVar22 * 4));
        ::FString::FString(&local_318,pwVar15);
        if (((local_338.Data <= (FScriptContainerElement *)&local_318) &&
            ((FScriptContainerElement *)&local_318 <
             local_338.Data + (longlong)local_330._4_4_ * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          fVar25 = (float)(*pcVar4)();
          return fVar25;
        }
        iVar11 = (int)local_330;
        if ((int)local_330 == local_330._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_338,(int *)((longlong)&local_330 + 4));
        }
        local_330 = CONCAT44(local_330._4_4_,iVar11 + 1);
        lVar20 = (longlong)iVar11;
        *(undefined8 *)(local_338.Data + lVar20 * 0x10) = 0;
        *(FScriptContainerElement **)(local_338.Data + lVar20 * 0x10) =
             local_318.Data.AllocatorInstance.Data;
        local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar6.Data = local_318.Data.AllocatorInstance.Data;
        *(int *)(local_338.Data + lVar20 * 0x10 + 8) = local_318.Data.ArrayNum;
        *(int *)(local_338.Data + lVar20 * 0x10 + 0xc) = local_318.Data.ArrayMax;
        local_318.Data.ArrayNum = 0;
        local_318.Data.ArrayMax = 0;
        uVar7 = local_318.Data._8_8_;
        local_318.Data.ArrayNum = 0;
        local_318.Data.ArrayMax = 0;
        local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar21 = (ulonglong)SupportedTextureInfoExtensions.ArrayNum;
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar21);
    }
    local_268 = L"extensions";
    uStack_260 = 10;
    local_108._12_4_ = uStack_25c;
    local_108.Size = 10;
    local_108.DataPtr = L"extensions";
    pTVar14 = FJsonObject::GetObjectField((FJsonObject *)pTVar1,&local_108);
    if ((pTVar14->Object == (FJsonObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      fVar25 = (float)(*pcVar4)();
      return fVar25;
    }
    pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)pTVar14->Object;
    uVar23 = uVar24;
    uVar21 = uVar24;
    if (0 < SupportedTextureInfoExtensions.ArrayNum) {
      do {
        uVar22 = (uint)uVar23;
        uVar9 = 0;
        if ((int)uVar22 < (int)local_330) {
          uVar9 = ~uVar22 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          fVar25 = (float)(*pcVar4)();
          return fVar25;
        }
        local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_328.Data.ArrayNum = *(int *)(local_338.Data + uVar24 + 8);
        lVar20 = (longlong)local_328.Data.ArrayNum;
        _Src = *(void **)(local_338.Data + uVar24);
        if (local_328.Data.ArrayNum == 0) {
          local_328.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_328,
                     local_328.Data.ArrayNum,&local_328.Data.ArrayMax);
          memcpy(local_328.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
        }
        iStack_250 = local_328.Data.ArrayNum + -1;
        if (local_328.Data.ArrayNum == 0) {
          iStack_250 = 0;
        }
        local_f8._12_4_ = uStack_24c;
        local_f8.Size = iStack_250;
        local_258 = local_328.Data.AllocatorInstance.Data;
        local_f8.DataPtr = (wchar_t *)local_328.Data.AllocatorInstance.Data;
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>
                          (iStack_250,(wchar_t *)local_328.Data.AllocatorInstance.Data);
        pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar9,&local_f8);
        if (((pTVar13 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar13->Object == (FJsonValue *)0x0))
           || (pTVar13->Object->Type != Object)) {
          pFVar17 = FText::FromString(&local_68,&local_328);
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_88,L"InterchangeGLTFMaterialUtilities",L"UnsupportedExtension"
                               ,L"Extension is not supported: {0}");
          pFVar19 = FTextFormat::FTextFormat(local_58,pFVar18,Default);
          local_1b8.Type = Text;
          FText::FText((FText *)&local_1b8.TextValue,pFVar17);
          if ((local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            fVar25 = (float)(*pcVar4)();
            return fVar25;
          }
          local_308.ArrayNum = 1;
          local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_308.AllocatorInstance,1,&local_308.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_308.AllocatorInstance.Data,&local_1b8,1);
          local_1d8.TextFormatData.Object = (pFVar19->TextFormatData).Object;
          local_1d8.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar19->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_1d8.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1d8.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_1c8,&local_1d8,&local_308);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
          if ((FFormatArgumentValue *)local_308.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_308.AllocatorInstance.Data);
          }
          if (local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar19->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar3 = (pFVar17->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          bVar8 = GIsAutomationTesting == false;
          iVar11 = param_6->ArrayNum;
          if (iVar11 == param_6->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_6->AllocatorInstance,&param_6->ArrayMax);
          }
          param_6->ArrayNum = iVar11 + 1;
          pFVar2 = (param_6->AllocatorInstance).Data;
          lVar20 = (longlong)iVar11 * 3 + 1;
          *(uint *)(pFVar2 + lVar20 * 8 + -8) = (uint)bVar8;
          FText::FText((FText *)(pFVar2 + lVar20 * 8),&local_1c8);
          if (local_1c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_248 = local_328.Data.AllocatorInstance.Data;
          iStack_240 = local_328.Data.ArrayNum + -1;
          if (local_328.Data.ArrayNum == 0) {
            iStack_240 = 0;
          }
          local_a8._12_4_ = uStack_23c;
          local_a8.Size = iStack_240;
          local_a8.DataPtr = (wchar_t *)local_328.Data.AllocatorInstance.Data;
          pTVar14 = FJsonObject::GetObjectField((FJsonObject *)pTVar1,&local_a8);
          if ((pTVar14->Object == (FJsonObject *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            fVar25 = (float)(*pcVar4)();
            return fVar25;
          }
          this = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)pTVar14->Object;
          uVar9 = 0;
          if ((int)uVar22 < SupportedTextureInfoExtensions.ArrayNum) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            fVar25 = (float)(*pcVar4)();
            return fVar25;
          }
          if (*(int *)(SupportedTextureInfoExtensions.AllocatorInstance.Data + uVar21 * 4) == 0xb) {
            local_238 = L"rotation";
            uStack_230 = 8;
            local_e8._12_4_ = uStack_22c;
            local_e8.Size = 8;
            param_5->bHasTextureTransform = true;
            (param_5->TextureTransform).Offset[0] = 0.0;
            (param_5->TextureTransform).Offset[1] = 0.0;
            (param_5->TextureTransform).Scale[0] = 1.0;
            (param_5->TextureTransform).Scale[1] = 1.0;
            local_e8.DataPtr = L"rotation";
            uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"rotation");
            pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this,uVar9,&local_e8);
            if (((pTVar13 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar13->Object == (FJsonValue *)0x0)) || (pTVar13->Object->Type != Number)) {
              fVar26 = 0.0;
            }
            else {
              local_228 = L"rotation";
              uStack_220 = 8;
              local_d8._12_4_ = uStack_21c;
              local_d8.Size = 8;
              local_d8.DataPtr = L"rotation";
              dVar5 = FJsonObject::GetNumberField((FJsonObject *)this,&local_d8);
              fVar26 = (float)dVar5;
            }
            uStack_210 = 6;
            local_218 = L"offset";
            local_c8._12_4_ = uStack_20c;
            local_c8.Size = 6;
            local_c8.DataPtr = L"offset";
            (param_5->TextureTransform).Rotation = fVar26;
            uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"offset");
            pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this,uVar9,&local_c8);
            if (((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar13->Object != (FJsonValue *)0x0)) && (pTVar13->Object->Type == Array)) {
              local_208 = L"offset";
              uStack_200 = 6;
              local_b8._12_4_ = uStack_1fc;
              local_b8.Size = 6;
              local_b8.DataPtr = L"offset";
              pTVar16 = FJsonObject::GetArrayField((FJsonObject *)this,&local_b8);
              if (1 < pTVar16->ArrayNum) {
                pFVar2 = (pTVar16->AllocatorInstance).Data;
                if ((*(longlong *)pFVar2 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  fVar25 = (float)(*pcVar4)();
                  return fVar25;
                }
                dVar5 = FJsonValue::AsNumber(*(FJsonValue **)pFVar2);
                (param_5->TextureTransform).Offset[0] = (float)dVar5;
                if ((pTVar16->ArrayNum < 2) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  fVar25 = (float)(*pcVar4)();
                  return fVar25;
                }
                pFVar2 = (pTVar16->AllocatorInstance).Data;
                if ((*(longlong *)(pFVar2 + 0x10) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  fVar25 = (float)(*pcVar4)();
                  return fVar25;
                }
                dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar2 + 0x10));
                (param_5->TextureTransform).Offset[1] = (float)dVar5;
              }
            }
            uStack_1f0 = 5;
            local_1f8 = L"scale";
            local_78._12_4_ = uStack_1ec;
            local_78.Size = 5;
            local_78.DataPtr = L"scale";
            uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"scale");
            pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(this,uVar9,&local_78);
            if (((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar13->Object != (FJsonValue *)0x0)) && (pTVar13->Object->Type == Array)) {
              local_1e8 = L"scale";
              uStack_1e0 = 5;
              local_98._12_4_ = uStack_1dc;
              local_98.Size = 5;
              local_98.DataPtr = L"scale";
              pTVar16 = FJsonObject::GetArrayField((FJsonObject *)this,&local_98);
              if (1 < pTVar16->ArrayNum) {
                pFVar2 = (pTVar16->AllocatorInstance).Data;
                if ((*(longlong *)pFVar2 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  fVar25 = (float)(*pcVar4)();
                  return fVar25;
                }
                dVar5 = FJsonValue::AsNumber(*(FJsonValue **)pFVar2);
                (param_5->TextureTransform).Scale[0] = (float)dVar5;
                if ((pTVar16->ArrayNum < 2) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  fVar25 = (float)(*pcVar4)();
                  return fVar25;
                }
                pFVar2 = (pTVar16->AllocatorInstance).Data;
                if ((*(longlong *)(pFVar2 + 0x10) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  fVar25 = (float)(*pcVar4)();
                  return fVar25;
                }
                dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar2 + 0x10));
                (param_5->TextureTransform).Scale[1] = (float)dVar5;
              }
            }
          }
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
        }
        uVar24 = uVar24 + 0x10;
        uVar23 = (ulonglong)(uVar22 + 1);
        uVar21 = uVar21 + 1;
      } while ((int)(uVar22 + 1) < SupportedTextureInfoExtensions.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_338.Data,(int)local_330);
    if (local_338.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data);
    }
  }
  return fVar25;
}

// ToString @ 14e65a260

FString * __cdecl GLTF::ToString(FString *__return_storage_ptr__,EMeshAttributeType *param_1)

{
  switch(*param_1) {
  case POSITION:
    ::FString::FString(__return_storage_ptr__,L"POSITION");
    return __return_storage_ptr__;
  case NORMAL:
    ::FString::FString(__return_storage_ptr__,L"NORMAL");
    return __return_storage_ptr__;
  case TANGENT:
    ::FString::FString(__return_storage_ptr__,L"TANGENT");
    return __return_storage_ptr__;
  case TEXCOORD_0:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_0");
    return __return_storage_ptr__;
  case TEXCOORD_1:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_1");
    return __return_storage_ptr__;
  case TEXCOORD_2:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_2");
    return __return_storage_ptr__;
  case TEXCOORD_3:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_3");
    return __return_storage_ptr__;
  case TEXCOORD_4:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_4");
    return __return_storage_ptr__;
  case TEXCOORD_5:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_5");
    return __return_storage_ptr__;
  case TEXCOORD_6:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_6");
    return __return_storage_ptr__;
  case TEXCOORD_7:
    ::FString::FString(__return_storage_ptr__,L"TEXCOORD_7");
    return __return_storage_ptr__;
  case COLOR_0:
    ::FString::FString(__return_storage_ptr__,L"COLOR_0");
    return __return_storage_ptr__;
  case JOINTS_0:
    ::FString::FString(__return_storage_ptr__,L"JOINTS_0");
    return __return_storage_ptr__;
  case WEIGHTS_0:
    ::FString::FString(__return_storage_ptr__,L"WEIGHTS_0");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
}

// ToString @ 14e65a430

wchar_t * __cdecl GLTF::ToString(EExtension param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case KHR_MaterialsPbrSpecularGlossiness:
    return L"KHR_materials_pbrSpecularGlossiness";
  case KHR_MaterialsUnlit:
    return L"KHR_materials_unlit";
  case KHR_MaterialsClearCoat:
    return L"KHR_materials_clearcoat";
  case KHR_MaterialsTransmission:
    return L"KHR_materials_transmission";
  case KHR_MaterialsSheen:
    return L"KHR_materials_sheen";
  case KHR_MaterialsVariants:
    return L"KHR_materials_variants";
  case KHR_MaterialsIOR:
    return L"KHR_materials_ior";
  case KHR_MaterialsSpecular:
    return L"KHR_materials_specular";
  case KHR_MaterialsEmissiveStrength:
    return L"KHR_materials_emissive_strength";
  case KHR_MaterialsIridescence:
    return L"KHR_materials_iridescence";
  case KHR_MaterialsAnisotropy:
    return L"KHR_materials_anisotropy";
  case KHR_TextureTransform:
    return L"KHR_texture_transform";
  case KHR_DracoMeshCompression:
    return L"KHR_draco_mesh_compression";
  case KHR_LightsPunctual:
    return L"KHR_lights_punctual";
  case KHR_Lights:
    return L"KHR_lights";
  case EXT_LightsIES:
    return L"EXT_lights_ies";
  case KHR_Blend:
    return L"KHR_blend";
  case MSFT_TextureDDS:
    return L"MSFT_texture_dds";
  case MSFT_PackingNormalRoughnessMetallic:
    return L"MSFT_packing_normalRoughnessMetallic";
  case MSFT_PackingOcclusionRoughnessMetallic:
    return L"MSFT_packing_occlusionRoughnessMetallic";
  case KHR_MeshQuantization:
    return L"KHR_mesh_quantization";
  case Count:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8573010569722854925>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAsset.cpp"
                       ,499,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"UnknwonExtension";
}

// WrapModeFromNumber @ 14e65d200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EWrap __cdecl GLTF::WrapModeFromNumber(ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  EWrap EVar3;
  ForAnyElementType FVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'
                           ::__l2::_thread_safe_static_guard_0__),
     `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::SafetyCheck
    .AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::SafetyCheck
    .ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,3,0,&`enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'
                        ::__l2::SafetyCheck.AllocatorInstance,3,
               &`enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2
                ::SafetyCheck.ArrayMax);
    FVar4 = `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
            SafetyCheck.AllocatorInstance;
    *(undefined8 *)
     `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
     SafetyCheck.AllocatorInstance.Data = 0x83700000812f;
    *(undefined4 *)(FVar4.Data + 8) = 0x2901;
    atexit(`GLTF::WrapModeFromNumber'::__l2::_dynamic_atexit_destructor_for__SafetyCheck__);
    _Init_thread_footer(&`enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar4.Data = `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
               SafetyCheck.AllocatorInstance.Data;
  do {
    if (FVar4.Data ==
        `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
        SafetyCheck.AllocatorInstance.Data +
        (longlong)
        `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
        SafetyCheck.ArrayNum * 4) {
LAB_14e65d26d:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8036928033329774418>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ConversionUtilities.h"
                         ,0xae,"SafetyCheck.Find(static_cast<FSampler::EWrap>(Num)) != INDEX_NONE");
      if (!bVar2) {
        return Repeat;
      }
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if (*(EWrap *)FVar4.Data == (uint)param_1) {
      if ((int)((longlong)FVar4.Data -
                (longlong)
                `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2
                ::SafetyCheck.AllocatorInstance.Data >> 2) != -1) {
        return (uint)param_1;
      }
      goto LAB_14e65d26d;
    }
    FVar4.Data = FVar4.Data + 4;
  } while( true );
}

// IMPLEMENT_MODULE_GLTFCore @ 14e65d390

void __cdecl IMPLEMENT_MODULE_GLTFCore(void)

{
  return;
}

// SupportedExtensions'' @ 1504677d0

void __cdecl `dynamic_atexit_destructor_for_'GLTF::FAsset::SupportedExtensions__(void)

{
  GLTF::FAsset::SupportedExtensions.HashSize = 0;
  if (GLTF::FAsset::SupportedExtensions.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GLTF::FAsset::SupportedExtensions.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<enum_GLTF::EExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_GLTF::EExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GLTF::FAsset::SupportedExtensions);
  return;
}

// SupportedModes'' @ 150467810

void __cdecl `dynamic_atexit_destructor_for_'GLTF::FPrimitive::SupportedModes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GLTF::FPrimitive::SupportedModes.AllocatorInstance.Data;
  if (GLTF::FPrimitive::SupportedModes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GLTF::FPrimitive::SupportedModes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467830

void __cdecl
`GLTF::FExtensionsHandler::SetupAccessorExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467870

void __cdecl
`GLTF::FExtensionsHandler::SetupAnimationExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 1504678b0

void __cdecl
`GLTF::FExtensionsHandler::SetupBufferExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 1504678f0

void __cdecl
`GLTF::FExtensionsHandler::SetupBufferViewExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467930

void __cdecl
`GLTF::FExtensionsHandler::SetupCameraExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467970

void __cdecl
`GLTF::FExtensionsHandler::SetupImageExtensions'::__l2::_dynamic_atexit_destructor_for__Extensions__
          (void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 1504679b0

void __cdecl
`GLTF::FExtensionsHandler::SetupLightExtensions'::__l2::_dynamic_atexit_destructor_for__Extensions__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Extensions.AllocatorInstance.Data;
  if (Extensions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 1504679d0

void __cdecl
`GLTF::FExtensionsHandler::SetupMaterialExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Extensions.AllocatorInstance.Data;
  if (Extensions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 1504679f0

void __cdecl
`GLTF::FExtensionsHandler::SetupMeshExtensions'::__l2::_dynamic_atexit_destructor_for__Extensions__
          (void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467a30

void __cdecl
`GLTF::FExtensionsHandler::SetupNodeExtensions'::__l2::_dynamic_atexit_destructor_for__Extensions__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Extensions.AllocatorInstance.Data;
  if (Extensions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467a50

void __cdecl
`GLTF::FExtensionsHandler::SetupPrimitiveExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Extensions.AllocatorInstance.Data;
  if (Extensions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467a70

void __cdecl
`GLTF::FExtensionsHandler::SetupSamplerExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467ab0

void __cdecl
`GLTF::FExtensionsHandler::SetupSceneExtensions'::__l2::_dynamic_atexit_destructor_for__Extensions__
          (void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467af0

void __cdecl
`GLTF::FExtensionsHandler::SetupSkinExtensions'::__l2::_dynamic_atexit_destructor_for__Extensions__
          (void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extensions'' @ 150467b30

void __cdecl
`GLTF::FExtensionsHandler::SetupTextureExtensions'::__l2::
_dynamic_atexit_destructor_for__Extensions__(void)

{
  DestructItems<FString,int>((FString *)Extensions.AllocatorInstance.Data,Extensions.ArrayNum);
  if (Extensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Extensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Image'' @ 150467b70

void __cdecl
`GLTF::`anonymous_namespace'::GetTexture'::__l2::_dynamic_atexit_destructor_for__Image__(void)

{
  if (`GLTF::GetTexture'::`2'::Image.UniqueId.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`GLTF::GetTexture'::`2'::Image.UniqueId.Data.AllocatorInstance.Data);
  }
  `GLTF::GetTexture'::`2'::Image.Extras._72_4_ = 0;
  if (`GLTF::GetTexture'::`2'::Image.Extras._64_8_ != 0) {
    FMemory::Free((void *)`GLTF::GetTexture'::`2'::Image.Extras._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`GLTF::GetTexture'::`2'::Image.Extras);
  if (`GLTF::GetTexture'::`2'::Image.FilePath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`GLTF::GetTexture'::`2'::Image.FilePath.Data.AllocatorInstance.Data);
  }
  if (`GLTF::GetTexture'::`2'::Image.URI.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`GLTF::GetTexture'::`2'::Image.URI.Data.AllocatorInstance.Data);
  }
  if (`GLTF::GetTexture'::`2'::Image.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`GLTF::GetTexture'::`2'::Image.Name.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'MaterialsExtensions'' @ 150467bf0

void __cdecl
GLTF::`anonymous_namespace'::_dynamic_atexit_destructor_for__MaterialsExtensions__(void)

{
  DestructItems<FString,int>
            ((FString *)MaterialsExtensions.AllocatorInstance.Data,MaterialsExtensions.ArrayNum);
  if (MaterialsExtensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(MaterialsExtensions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'None'' @ 150467c30

void __cdecl
`GLTF::`anonymous_namespace'::GetTexture'::__l2::_dynamic_atexit_destructor_for__None__(void)

{
  if (`GLTF::GetTexture'::`2'::None.UniqueId.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`GLTF::GetTexture'::`2'::None.UniqueId.Data.AllocatorInstance.Data);
  }
  `GLTF::GetTexture'::`2'::None.Extras._72_4_ = 0;
  if (`GLTF::GetTexture'::`2'::None.Extras._64_8_ != 0) {
    FMemory::Free((void *)`GLTF::GetTexture'::`2'::None.Extras._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`GLTF::GetTexture'::`2'::None.Extras);
  if (`GLTF::GetTexture'::`2'::None.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`GLTF::GetTexture'::`2'::None.Name.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SafetyCheck'' @ 150467c90

void __cdecl `GLTF::FilterFromNumber'::__l2::_dynamic_atexit_destructor_for__SafetyCheck__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
               SafetyCheck.AllocatorInstance.Data;
  if (`enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
      SafetyCheck.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`enum_GLTF::FSampler::EFilter___cdecl_GLTF::FilterFromNumber(unsigned_short)'::__l2::
      SafetyCheck.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SafetyCheck'' @ 150467cb0

void __cdecl
`GLTF::PrimitiveModeFromNumber'::__l2::_dynamic_atexit_destructor_for__SafetyCheck__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::
               __l2::SafetyCheck.AllocatorInstance.Data;
  if (`enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
      SafetyCheck.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
      SafetyCheck.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SafetyCheck'' @ 150467cd0

void __cdecl `GLTF::WrapModeFromNumber'::__l2::_dynamic_atexit_destructor_for__SafetyCheck__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
               SafetyCheck.AllocatorInstance.Data;
  if (`enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
      SafetyCheck.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`enum_GLTF::FSampler::EWrap___cdecl_GLTF::WrapModeFromNumber(unsigned_short)'::__l2::
      SafetyCheck.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SupportedTextureInfoExtensions'' @ 150467cf0

void __cdecl
`GLTF::SetTextureMap'::__l14::_dynamic_atexit_destructor_for__SupportedTextureInfoExtensions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SupportedTextureInfoExtensions.AllocatorInstance.Data;
  if (SupportedTextureInfoExtensions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SupportedTextureInfoExtensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

