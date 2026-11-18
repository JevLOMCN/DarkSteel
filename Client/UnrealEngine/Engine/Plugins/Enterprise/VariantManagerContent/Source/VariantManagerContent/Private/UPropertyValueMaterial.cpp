// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 17

// StaticClass @ 14e2d0e10

UClass * __cdecl UPropertyValueMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueMaterial",
               &Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton,
               StaticRegisterNativesUPropertyValueMaterial,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueMaterial>,
               InternalVTableHelperCtorCaller<UPropertyValueMaterial>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton;
}

// UPropertyValueMaterial @ 14e2d49e0

UPropertyValueMaterial * __thiscall
UPropertyValueMaterial::UPropertyValueMaterial(UPropertyValueMaterial *this,FVTableHelper *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueMaterial__6B_;
  return this;
}

// UPropertyValueMaterial @ 14e2d4a10

UPropertyValueMaterial * __thiscall
UPropertyValueMaterial::UPropertyValueMaterial
          (UPropertyValueMaterial *this,FObjectInitializer *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueMaterial__6B_;
  return this;
}

// ~UPropertyValueMaterial @ 14e2d54f0

void __thiscall UPropertyValueMaterial::~UPropertyValueMaterial(UPropertyValueMaterial *this)

{
  *(undefined ***)this = &___7UPropertyValueMaterial__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  return;
}

// ApplyDataToResolvedObject @ 14e2d91d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyValueMaterial::ApplyDataToResolvedObject(UPropertyValueMaterial *this)

{
  uint uVar1;
  int iVar2;
  UVariantObjectBinding *this_00;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UObjectBase *pUVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar10;
  
  if ((this->field_0x130 != '\0') &&
     (cVar5 = (**(code **)(*(longlong *)this + 0x2b0))(this,0), cVar5 != '\0')) {
    this_00 = *(UVariantObjectBinding **)&this->field_0x20;
    if (this_00 != (UVariantObjectBinding *)0x0) {
      pUVar8 = UVariantObjectBinding::StaticClass();
      iVar2 = (int)pUVar8->_padding_;
      if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar8->_padding_)) &&
         (pUVar9 = (UObjectBase *)UVariantObjectBinding::GetObject(this_00),
         pUVar9 != (UObjectBase *)0x0)) {
        UObjectBase::AtomicallySetFlags(pUVar9,RF_Transactional);
      }
    }
    pUVar9 = *(UObjectBase **)&this->field_0x78;
    if (pUVar9 == (UObjectBase *)0x0) {
      if (1 < (byte)LogVariantContent._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        return;
      }
    }
    else {
      UObjectBase::AtomicallySetFlags(pUVar9,RF_Transactional);
      pTVar10 = UPropertyValue::GetRecordedData((UPropertyValue *)this);
      lVar3 = *(longlong *)(pTVar10->AllocatorInstance).Data;
      if (lVar3 != 0) {
        iVar2 = *(int *)&this->field_0xc0;
        if (0 < iVar2) {
          uVar1 = iVar2 - 1;
          uVar7 = 0;
          if ((int)uVar1 < iVar2) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(pUVar9->_padding_ + 0x6b8))
                    (pUVar9,*(undefined4 *)
                             (*(longlong *)&this->field_0xb8 + 0x10 + (longlong)(int)uVar1 * 0x28),
                     lVar3);
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &this->field_0x28);
        return;
      }
      if (1 < (byte)LogVariantContent._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      }
    }
  }
  return;
}

// ContainsProperty @ 14e2dab60

bool __thiscall
UPropertyValueMaterial::ContainsProperty(UPropertyValueMaterial *this,FProperty *param_1)

