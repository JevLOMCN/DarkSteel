// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// StaticClass @ 14a204ae0

UClass * __cdecl UControlRigShapeLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeLibrary",
               &Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton,
               StaticRegisterNativesUControlRigShapeLibrary,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigShapeLibrary>,
               InternalVTableHelperCtorCaller<UControlRigShapeLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton;
}

// UControlRigShapeLibrary @ 14a222c80

UControlRigShapeLibrary * __thiscall
UControlRigShapeLibrary::UControlRigShapeLibrary
          (UControlRigShapeLibrary *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UControlRigShapeLibrary__6B_;
  FControlRigShapeDefinition::FControlRigShapeDefinition(&this->DefaultShape);
  puVar1 = &(this->DefaultMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->XRayMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->MaterialColorParameter).ComparisonIndex = 0;
  (this->MaterialColorParameter).Number = 0;
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = 0;
  (this->Shapes).ArrayMax = 0;
  (this->NameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameList).ArrayNum = 0;
  (this->NameList).ArrayMax = 0;
  return this;
}

// UControlRigShapeLibrary @ 14a222d40

UControlRigShapeLibrary * __thiscall
UControlRigShapeLibrary::UControlRigShapeLibrary(UControlRigShapeLibrary *this)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UControlRigShapeLibrary__6B_;
  FControlRigShapeDefinition::FControlRigShapeDefinition(&this->DefaultShape);
  puVar1 = &(this->DefaultMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->XRayMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->XRayMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->MaterialColorParameter).ComparisonIndex = 0;
  (this->MaterialColorParameter).Number = 0;
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = 0;
  (this->Shapes).ArrayMax = 0;
  (this->NameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameList).ArrayNum = 0;
  (this->NameList).ArrayMax = 0;
  return this;
}

// ~UControlRigShapeLibrary @ 14a226cf0

void __thiscall UControlRigShapeLibrary::~UControlRigShapeLibrary(UControlRigShapeLibrary *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7UControlRigShapeLibrary__6B_;
  pFVar1 = (this->NameList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigShapeDefinition,int>
            ((FControlRigShapeDefinition *)(this->Shapes).AllocatorInstance.Data,
             (this->Shapes).ArrayNum);
  pFVar1 = (this->Shapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->XRayMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultShape).StaticMesh.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a267eb0

UClass * __cdecl UControlRigShapeLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeLibrary",
               &Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton,
               StaticRegisterNativesUControlRigShapeLibrary,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigShapeLibrary>,
               InternalVTableHelperCtorCaller<UControlRigShapeLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibrary.InnerSingleton;
}

// GetShapeByName @ 14a26a920

FControlRigShapeDefinition * __thiscall
UControlRigShapeLibrary::GetShapeByName(UControlRigShapeLibrary *this,FName *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FControlRigShapeDefinition *pFVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  UControlRigShapeLibrary *local_res8;
  UControlRigShapeLibrary *local_res10;
  UControlRigShapeLibrary *local_res20;
  
  if (*param_1 == (this->DefaultShape).ShapeName) {
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UControlRigShapeLibrary *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(this->DefaultShape).Library.WeakPtr,(FObjectPtr)&local_res8);
    return &this->DefaultShape;
  }
  uVar8 = 0;
  if (0 < (this->Shapes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < (this->Shapes).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FControlRigShapeDefinition *)(*pcVar2)();
        return pFVar5;
      }
      if (*(FName *)((this->Shapes).AllocatorInstance.Data + lVar6) == *param_1) {
        uVar4 = 0;
        if ((int)uVar8 < (this->Shapes).ArrayNum) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FControlRigShapeDefinition *)(*pcVar2)();
          return pFVar5;
        }
        pFVar1 = (this->Shapes).AllocatorInstance.Data;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(pFVar1 + (longlong)(int)uVar8 * 0xa0 + 0x90),
                   (FObjectPtr)&local_res10);
        uVar4 = 0;
        if ((int)uVar8 < (this->Shapes).ArrayNum) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FControlRigShapeDefinition *)(*pcVar2)();
          return pFVar5;
        }
        return (FControlRigShapeDefinition *)
               ((this->Shapes).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xa0);
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0xa0;
    } while ((int)uVar8 < (this->Shapes).ArrayNum);
  }
  if (param_2) {
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(this->DefaultShape).Library.WeakPtr,(FObjectPtr)&local_res20);
    pFVar5 = &this->DefaultShape;
  }
  else {
    pFVar5 = (FControlRigShapeDefinition *)0x0;
  }
  return pFVar5;
}

