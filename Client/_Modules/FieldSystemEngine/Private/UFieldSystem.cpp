// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 7

// StaticClass @ 146324700

UClass * __cdecl UFieldSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystem",
               &Z_Registration_Info_UClass_UFieldSystem.InnerSingleton,
               StaticRegisterNativesUFieldSystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldSystem>,InternalVTableHelperCtorCaller<UFieldSystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystem.InnerSingleton;
}

// UFieldSystem @ 14632abf0

UFieldSystem * __thiscall UFieldSystem::UFieldSystem(UFieldSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFieldSystem__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  return this;
}

// ~UFieldSystem @ 14632b720

void __thiscall UFieldSystem::~UFieldSystem(UFieldSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UFieldSystem__6B_;
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->Commands).AllocatorInstance.Data,
             (this->Commands).ArrayNum);
  pFVar1 = (this->Commands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14632fcc0

UClass * __cdecl UFieldSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystem",
               &Z_Registration_Info_UClass_UFieldSystem.InnerSingleton,
               StaticRegisterNativesUFieldSystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldSystem>,InternalVTableHelperCtorCaller<UFieldSystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystem.InnerSingleton;
}

// Serialize @ 146333820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UFieldSystem::Serialize(UFieldSystem *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FFieldSystemCommand *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FFieldSystemCommand *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_168 [32];
  uint local_118 [4];
  undefined1 local_108 [192];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (5 < iVar6) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_118[0] = (this->Commands).ArrayNum;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_118,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_118);
      }
    }
    else {
      local_118[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar9 = local_118[0];
    if ((param_1->field_0x28 & 1) != 0) {
      uVar10 = (ulonglong)local_118[0];
      pFVar8 = FFieldSystemCommand::FFieldSystemCommand((FFieldSystemCommand *)local_108);
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar10);
      }
      DestructItems<FFieldSystemCommand,int>
                ((FFieldSystemCommand *)(this->Commands).AllocatorInstance.Data,
                 (this->Commands).ArrayNum);
      piVar1 = &(this->Commands).ArrayMax;
      (this->Commands).ArrayNum = 0;
      if (*piVar1 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,uVar9,&(this->Commands).AllocatorInstance,0,piVar1);
      }
      if (0 < (int)uVar9) {
        do {
          pFVar3 = (FFieldSystemCommand *)(this->Commands).AllocatorInstance.Data;
          if (((pFVar3 <= pFVar8) && (pFVar8 < pFVar3 + *piVar1)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (this->Commands).ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8c8,&(this->Commands).AllocatorInstance,piVar1);
          }
          (this->Commands).ArrayNum = iVar6 + 1;
          FFieldSystemCommand::FFieldSystemCommand
                    ((FFieldSystemCommand *)
                     ((this->Commands).AllocatorInstance.Data + (longlong)iVar6 * 200),pFVar8);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      local_48 = 0;
      if ((void *)local_108._184_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._184_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_108 + 0x78);
      if ((FFieldNodeBase *)local_108._8_8_ != (FFieldNodeBase *)0x0) {
        (**(code **)*(longlong *)local_108._8_8_)(local_108._8_8_,1);
      }
    }
    uVar9 = 0;
    if (0 < (int)local_118[0]) {
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Commands).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FFieldSystemCommand::Serialize
                  ((FFieldSystemCommand *)
                   ((this->Commands).AllocatorInstance.Data + (longlong)(int)uVar9 * 200),param_1);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_118[0]);
    }
  }
  return;
}

// Serialize @ 146333af0

void __thiscall UFieldSystem::Serialize(UFieldSystem *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUFieldSystem @ 146334170

void __cdecl UFieldSystem::StaticRegisterNativesUFieldSystem(void)

{
  return;
}