{
  FName FVar1;
  FField *pFVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res18;
  TFieldIterator<FArrayProperty> local_28;
  
  if (OverrideMaterialsProperty == (FProperty *)0x0) {
    pFVar4 = ::FName::FName(&local_res18,0x11,L"OverrideMaterials",FNAME_Add);
    FVar1 = *pFVar4;
    local_28.Struct = (UStruct *)Z_Construct_UClass_UMeshComponent_NoRegister();
    if (FVar1 != (FName)0x0) {
      if ((UClass *)local_28.Struct == (UClass *)0x0) {
        local_28.Field = (FField *)0x0;
      }
      else {
        local_28.Field = (FField *)((UClass *)local_28.Struct)->_padding_;
      }
      local_28.InterfaceIndex = -1;
      local_28.bIncludeSuper = true;
      local_28.bIncludeDeprecated = true;
      local_28.bIncludeInterface = false;
      TFieldIterator<FArrayProperty>::IterateToNext(&local_28);
      pFVar2 = local_28.Field;
      while (pFVar2 != (FField *)0x0) {
        local_28.Field = pFVar2;
        bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
        if (bVar3) {
          local_res18 = pFVar2->NamePrivate;
        }
        else {
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
        }
        if (local_res18 == FVar1) {
          if (pFVar2 != (FField *)0x0) {
            OverrideMaterialsProperty = (FProperty *)pFVar2[2].Next;
          }
          break;
        }
        local_28.Field = pFVar2->Next;
        TFieldIterator<FArrayProperty>::IterateToNext(&local_28);
        pFVar2 = local_28.Field;
      }
    }
    if (OverrideMaterialsProperty == (FProperty *)0x0) {
      return false;
    }
  }
  return param_1 == OverrideMaterialsProperty;
}