// GetShapeByName @ 14a26ab50

FControlRigShapeDefinition * __cdecl
UControlRigShapeLibrary::GetShapeByName
          (FName *param_1,
          TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3,bool param_4)

{
  TPersistentObjectPtr<FSoftObjectPath> *this;
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FControlRigShapeDefinition *pFVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FString *pFVar11;
  UControlRigShapeLibrary *this_00;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  int iVar14;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  FString local_80;
  FName local_70;
  FName local_68;
  FString local_60;
  undefined8 local_50;
  undefined8 local_48;
  
  ::FName::ToString(param_1,&local_80);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  ::FString::FString(&local_60,L".");
  bVar4 = ::FString::Split(&local_80,&local_60,&local_98,&local_a8);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar12.Data = local_a8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_70,(wchar_t *)FVar12.Data);
  }
  else {
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar12.Data = local_80.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_48 = 0;
    local_a8.Data.ArrayNum = local_80.Data.ArrayNum;
    if ((local_80.Data.ArrayNum == 0) && (local_a8.Data.ArrayMax == 0)) {
      local_70 = *param_1;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80.Data.ArrayNum,local_a8.Data.ArrayMax,(ForAnyElementType *)&local_a8,
                 local_80.Data.ArrayNum,&local_a8.Data.ArrayMax);
      if (local_80.Data.ArrayNum != 0) {
        memcpy(local_a8.Data.AllocatorInstance.Data,FVar12.Data,(longlong)local_80.Data.ArrayNum * 2
              );
      }
      local_70 = *param_1;
    }
  }
  iVar14 = 0;
  local_88 = local_70;
  do {
    uVar2 = param_2->ArrayNum;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      if ((param_2->ArrayNum <= (int)uVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FControlRigShapeDefinition *)(*pcVar3)();
        return pFVar8;
      }
      this = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((param_2->AllocatorInstance).Data + (ulonglong)uVar2 * 0x28);
      pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
      if (pUVar9 != (UObject *)0x0) {
        pUVar10 = StaticClass();
        iVar6 = (int)pUVar10->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar10->_padding_)) {
          pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
          if (pUVar9 == (UObject *)0x0) {
LAB_14a26ad6a:
            pUVar9 = (UObject *)0x0;
          }
          else {
            pUVar10 = StaticClass();
            iVar6 = (int)pUVar10->_padding_;
            if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar6) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
                &pUVar10->_padding_)) goto LAB_14a26ad6a;
          }
          local_68.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
          local_68.Number = *(uint *)&pUVar9->field_0x1c;
          ::FName::ToString(&local_68,&local_b8);
          pwVar13 = L"";
          if (local_b8.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = local_b8.Data.ArrayNum + -1;
            pwVar13 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
          }
          uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar13);
          iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                              *)param_3,uVar5,&local_b8);
          if ((((iVar6 != -1) && (lVar1 = *(longlong *)param_3 + (longlong)iVar6 * 0x28, lVar1 != 0)
               ) && (pFVar11 = (FString *)(lVar1 + 0x10), pFVar11 != (FString *)0x0)) &&
             (&local_b8 != pFVar11)) {
            iVar6 = *(int *)(lVar1 + 0x18);
            _Src = (pFVar11->Data).AllocatorInstance.Data;
            local_b8.Data.ArrayNum = iVar6;
            if (((iVar6 != 0) || (local_b8.Data.ArrayMax != 0)) &&
               (UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar6,local_b8.Data.ArrayMax,(ForAnyElementType *)&local_b8,iVar6,
                           &local_b8.Data.ArrayMax), iVar6 != 0)) {
              memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
            }
          }
          FVar12.Data = local_b8.Data.AllocatorInstance.Data;
          iVar6 = local_98.Data.ArrayNum;
          if (local_b8.Data.ArrayNum == local_98.Data.ArrayNum) {
            if (1 < local_b8.Data.ArrayNum) {
              iVar7 = wcscmp((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                             (wchar_t *)local_98.Data.AllocatorInstance.Data);
              bVar4 = iVar7 == 0;
              goto LAB_14a26ae55;
            }
LAB_14a26ae61:
            if ((iVar14 < 1) || ((uVar2 != 0 || (!param_4)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            this_00 = (UControlRigShapeLibrary *)TPersistentObjectPtr<FSoftObjectPath>::Get(this);
            if (this_00 == (UControlRigShapeLibrary *)0x0) {
LAB_14a26aeac:
              this_00 = (UControlRigShapeLibrary *)0x0;
            }
            else {
              pUVar10 = StaticClass();
              iVar6 = (int)pUVar10->_padding_;
              if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar6) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar6 * 8)
                  != &pUVar10->_padding_)) goto LAB_14a26aeac;
            }
            pFVar8 = GetShapeByName(this_00,&local_88,bVar4);
            FVar12.Data = local_b8.Data.AllocatorInstance.Data;
            if (pFVar8 != (FControlRigShapeDefinition *)0x0) {
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              goto LAB_14a26af14;
            }
          }
          else {
            bVar4 = local_98.Data.ArrayNum + local_b8.Data.ArrayNum == 1;
LAB_14a26ae55:
            if ((bVar4) || (iVar6 < 2)) goto LAB_14a26ae61;
          }
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
        }
      }
    }
    ::FString::Reset(&local_98,0);
    iVar14 = iVar14 + 1;
    if (1 < iVar14) {
      pFVar8 = (FControlRigShapeDefinition *)0x0;
LAB_14a26af14:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      return pFVar8;
    }
  } while( true );
}

