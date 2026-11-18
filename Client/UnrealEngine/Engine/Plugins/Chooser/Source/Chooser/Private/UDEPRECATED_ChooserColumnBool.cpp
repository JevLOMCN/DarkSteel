// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticClass @ 14a871b60

UClass * __cdecl UDEPRECATED_ChooserColumnBool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumnBool",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ChooserColumnBool,0x50,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserColumnBool>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserColumnBool>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.InnerSingleton;
}

// UDEPRECATED_ChooserColumnBool @ 14a87dcc0

UDEPRECATED_ChooserColumnBool * __thiscall
UDEPRECATED_ChooserColumnBool::UDEPRECATED_ChooserColumnBool
          (UDEPRECATED_ChooserColumnBool *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserColumn__;
  *(undefined8 *)&this->InputValue = 0;
  *(undefined8 *)&(this->InputValue).field_0x8 = 0;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// ~UDEPRECATED_ChooserColumnBool @ 14a87e810

void __thiscall
UDEPRECATED_ChooserColumnBool::~UDEPRECATED_ChooserColumnBool(UDEPRECATED_ChooserColumnBool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IChooserColumn__;
  pFVar1 = (this->RowValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChooserColumn__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14a8835c0

void __thiscall
UDEPRECATED_ChooserColumnBool::ConvertToInstancedStruct
          (UDEPRECATED_ChooserColumnBool *this,FInstancedStruct *param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  UPackage *pUVar13;
  char *pcVar14;
  undefined1 local_res8 [8];
  FScriptContainerElement local_38 [16];
  
  if (Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolColumn,(UObject *)pUVar13,L"BoolColumn");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton,(uchar *)0x0);
  puVar7 = param_1->StructMemory;
  pUVar8 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar7 == (uchar *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Memory != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                        ,0xd1,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (pUVar8 == (UScriptStruct *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Struct != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                        ,0xd2,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolColumn,(UObject *)pUVar13,L"BoolColumn");
    if (Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14a88369c;
  }
  else {
LAB_14a88369c:
    iVar5 = (int)(Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton)->_padding_;
    if (((int)pUVar8->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton)->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_14a8836e6;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                      ,0xd3,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14a8836e6:
  if ((this->_padding_ != 0) && (plVar9 = (longlong *)this->_padding_, plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9,puVar7 + 8);
  }
  pFVar1 = (ForAnyElementType *)(puVar7 + 0x18);
  iVar5 = *(int *)(puVar7 + 0x20);
  piVar2 = (int *)(puVar7 + 0x20);
  if (iVar5 < 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,-iVar5,pFVar1,piVar2,(int *)(puVar7 + 0x24));
    memset(pFVar1->Data + iVar12,0,(longlong)-iVar5);
  }
  else if (0 < iVar5) {
    *piVar2 = *piVar2 - iVar5;
  }
  uVar6 = (uint)this->_padding_;
  if (-1 < (int)uVar6) {
    piVar3 = (int *)(puVar7 + 0x24);
    if (*piVar3 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar6,pFVar1,*piVar2,piVar3);
    }
    pcVar14 = (char *)this->_padding_;
    iVar5 = (int)this->_padding_;
    pcVar4 = pcVar14 + iVar5;
    while( true ) {
      if ((int)this->_padding_ != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pcVar14 == pcVar4) break;
      local_38[0] = (FScriptContainerElement)(*pcVar14 != '\0');
      if ((pFVar1->Data <= local_38) && (local_38 < pFVar1->Data + *piVar3)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar12 = *piVar2;
      if (iVar12 == *piVar3) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,pFVar1,piVar3);
      }
      pcVar14 = pcVar14 + 1;
      *piVar2 = iVar12 + 1;
      pFVar1->Data[iVar12] = local_38[0];
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// GetPrivateStaticClass @ 14a88ad20

UClass * __cdecl UDEPRECATED_ChooserColumnBool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumnBool",
               &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ChooserColumnBool,0x50,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ChooserColumnBool>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ChooserColumnBool>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_ChooserColumnBool @ 14a88fe70

void __cdecl UDEPRECATED_ChooserColumnBool::StaticRegisterNativesUDEPRECATED_ChooserColumnBool(void)

{
  return;
}

// _getUObject @ 14a892d70

UObject * __thiscall UDEPRECATED_ChooserColumnBool::_getUObject(UDEPRECATED_ChooserColumnBool *this)

{
  return (UObject *)&this[-1]._padding_;
}