// GetDataFromResolvedObject @ 14e2dc630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValueMaterial::GetDataFromResolvedObject
          (UPropertyValueMaterial *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)this + 0x2f8))();
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (__return_storage_ptr__,iVar5,Default);
  bVar4 = UPropertyValue::HasValidResolve((UPropertyValue *)this);
  if (bVar4) {
    plVar2 = *(longlong **)&this->field_0x78;
    if (plVar2 == (longlong *)0x0) {
      if (1 < (byte)LogVariantContent._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      }
    }
    else {
      iVar1 = *(int *)&this->field_0xc0;
      if (0 < iVar1) {
        uVar7 = iVar1 - 1;
        uVar8 = 0;
        if ((int)uVar7 < iVar1) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
        local_res8 = (**(code **)(*plVar2 + 0x690))
                               (plVar2,*(undefined4 *)
                                        (*(longlong *)&this->field_0xb8 + 0x10 +
                                        (longlong)(int)uVar7 * 0x28));
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,&local_res8,(longlong)iVar5);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultValue @ 14e2dccc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValueMaterial::GetDefaultValue(UPropertyValueMaterial *this)

{
  uint uVar1;
  int iVar2;
  UVariantObjectBinding *this_00;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FName local_res8;
  undefined8 local_res10;
  FString local_58;
  void *local_48 [2];
  
  if ((*(int *)&this->field_0x168 == 0) &&
     (this_00 = *(UVariantObjectBinding **)&this->field_0x20,
     this_00 != (UVariantObjectBinding *)0x0)) {
    pUVar9 = UVariantObjectBinding::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
         &pUVar9->_padding_ &&
        (pUVar10 = UVariantObjectBinding::GetObject(this_00), pUVar10 != (UObject *)0x0)))) {
      iVar7 = (**(code **)(*(longlong *)this + 0x2f8))(this);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->field_0x160,iVar7,
                 Default);
      pUVar9 = *(UClass **)&pUVar10->field_0x10;
      pcVar3 = *(code **)(*(longlong *)this + 0x2b0);
      if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar9);
      }
      cVar5 = (*pcVar3)(this,(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr);
      if (((cVar5 != '\0') && (plVar4 = *(longlong **)&this->field_0x78, plVar4 != (longlong *)0x0))
         && (iVar2 = *(int *)&this->field_0xc0, 0 < iVar2)) {
        uVar1 = iVar2 - 1;
        uVar8 = 0;
        if ((int)uVar1 < iVar2) {
          uVar8 = ~uVar1 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        iVar2 = *(int *)(*(longlong *)&this->field_0xb8 + 0x10 + (longlong)(int)uVar1 * 0x28);
        lVar12 = (**(code **)(*plVar4 + 0x6a0))(plVar4,local_48);
        if ((iVar2 < 0) || (*(int *)(lVar12 + 8) <= iVar2)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
        if ((bVar6) && (2 < (byte)LogVariantContent._0_1_)) {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
          local_res8.Number = *(uint *)&pUVar10->field_0x1c;
          ::FName::ToString(&local_res8,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        local_res10 = (**(code **)(*plVar4 + 0x690))(plVar4,iVar2);
        memcpy(*(void **)&this->field_0x160,&local_res10,(longlong)iVar7);
      }
      *(undefined8 *)&this->field_0x68 = 0;
      *(undefined8 *)&this->field_0x70 = 0;
      *(undefined8 *)&this->field_0x78 = 0;
      *(undefined8 *)&this->field_0x88 = 0;
      (**(code **)(*(longlong *)this + 0x2b0))(this,0);
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->field_0x160;
}

// GetMaterial @ 14e2ddcc0

UMaterialInterface * __thiscall UPropertyValueMaterial::GetMaterial(UPropertyValueMaterial *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (this->field_0x130 == '\0') {
    return (UMaterialInterface *)0x0;
  }
  pTVar1 = UPropertyValue::GetRecordedData((UPropertyValue *)this);
  return *(UMaterialInterface **)(pTVar1->AllocatorInstance).Data;
}

// GetObjectPropertyObjectClass @ 14e2ddf70

UClass * __thiscall
UPropertyValueMaterial::GetObjectPropertyObjectClass(UPropertyValueMaterial *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UMaterialInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterface",
               &Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton,
               UMaterialInterface::StaticRegisterNativesUMaterialInterface,0xe8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInterface>,
               InternalVTableHelperCtorCaller<UMaterialInterface>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton;
}

// GetPrivateStaticClass @ 14e2de590

UClass * __cdecl UPropertyValueMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueMaterial",
               &Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton,
               StaticRegisterNativesUPropertyValueMaterial,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueMaterial>,
               InternalVTableHelperCtorCaller<UPropertyValueMaterial>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton;
}

// GetPropertyClass @ 14e2deb90

FFieldClass * __thiscall UPropertyValueMaterial::GetPropertyClass(UPropertyValueMaterial *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FObjectProperty",0x10000,
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FObjectProperty|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,FObjectProperty::Construct);
      atexit(`FObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// GetPropertyParentContainerClass @ 14e2deca0

UStruct * __thiscall
UPropertyValueMaterial::GetPropertyParentContainerClass(UPropertyValueMaterial *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMeshComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshComponent",
               &Z_Registration_Info_UClass_UMeshComponent.InnerSingleton,
               UMeshComponent::StaticRegisterNativesUMeshComponent,0x590,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshComponent>,InternalVTableHelperCtorCaller<UMeshComponent>,
               aFStackX_8,UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return (UStruct *)Z_Registration_Info_UClass_UMeshComponent.InnerSingleton;
}

// GetValueSizeInBytes @ 14e2e0080

int __thiscall UPropertyValueMaterial::GetValueSizeInBytes(UPropertyValueMaterial *this)

{
  return 8;
}

// Resolve @ 14e2e3400

bool __thiscall UPropertyValueMaterial::Resolve(UPropertyValueMaterial *this,UObject *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Src;
  FString *this_00;
  UVariantObjectBinding *this_01;
  void *pvVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UClass *pUVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  void *local_58 [2];
  FString local_48;
  undefined4 local_38;
  FString local_30;
  
  if (param_1 == (UObject *)0x0) {
    this_01 = *(UVariantObjectBinding **)&this->field_0x20;
    if (this_01 == (UVariantObjectBinding *)0x0) {
      return false;
    }
    pUVar11 = UVariantObjectBinding::StaticClass();
    iVar9 = (int)pUVar11->_padding_;
    if (*(int *)(this_01->_padding_ + 0x38) < iVar9) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_) {
      return false;
    }
    param_1 = UVariantObjectBinding::GetObject(this_01);
    if (param_1 == (UObject *)0x0) {
      return false;
    }
  }
  if (*(int *)&this->field_0xc0 == 0) {
    return false;
  }
  puVar2 = &this->field_0xb8;
  if ((*(int *)&this->field_0xc0 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar12 = (longlong)*(int *)&this->field_0xc0;
  lVar13 = *(longlong *)puVar2;
  local_48.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(lVar13 + lVar12 * 0x28 + -0x28);
  *(undefined8 *)(lVar13 + lVar12 * 0x28 + -0x28) = 0;
  local_48.Data.ArrayNum = *(int *)(lVar13 + lVar12 * 0x28 + -0x20);
  local_48.Data.ArrayMax = *(int *)(lVar13 + lVar12 * 0x28 + -0x1c);
  *(undefined8 *)(lVar13 + lVar12 * 0x28 + -0x20) = 0;
  local_38 = *(undefined4 *)(lVar13 + lVar12 * 0x28 + -0x18);
  local_30.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(lVar13 + lVar12 * 0x28 + -0x10);
  *(undefined8 *)(lVar13 + lVar12 * 0x28 + -0x10) = 0;
  local_30.Data.ArrayNum = *(int *)(lVar13 + lVar12 * 0x28 + -8);
  local_30.Data.ArrayMax = *(int *)(lVar13 + lVar12 * 0x28 + -4);
  *(undefined8 *)(lVar13 + lVar12 * 0x28 + -8) = 0;
  iVar9 = *(int *)&this->field_0xc0;
  _Src = (void *)(*(longlong *)puVar2 + (longlong)iVar9 * 0x28);
  pvVar3 = *(void **)(*(longlong *)puVar2 + (longlong)iVar9 * 0x28 + -0x10);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)((longlong)_Src + -0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)_Src + -0x28));
  }
  iVar9 = (*(int *)&this->field_0xc0 - (iVar9 + -1)) + -1;
  if (iVar9 != 0) {
    memmove((void *)((longlong)_Src + -0x28),_Src,(longlong)iVar9 * 0x28);
  }
  *(int *)&this->field_0xc0 = *(int *)&this->field_0xc0 + -1;
  puVar1 = &this->field_0xc4;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,(ForAnyElementType *)puVar2,*(int *)&this->field_0xc0,(int *)puVar1);
  *(UObject **)&this->field_0x80 = param_1;
  bVar6 = UPropertyValue::ResolvePropertiesRecursive
                    ((UPropertyValue *)this,*(UStruct **)&param_1->field_0x10,param_1,0);
  if (((*(FString **)puVar2 <= &local_48) &&
      (&local_48 < (FString *)((longlong)*(FString **)puVar2 + (longlong)*(int *)puVar1 * 0x28))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar9 = *(int *)&this->field_0xc0;
  if (iVar9 == *(int *)puVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(int *)&this->field_0xc0 = iVar9 + 1;
  this_00 = (FString *)(*(longlong *)puVar2 + (longlong)iVar9 * 0x28);
  ::FString::FString(this_00,&local_48);
  *(undefined4 *)&this_00[1].Data.AllocatorInstance.Data = local_38;
  ::FString::FString((FString *)&this_00[1].Data.ArrayNum,&local_30);
  if (((bVar6) && (plVar4 = *(longlong **)&this->field_0x78, plVar4 != (longlong *)0x0)) &&
     (0 < *(int *)&this->field_0xc0)) {
    uVar14 = *(int *)&this->field_0xc0 - 1;
    uVar10 = 0;
    if ((int)uVar14 < *(int *)&this->field_0xc0) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = *(int *)(*(longlong *)puVar2 + (longlong)(int)uVar14 * 0x28 + 0x10);
    lVar13 = (**(code **)(*plVar4 + 0x6a0))(plVar4,local_58);
    if ((iVar9 < 0) || (*(int *)(lVar13 + 8) <= iVar9)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (!bVar6) {
      *(undefined8 *)&this->field_0x88 = 0;
      bVar6 = true;
      *(undefined8 *)&this->field_0x68 = 0;
      *(undefined8 *)&this->field_0x90 = 0;
      goto LAB_14e2e3744;
    }
  }
  bVar6 = false;
LAB_14e2e3744:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// SetMaterial @ 14e2e6330

void __thiscall
UPropertyValueMaterial::SetMaterial(UPropertyValueMaterial *this,UMaterialInterface *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  UMaterialInterface *local_res10 [3];
  
  if ((param_1 != (UMaterialInterface *)0x0) &&
     (local_res10[0] = param_1, bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1), bVar2)
     ) {
    lVar1 = *(longlong *)this;
    uVar3 = (**(code **)(lVar1 + 0x2f8))(this);
    (**(code **)(lVar1 + 0x300))(this,local_res10,uVar3,0);
  }
  return;
}

// StaticRegisterNativesUPropertyValueMaterial @ 14e2e7090

void __cdecl UPropertyValueMaterial::StaticRegisterNativesUPropertyValueMaterial(void)

{
  return;
}