// GetShapeName @ 14a26b540

FString * __cdecl
UControlRigShapeLibrary::GetShapeName
          (FString *__return_storage_ptr__,UControlRigShapeLibrary *param_1,bool param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3,FControlRigShapeDefinition *param_4)

{
  longlong lVar1;
  void *_Src;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FString *pFVar7;
  bool bVar8;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar6.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res8.Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(&local_res8,&local_68);
  iVar4 = local_68.Data.ArrayNum + -1;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)param_3,uVar3,&local_68);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)param_3 + (longlong)iVar4 * 0x28;
    pFVar5 = (FScriptContainerElement *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar5 = FVar6.Data;
    }
    if ((pFVar5 != (FScriptContainerElement *)0x0) &&
       ((FScriptContainerElement *)&local_68 != pFVar5)) {
      iVar4 = *(int *)(pFVar5 + 8);
      _Src = *(void **)pFVar5;
      local_68.Data.ArrayNum = iVar4;
      if ((iVar4 == 0) && (local_68.Data.ArrayMax == 0)) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,local_68.Data.ArrayMax,(ForAnyElementType *)&local_68,iVar4,
                   &local_68.Data.ArrayMax);
        if (iVar4 != 0) {
          memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
        }
      }
    }
  }
  bVar8 = !param_2;
  if (bVar8) {
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar7 = &local_48;
  }
  else {
    ::FString::ConcatFC(&local_38,&local_68,L".");
    pFVar7 = &local_38;
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_58.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = FVar6.Data;
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::ToString(&param_4->ShapeName,&local_38);
  ::FString::ConcatFF(__return_storage_ptr__,&local_58,pFVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUpdatedNameList @ 14a26cda0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigShapeLibrary::GetUpdatedNameList
          (UControlRigShapeLibrary *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FName FVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res18 [16];
  
  if (param_1) {
    (this->NameList).ArrayNum = 0;
    if ((this->NameList).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->NameList).AllocatorInstance,0,&(this->NameList).ArrayMax);
    }
  }
  pTVar8 = &this->NameList;
  if ((this->NameList).ArrayNum != (this->Shapes).ArrayNum) {
    piVar1 = &(this->NameList).ArrayMax;
    (this->NameList).ArrayNum = 0;
    if ((this->NameList).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar8->AllocatorInstance,0,piVar1);
    }
    iVar2 = (this->Shapes).ArrayNum;
    pFVar10 = (FName *)(this->Shapes).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar2 * 0x14;
    while( true ) {
      if ((this->Shapes).ArrayNum != iVar2) {
        local_res18[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FControlRigShapeDefinition,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      pFVar3 = (FName *)(pTVar8->AllocatorInstance).Data;
      if (pFVar10 == pFVar9) break;
      if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + *piVar1)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
      }
      iVar7 = (this->NameList).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->NameList).ArrayNum = iVar7 + 1;
      FVar4 = *pFVar10;
      pFVar10 = pFVar10 + 0x14;
      *(FName *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 8) = FVar4;
    }
    AlgoImpl::
    IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
              (pFVar3,(this->NameList).ArrayNum,local_res18[0],(FNameLexicalLess *)local_res8);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->NameList).ArrayNum;
  _Src = (pTVar8->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUControlRigShapeLibrary @ 14a298060

void __cdecl UControlRigShapeLibrary::StaticRegisterNativesUControlRigShapeLibrary(void)

{
  return;
}

