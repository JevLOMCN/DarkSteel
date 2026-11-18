// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 38

// StaticClass @ 141f51cb0

UClass * __cdecl UScriptStruct::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UScriptStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"ScriptStruct",
               &Z_Registration_Info_UClass_UScriptStruct.InnerSingleton,
               StaticRegisterNativesUScriptStruct,0xc0,8,CLASS_Intrinsic,CASTCLASS_UScriptStruct,
               L"Engine",InternalConstructor<UScriptStruct>,
               InternalVTableHelperCtorCaller<UScriptStruct>,local_res10,UStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UScriptStruct.InnerSingleton;
}

// UScriptStruct @ 141f67d50

UScriptStruct * __thiscall UScriptStruct::UScriptStruct(UScriptStruct *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  return this;
}

// UScriptStruct @ 141f67dc0

UScriptStruct * __thiscall
UScriptStruct::UScriptStruct(UScriptStruct *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->StructFlags = STRUCT_NoFlags;
  this->bPrepareCppStructOpsCompleted = false;
  this->CppStructOps = (ICppStructOps *)0x0;
  return this;
}

// UScriptStruct @ 141f67e40

UScriptStruct * __thiscall
UScriptStruct::UScriptStruct
          (UScriptStruct *this,FObjectInitializer *param_1,UScriptStruct *param_2,
          ICppStructOps *param_3,EStructFlags param_4,ulong64 param_5,ulong64 param_6)

{
  if (param_3 != (ICppStructOps *)0x0) {
    param_6 = (ulong64)param_3->Alignment;
    param_5 = (ulong64)param_3->Size;
  }
  UStruct::UStruct((UStruct *)this,param_1,(UStruct *)param_2,param_5,param_6);
  this->bPrepareCppStructOpsCompleted = false;
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  this->CppStructOps = param_3;
  this->StructFlags = param_3 != (ICppStructOps *)0x0 | param_4;
  PrepareCppStructOps(this);
  return this;
}

// UScriptStruct @ 141f67ec0

UScriptStruct * __thiscall
UScriptStruct::UScriptStruct
          (UScriptStruct *this,EStaticConstructor param_1,int param_2,int param_3,
          EObjectFlags param_4)

{
  UStruct::UStruct((UStruct *)this,EC_StaticConstructor,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  this->StructFlags = STRUCT_NoFlags;
  this->bPrepareCppStructOpsCompleted = false;
  this->CppStructOps = (ICppStructOps *)0x0;
  return this;
}

// ~UScriptStruct @ 141f69160

void __thiscall UScriptStruct::~UScriptStruct(UScriptStruct *this)

{
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  UStruct::~UStruct((UStruct *)this);
  return;
}

// ClearScriptStruct @ 141f72550

void __thiscall UScriptStruct::ClearScriptStruct(UScriptStruct *this,void *param_1,int param_2)

{
  int iVar1;
  FStructOpsFakeVTable *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ICppStructOps *pIVar7;
  EStructOpsFakeVTableFlags EVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  void *pvVar13;
  int iVar14;
  uint local_res8;
  
  iVar14 = (int)*(short *)((longlong)&this->_padding_ + 4);
  local_res8 = 0;
  uVar11 = (int)this->_padding_ + -1 + iVar14 & -iVar14;
  pIVar7 = GetCppStructOps(this);
  if (pIVar7 != (ICppStructOps *)0x0) {
    if (0 < param_2) {
      uVar12 = (ulonglong)(uint)param_2;
      pvVar13 = param_1;
      do {
        pFVar2 = pIVar7->FakeVPtr;
        if ((pFVar2->Capabilities).HasDestructor) {
          if (((pFVar2->Flags & Destruct) == None) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!!(this->Flags & FuncFlag)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x660,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = 0;
          for (EVar8 = pFVar2->Flags & (ConstructForTests|Construct); EVar8 != None;
              EVar8 = EVar8 & EVar8 - Construct) {
            uVar9 = uVar9 + 1;
          }
          (**(code **)(&pFVar2[1].Flags + (ulonglong)uVar9 * 2))(pvVar13);
        }
        pFVar2 = pIVar7->FakeVPtr;
        if ((pFVar2->Capabilities).HasZeroConstructor) {
          memset(pvVar13,0,(longlong)(int)uVar11);
        }
        else {
          if (((pFVar2->Flags & Construct) == None) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!!(this->Flags & FuncFlag)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x660,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(pFVar2 + 1))(pvVar13);
        }
        pvVar13 = (void *)((longlong)pvVar13 + (longlong)(int)uVar11);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    local_res8 = pIVar7->Size;
    if ((uVar11 == local_res8) && ((uint)this->_padding_ == local_res8)) {
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stride == ClearedSize && PropertiesSize == ClearedSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0xf4a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((int)local_res8 < (int)this->_padding_) {
    plVar3 = (longlong *)this->_padding_;
    bVar5 = false;
    while ((plVar3 != (longlong *)0x0 && (!bVar5))) {
      iVar14 = (int)plVar3[6];
      if ((int)local_res8 <
          iVar14 * *(int *)((longlong)plVar3 + 0x34) + *(int *)((longlong)plVar3 + 0x44)) {
        bVar5 = false;
        if (0 < param_2) {
          uVar12 = (ulonglong)(uint)param_2;
          pvVar13 = param_1;
          do {
            iVar10 = 0;
            if (0 < iVar14) {
              do {
                if ((plVar3[7] & 0x1000000200U) == 0x1000000200) {
                  iVar1 = *(int *)((longlong)plVar3 + 0x34);
                  if (((iVar10 < 0) || (iVar14 <= iVar10)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if ((pvVar13 == (void *)0x0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ContainerPtr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2de,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  memset((void *)((longlong)pvVar13 +
                                 (longlong)*(int *)((longlong)plVar3 + 0x44) +
                                 (longlong)iVar10 * (longlong)*(int *)((longlong)plVar3 + 0x34)),0,
                         (longlong)iVar1);
                }
                else {
                  pcVar4 = *(code **)(*plVar3 + 0x130);
                  if (((iVar10 < 0) || (iVar14 <= iVar10)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if ((pvVar13 == (void *)0x0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ContainerPtr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2de,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  (*pcVar4)(plVar3,(longlong)pvVar13 +
                                   (longlong)*(int *)((longlong)plVar3 + 0x44) +
                                   (longlong)iVar10 * (longlong)*(int *)((longlong)plVar3 + 0x34));
                }
                iVar14 = (int)plVar3[6];
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar14);
            }
            pvVar13 = (void *)((longlong)pvVar13 + (longlong)(int)uVar11);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else {
        bVar5 = true;
      }
      plVar3 = (longlong *)plVar3[9];
    }
  }
  return;
}

// CompareScriptStruct @ 141f72fa0

bool __thiscall
UScriptStruct::CompareScriptStruct(UScriptStruct *this,void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  FStructOpsFakeVTable *pFVar3;
  code *pcVar4;
  FField *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  ICppStructOps *pIVar9;
  EStructOpsFakeVTableFlags EVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_res10 [8];
  TFieldIterator<FProperty> local_48;
  
  if ((param_1 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xe72,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (param_2 == (void *)0x0) {
LAB_141f73245:
    bVar6 = false;
  }
  else {
    if ((this->StructFlags & STRUCT_IdenticalNative) != STRUCT_NoFlags) {
      pIVar9 = GetCppStructOps(this);
      if ((pIVar9 == (ICppStructOps *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TheCppStructOps",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                             ,0xe7c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_res10[0] = 0;
      pFVar3 = pIVar9->FakeVPtr;
      if (((~(byte)(pFVar3->Flags >> 0xb) & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar11 = 0;
      for (EVar10 = pFVar3->Flags &
                    (Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                     PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|
                    Construct); EVar10 != None; EVar10 = EVar10 & EVar10 - Construct) {
        uVar11 = uVar11 + 1;
      }
      cVar8 = (**(code **)(&pFVar3[1].Flags + (ulonglong)uVar11 * 2))
                        (param_1,param_2,param_3,local_res10);
      if (cVar8 != '\0') {
        return (bool)local_res10[0];
      }
    }
    local_48.Field = (FField *)this->_padding_;
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)this;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar5 = local_48.Field;
    while (pFVar5 != (FField *)0x0) {
      iVar12 = 0;
      local_48.Field = pFVar5;
      if (0 < (int)pFVar5[1]._padding_) {
        do {
          pcVar4 = *(code **)(pFVar5->_padding_ + 0xb8);
          if (((iVar12 < 0) || ((int)pFVar5[1]._padding_ <= iVar12)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar1 = *(int *)((longlong)&pFVar5[1]._padding_ + 4);
          iVar2 = *(int *)((longlong)&pFVar5[1].Owner.Container + 4);
          if (((iVar12 < 0) || ((int)pFVar5[1]._padding_ <= iVar12)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          cVar8 = (*pcVar4)(pFVar5,(longlong)param_1 +
                                   (longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                                   (longlong)iVar12 *
                                   (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4),
                            (longlong)param_2 + (longlong)iVar2 + (longlong)iVar12 * (longlong)iVar1
                            ,param_3);
          if (cVar8 == '\0') goto LAB_141f73245;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)pFVar5[1]._padding_);
      }
      local_48.Field = pFVar5->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_48);
      pFVar5 = local_48.Field;
    }
    bVar6 = true;
  }
  return bVar6;
}

// CopyScriptStruct @ 141f76010

void __thiscall
UScriptStruct::CopyScriptStruct(UScriptStruct *this,void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FStructOpsFakeVTable *pFVar2;
  code *pcVar3;
  FField *pFVar4;
  bool bVar5;
  char cVar6;
  ICppStructOps *pIVar7;
  int iVar8;
  EStructOpsFakeVTableFlags EVar9;
  void *_Dst;
  uint uVar10;
  void *_Src;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  TFieldIterator<FProperty> local_58;
  
  if ((param_1 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xe95,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xe97,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (int)*(short *)((longlong)&this->_padding_ + 4);
  uVar12 = (int)this->_padding_ + -1 + iVar8 & ~(iVar8 - 1U);
  if ((this->StructFlags >> 0xc & 1) != 0) {
    if (((this->StructFlags >> 0xd & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(StructFlags & STRUCT_IsPlainOldData)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xe9d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar7 = GetCppStructOps(this);
    if ((pIVar7 == (ICppStructOps *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xe9f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((uVar12 != pIVar7->Size) || ((uint)this->_padding_ != uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stride == TheCppStructOps->GetSize() && PropertiesSize == Stride",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xea0,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = pIVar7->FakeVPtr;
    if ((pFVar2->Capabilities).HasCopy) {
      if (((~(byte)(pFVar2->Flags >> 10) & 1) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 0;
      for (EVar9 = pFVar2->Flags &
                   (GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                    PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|
                   Construct); EVar9 != None; EVar9 = EVar9 & EVar9 - Construct) {
        uVar10 = uVar10 + 1;
      }
      cVar6 = (**(code **)(&pFVar2[1].Flags + (ulonglong)uVar10 * 2))(param_1,param_2,param_3);
      if (cVar6 != '\0') {
        return;
      }
    }
  }
  if ((this->StructFlags & STRUCT_IsPlainOldData) == STRUCT_NoFlags) {
    local_58.Field = (FField *)this->_padding_;
    local_58.InterfaceIndex = -1;
    local_58.bIncludeSuper = true;
    local_58.bIncludeDeprecated = true;
    local_58.bIncludeInterface = false;
    local_58.Struct = (UStruct *)this;
    TFieldIterator<FProperty>::IterateToNext(&local_58);
    while (local_58.Field != (FField *)0x0) {
      if (0 < param_3) {
        uVar13 = (ulonglong)(uint)param_3;
        pvVar11 = param_1;
        do {
          pFVar4 = local_58.Field;
          if (((int)local_58.Field[1]._padding_ < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar1 = ((longlong)param_2 - (longlong)param_1) + (longlong)pvVar11;
          if ((lVar1 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Src = (void *)(*(int *)((longlong)&pFVar4[1].Owner.Container + 4) + lVar1);
          if (((int)pFVar4[1]._padding_ < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pvVar11 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (void *)((longlong)*(int *)((longlong)&pFVar4[1].Owner.Container + 4) +
                         (longlong)pvVar11);
          if (_Dst != _Src) {
            if ((*(uint *)&pFVar4[1].ClassPrivate >> 0x1e & 1) == 0) {
              (**(code **)(pFVar4->_padding_ + 0xf0))(pFVar4,_Dst,_Src,(int)pFVar4[1]._padding_);
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)*(int *)((longlong)&pFVar4[1]._padding_ + 4) *
                     (longlong)(int)pFVar4[1]._padding_);
            }
          }
          pvVar11 = (void *)((longlong)pvVar11 + (longlong)(int)uVar12);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      local_58.Field = (local_58.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_58);
    }
  }
  else {
    memcpy(param_1,param_2,(longlong)(int)(uVar12 * param_3));
  }
  return;
}

// DeferCppStructOps @ 141f788b0

void __cdecl UScriptStruct::DeferCppStructOps(FTopLevelAssetPath *param_1,ICppStructOps *param_2)

{
  ICppStructOps *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *this;
  TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*> *pTVar5;
  IReload *pIVar6;
  ICppStructOps *local_res10 [2];
  FTopLevelAssetPath *local_18;
  ICppStructOps **local_10;
  
  local_res10[0] = param_2;
  this = (TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
          *)GetDeferredCppStructOps();
  pTVar5 = TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
           ::Find(this,param_1);
  if ((pTVar5 != (TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*> *)0x0) &&
     (pIVar1 = *(ICppStructOps **)&pTVar5->field_0x10, pIVar1 != (ICppStructOps *)0x0)) {
    pIVar6 = GetActiveReloadInterface();
    if (pIVar6 == (IReload *)0x0) {
      if (pIVar1 == local_res10[0]) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExistingOps != InCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xc26,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ::operator_delete(pIVar1,0x10);
    }
    else {
      cVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,0);
      if (cVar4 == '\0') {
        ::operator_delete(local_res10[0],0x10);
        return;
      }
    }
  }
  local_10 = local_res10;
  local_18 = param_1;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FTopLevelAssetPath_const_&,UScriptStruct::ICppStructOps_*_const_&>_>
            (this,(TPairInitializer<FTopLevelAssetPath_const_&,UScriptStruct::ICppStructOps_*_const_&>
                   *)(local_res10 + 1),(bool *)&local_18);
  return;
}

// DestroyStruct @ 141f78cd0

void __thiscall UScriptStruct::DestroyStruct(UScriptStruct *this,void *param_1,int param_2)

{
  FStructOpsFakeVTable *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  EStructOpsFakeVTableFlags EVar6;
  ICppStructOps *pIVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  void *pvVar11;
  int iVar12;
  FString local_48;
  
  if ((this->StructFlags & (STRUCT_NoDestructor|STRUCT_IsPlainOldData)) == STRUCT_NoFlags) {
    iVar12 = (int)*(short *)((longlong)&this->_padding_ + 4);
    uVar10 = (int)this->_padding_ + -1 + iVar12 & -iVar12;
    uVar8 = 0;
    pIVar7 = GetCppStructOps(this);
    if (pIVar7 != (ICppStructOps *)0x0) {
      if (((pIVar7->FakeVPtr->Capabilities).HasDestructor) && (0 < param_2)) {
        uVar9 = (ulonglong)(uint)param_2;
        pvVar11 = param_1;
        do {
          pFVar1 = pIVar7->FakeVPtr;
          if (((pFVar1->Flags & Destruct) == None) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!!(this->Flags & FuncFlag)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x660,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = 0;
          for (EVar6 = pFVar1->Flags & (ConstructForTests|Construct); EVar6 != None;
              EVar6 = EVar6 & EVar6 - Construct) {
            uVar8 = uVar8 + 1;
          }
          (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar8 * 2))(pvVar11);
          pvVar11 = (void *)((longlong)pvVar11 + (longlong)(int)uVar10);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar8 = pIVar7->Size;
      if ((uVar10 == uVar8) && ((uint)this->_padding_ == uVar8)) {
        return;
      }
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stride == ClearedSize && PropertiesSize == ClearedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xf7c,
                         L"C++ and the property system struct size mismatch for %s (C++ Size: %d, Property Size: %d)"
                        );
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((int)uVar8 < (int)this->_padding_) {
      plVar2 = (longlong *)this->_padding_;
      bVar4 = false;
      while ((plVar2 != (longlong *)0x0 && (!bVar4))) {
        if ((int)uVar8 <
            *(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] + *(int *)((longlong)plVar2 + 0x44))
        {
          bVar4 = false;
          if (((plVar2[7] & 0x1000000000U) == 0) && (0 < param_2)) {
            uVar9 = (ulonglong)(uint)param_2;
            pvVar11 = param_1;
            do {
              if ((plVar2[7] & 0x1000000000U) == 0) {
                pcVar3 = *(code **)(*plVar2 + 0x138);
                if (((int)plVar2[6] < 1) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if ((pvVar11 == (void *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                (*pcVar3)(plVar2,(longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)pvVar11);
              }
              pvVar11 = (void *)((longlong)pvVar11 + (longlong)(int)uVar10);
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else {
          bVar4 = true;
        }
        plVar2 = (longlong *)plVar2[0xb];
      }
    }
  }
  return;
}

// ExportText @ 141f79de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UScriptStruct::ExportText
          (UScriptStruct *this,FString *param_1,void *param_2,void *param_3,UObject *param_4,
          int param_5,UObject *param_6,bool param_7)

{
  int iVar1;
  FStructOpsFakeVTable *pFVar2;
  longlong lVar3;
  FOverriddenPropertySet *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FField *this_01;
  ForAnyElementType FVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  EOverriddenPropertyOperation EVar11;
  ICppStructOps *pIVar12;
  FString *pFVar13;
  FPropertyVisitorPath *this_02;
  UEnum *pUVar14;
  EStructOpsFakeVTableFlags EVar15;
  uint uVar16;
  wchar_t *pwVar17;
  void *pvVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStackY_238 [32];
  int local_1f4;
  TFieldIterator<FProperty> local_1e8;
  FString local_1d0;
  FString local_1c0;
  void *local_1b0;
  void *local_1a8;
  UObject *local_1a0;
  UObject *local_198;
  FName local_190;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FArchiveSerializedPropertyChain local_130;
  FOverridableTextPortPropertyPathScope local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar6 = false;
  bVar5 = false;
  local_198 = param_4;
  local_1a0 = param_6;
  local_1a8 = param_2;
  if ((param_7) && ((this->StructFlags & STRUCT_ExportTextItemNative) != STRUCT_NoFlags)) {
    pIVar12 = GetCppStructOps(this);
    if ((pIVar12 == (ICppStructOps *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xdf4,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = pIVar12->FakeVPtr;
    if (((~(byte)(pFVar2->Flags >> 0xc) & 1) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar16 = 0;
    for (EVar15 = pFVar2->Flags &
                  (Identical|Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                   NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|
                   ConstructForTests|Construct); EVar15 != None;
        EVar15 = EVar15 & EVar15 - Construct) {
      uVar16 = uVar16 + 1;
    }
    cVar9 = (**(code **)(&pFVar2[1].Flags + (ulonglong)uVar16 * 2))(param_1,param_2,param_3,param_4)
    ;
    if (cVar9 != '\0') {
      return;
    }
  }
  local_1f4 = 0;
  if ((this->StructFlags & STRUCT_Atomic) == STRUCT_NoFlags) {
    param_2 = param_3;
  }
  local_1b0 = param_2;
  bVar8 = FOverridableSerializationLogic::HasCapabilities(T3DSerialization);
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
  ::FString::Reserve(&local_1d0,0x200);
  local_1e8.Field = (FField *)this->_padding_;
  local_1e8.InterfaceIndex = -1;
  local_1e8.bIncludeSuper = true;
  local_1e8.bIncludeDeprecated = true;
  local_1e8.bIncludeInterface = false;
  local_1e8.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_1e8);
  if ((FProperty *)local_1e8.Field != (FProperty *)0x0) {
    do {
      this_01 = local_1e8.Field;
      bVar10 = FProperty::ShouldPort((FProperty *)local_1e8.Field,param_5);
      if ((bVar10) && (iVar21 = 0, 0 < *(int *)((longlong)this_01 + 0x30))) {
        do {
          pvVar18 = (void *)0x0;
          iVar20 = *(int *)((longlong)this_01 + 0x30);
          iVar19 = -1;
          if (1 < iVar20) {
            iVar19 = iVar21;
          }
          FOverridableTextPortPropertyPathScope::FOverridableTextPortPropertyPathScope
                    (&local_d8,(FProperty *)this_01,iVar19,1 < iVar20);
          if (local_1b0 != (void *)0x0) {
            if (((iVar21 < 0) || (*(int *)((longlong)this_01 + 0x30) <= iVar21)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar18 = (void *)((longlong)local_1b0 +
                              (longlong)*(int *)((longlong)this_01 + 0x44) +
                              (longlong)*(int *)((longlong)this_01 + 0x34) * (longlong)iVar21);
          }
          if (((iVar21 < 0) || (*(int *)((longlong)this_01 + 0x30) <= iVar21)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((local_1a8 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FProperty::ExportText_Direct
                             ((FProperty *)this_01,&local_1d0,
                              (void *)((longlong)local_1a8 +
                                      (longlong)*(int *)((longlong)this_01 + 0x44) +
                                      (longlong)*(int *)((longlong)this_01 + 0x34) *
                                      (longlong)iVar21),pvVar18,local_198,param_5 | 1,local_1a0);
          if (bVar10) {
            local_1f4 = local_1f4 + 1;
            if (local_1f4 == 1) {
              ::FString::AppendChar(param_1,L'(');
            }
            else if ((param_5 & 0x2000000U) == 0) {
              ::FString::AppendChar(param_1,L',');
            }
            else {
              ::FString::AppendChars(param_1,L",\n",2);
            }
            if ((param_5 & 0x2000040U) == 0) {
              bVar5 = true;
              bVar10 = IsThisNotNull(this_01,"FField::GetName");
              if (bVar10) {
                ::FName::ToString(&this_01->NamePrivate,&local_180);
              }
              else {
                ::FString::FString(&local_180,L"None");
              }
              pFVar13 = &local_180;
            }
            else {
              bVar6 = true;
              pFVar13 = FField::GetAuthoredName(this_01,&local_140);
            }
            iVar1 = (pFVar13->Data).ArrayNum;
            iVar19 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar19 = 0;
            }
            ::FString::AppendChars(param_1,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar19)
            ;
            if ((bVar5) &&
               (bVar5 = false,
               local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
            if ((bVar6) &&
               (bVar6 = false,
               local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (1 < iVar20) {
              ::FString::PrintfImpl(&local_170,L"[%i]");
              if (local_170.Data.ArrayNum == 0) {
                iVar20 = 0;
              }
              else {
                iVar20 = local_170.Data.ArrayNum + -1;
              }
              ::FString::AppendChars
                        (param_1,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar20);
              if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_170.Data.AllocatorInstance.Data);
              }
            }
            if (bVar8) {
              lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              if (*(char *)(lVar3 + 0x9d48) == '\0') {
                __dyn_tls_on_demand_init();
              }
              this_00 = *(FOverriddenPropertySet **)(lVar3 + 0xca0);
              if (this_00 != (FOverriddenPropertySet *)0x0) {
                this_02 = FOverridableSerializationLogic::GetOverriddenPortTextPropertyPath();
                if ((this_02 == (FPropertyVisitorPath *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Path",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                        ,0xe2e,L"Expecting a path"), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FPropertyVisitorPath::ToSerializedPropertyChain(this_02,&local_130);
                EVar11 = FOverriddenPropertySet::GetOverriddenPropertyOperation
                                   (this_00,&local_130,(FProperty *)0x0);
                if (EVar11 != None) {
                  pUVar14 = StaticEnum<enum_EOverriddenPropertyOperation>();
                  if ((pUVar14 == (UEnum *)0x0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("EnumClass != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0xca4,L""), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  UEnum::GetNameByValue(pUVar14,(long64)&local_190);
                  ::FName::ToString(&local_190,&local_1c0);
                  pUVar14 = StaticEnum<enum_EOverriddenPropertyOperation>();
                  local_188 = (FName)pUVar14->_padding_;
                  ::FName::ToString(&local_188,&local_150);
                  if (local_150.Data.ArrayNum == 0) {
                    iVar20 = 0;
                  }
                  else {
                    iVar20 = local_150.Data.ArrayNum + -1;
                  }
                  ::FString::RemoveAt(&local_1c0,0,iVar20 + 2,No);
                  FVar7.Data = local_1c0.Data.AllocatorInstance.Data;
                  local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_1c0.Data.ArrayNum = 0;
                  local_1c0.Data.ArrayMax = 0;
                  if ((local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
                     (FMemory::Free(local_150.Data.AllocatorInstance.Data),
                     local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                  }
                  ::FString::PrintfImpl(&local_160,L"<%s>");
                  if (local_160.Data.ArrayNum == 0) {
                    iVar20 = 0;
                  }
                  else {
                    iVar20 = local_160.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (param_1,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar20);
                  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_160.Data.AllocatorInstance.Data);
                  }
                  if (FVar7.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar7.Data);
                  }
                }
                if (local_130.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
                    (ForElementType<FProperty_*>)0x0) {
                  FMemory::Free((void *)local_130.SerializedPropertyChain.AllocatorInstance.
                                        SecondaryData);
                }
              }
            }
            iVar20 = 0;
            ::FString::AppendChar(param_1,L'=');
            if (local_1d0.Data.ArrayNum != 0) {
              iVar20 = local_1d0.Data.ArrayNum + -1;
            }
            ::FString::AppendChars(param_1,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,iVar20);
          }
          ::FString::Reset(&local_1d0,0);
          FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8);
          iVar21 = iVar21 + 1;
        } while (iVar21 < *(int *)((longlong)this_01 + 0x30));
      }
      local_1e8.Field = this_01->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_1e8);
    } while ((FProperty *)local_1e8.Field != (FProperty *)0x0);
    if (0 < local_1f4) {
      pwVar17 = L")";
      iVar21 = 1;
      goto LAB_141f7a49e;
    }
  }
  pwVar17 = L"()";
  iVar21 = 2;
LAB_141f7a49e:
  ::FString::AppendChars(param_1,pwVar17,iVar21);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  return;
}

// FindInnerPropertyInstance @ 141f7c3b0

bool __thiscall
UScriptStruct::FindInnerPropertyInstance
          (UScriptStruct *this,FName param_1,void *param_2,FProperty **param_3,void **param_4)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EStructOpsFakeVTableFlags EVar5;
  ICppStructOps *pIVar6;
  uint uVar7;
  
  pIVar6 = GetCppStructOps(this);
  if ((pIVar6 == (ICppStructOps *)0x0) ||
     (pFVar1 = pIVar6->FakeVPtr, !(pFVar1->Capabilities).HasFindInnerPropertyInstance)) {
    uVar4 = 0;
  }
  else {
    if (((pFVar1->Flags & FindInnerPropertyInstance) == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar7 = 0;
    for (EVar5 = pFVar1->Flags &
                 (ImportTextItem|ExportTextItem|Identical|Copy|GetPreloadDependencies|
                  PostScriptConstruct|NetDeltaSerialize|NetSerialize|PostSerialize|SerializeSlot|
                  SerializeArchive|Destruct|ConstructForTests|Construct); EVar5 != None;
        EVar5 = EVar5 & EVar5 - Construct) {
      uVar7 = uVar7 + 1;
    }
    uVar4 = (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar7 * 2))(param_1,param_2,param_3,param_4);
  }
  return (bool)uVar4;
}

// GetCppStructOps @ 141f81710

ICppStructOps * __thiscall UScriptStruct::GetCppStructOps(UScriptStruct *this)

{
  code *pcVar1;
  bool bVar2;
  ICppStructOps *pIVar3;
  FString local_18;
  
  if (this->bPrepareCppStructOpsCompleted != false) {
    return this->CppStructOps;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bPrepareCppStructOpsCompleted",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                     ,0x8f6,
                     L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ICppStructOps *)(*pcVar1)();
    return pIVar3;
  }
  return this->CppStructOps;
}

// GetCustomGuid @ 141f817b0

FGuid * __thiscall UScriptStruct::GetCustomGuid(UScriptStruct *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetFlattenedStructPathName @ 141f81d40

FTopLevelAssetPath * __thiscall
UScriptStruct::GetFlattenedStructPathName
          (UScriptStruct *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  FName FVar1;
  FName FVar2;
  UPackage *pUVar3;
  
  FVar1 = (FName)this->_padding_;
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  FVar2 = (FName)pUVar3->_padding_;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  FTopLevelAssetPath::TrySetPath(__return_storage_ptr__,FVar2,FVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 141f85040

UClass * __cdecl UScriptStruct::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UScriptStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"ScriptStruct",
               &Z_Registration_Info_UClass_UScriptStruct.InnerSingleton,
               StaticRegisterNativesUScriptStruct,0xc0,8,CLASS_Intrinsic,CASTCLASS_UScriptStruct,
               L"Engine",InternalConstructor<UScriptStruct>,
               InternalVTableHelperCtorCaller<UScriptStruct>,local_res10,UStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UScriptStruct.InnerSingleton;
}

// GetStructCPPName @ 141f86d20

FString * __thiscall
UScriptStruct::GetStructCPPName(UScriptStruct *this,FString *__return_storage_ptr__,uint param_1)

{
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"F%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStructTypeHash @ 141f87670

uint __thiscall UScriptStruct::GetStructTypeHash(UScriptStruct *this,void *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EStructOpsFakeVTableFlags EVar5;
  ICppStructOps *pIVar6;
  
  pIVar6 = GetCppStructOps(this);
  pFVar1 = pIVar6->FakeVPtr;
  if (!(pFVar1->Capabilities).HasGetTypeHash) {
    return 0;
  }
  if (((pFVar1->Flags & GetStructTypeHash) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = 0;
  for (EVar5 = pFVar1->Flags &
               (StructuredSerializeFromMismatchedTag|SerializeFromMismatchedTag|
                AddStructReferencedObjects|FindInnerPropertyInstance|ImportTextItem|ExportTextItem|
                Identical|Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests
               |Construct); EVar5 != None; EVar5 = EVar5 & EVar5 - Construct) {
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f876e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar4 * 2))
                    (param_1,*(code **)(&pFVar1[1].Flags + (ulonglong)uVar4 * 2));
  return uVar4;
}

// ImportText @ 141f8c8d0

wchar_t * __thiscall
UScriptStruct::ImportText
          (UScriptStruct *this,wchar_t *param_1,void *param_2,UObject *param_3,int param_4,
          FOutputDevice *param_5,TFunctionRef<FString___cdecl(void)> *param_6,bool param_7)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ICppStructOps *pIVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  EStructOpsFakeVTableFlags EVar8;
  wchar_t *pwVar9;
  int iVar10;
  FOutputDevice *this_00;
  wchar_t *local_res10;
  void *local_res18;
  wchar_t *local_b8;
  TArray<FDefinedProperty,TSizedDefaultAllocator<32>_> local_b0;
  void *local_a0 [2];
  void *local_90 [2];
  void *local_80 [2];
  void *local_70 [2];
  void *local_60 [2];
  FOutputDevice local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  FOutputDevice::FOutputDevice(&local_50);
  local_50._padding_ = (longlong)&___7FOutputDeviceNull__6B_;
  this_00 = &local_50;
  if (param_5 != (FOutputDevice *)0x0) {
    this_00 = param_5;
  }
  pwVar6 = (wchar_t *)0x0;
  if ((param_7) && ((this->StructFlags & STRUCT_ImportTextItemNative) != STRUCT_NoFlags)) {
    pIVar5 = GetCppStructOps(this);
    if ((pIVar5 == (ICppStructOps *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xd99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar2)();
      return pwVar6;
    }
    pFVar1 = pIVar5->FakeVPtr;
    if (((pFVar1->Flags & ImportTextItem) == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar2)();
      return pwVar6;
    }
    pwVar9 = pwVar6;
    for (EVar8 = pFVar1->Flags &
                 (ExportTextItem|Identical|Copy|GetPreloadDependencies|PostScriptConstruct|
                  NetDeltaSerialize|NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|
                  Destruct|ConstructForTests|Construct); EVar8 != None;
        EVar8 = EVar8 & EVar8 - Construct) {
      pwVar9 = (wchar_t *)(ulonglong)((int)pwVar9 + 1);
    }
    cVar4 = (**(code **)(&pFVar1[1].Flags + (longlong)pwVar9 * 2))
                      (&local_res10,param_2,param_4,param_3,this_00);
    pwVar9 = local_res10;
    if (cVar4 != '\0') goto LAB_141f8ccce;
  }
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_b8 = local_res10 + 1;
  if (*local_res10 == L'(') {
    wVar7 = *local_b8;
    while (wVar7 != L')') {
      local_b8 = FProperty::ImportSingleProperty
                           (local_b8,local_res18,(UStruct *)this,param_3,param_4 | 1,this_00,
                            &local_b0);
      SkipWhitespace(&local_b8);
      wVar7 = *local_b8;
      pwVar9 = pwVar6;
      if (wVar7 != L'\0') {
        do {
          iVar10 = (int)pwVar9;
          if ((wVar7 == L'\r') || (wVar7 == L'\n')) break;
          if ((iVar10 < 1) && ((wVar7 == L')' || (wVar7 == L',')))) goto LAB_141f8cb5a;
          SkipWhitespace(&local_b8);
          wVar7 = *local_b8;
          if (wVar7 == L'\"') {
LAB_141f8cac0:
            local_b8 = local_b8 + 1;
            wVar7 = *local_b8;
            if (wVar7 == L'\0') goto LAB_141f8cae2;
            if (wVar7 != L'\"') goto code_r0x000141f8cad6;
            goto LAB_141f8cb3b;
          }
          if (wVar7 == L'(') {
            pwVar9 = (wchar_t *)(ulonglong)(iVar10 + 1);
          }
          else if ((wVar7 == L')') &&
                  (pwVar9 = (wchar_t *)(ulonglong)(iVar10 - 1U), (int)(iVar10 - 1U) < 0)) {
            (**(code **)param_6)(local_90,*(undefined8 *)&param_6->field_0x8);
            FOutputDevice::LogfImpl
                      (this_00,L"%sImportText (%s): Too many closing parenthesis in: %s");
            local_a0[0] = local_90[0];
            goto LAB_141f8ccb0;
          }
LAB_141f8cb3b:
          iVar10 = (int)pwVar9;
          local_b8 = local_b8 + 1;
          wVar7 = *local_b8;
        } while (wVar7 != L'\0');
        if (0 < iVar10) {
          (**(code **)param_6)(local_80,*(undefined8 *)&param_6->field_0x8);
          FOutputDevice::LogfImpl
                    (this_00,L"%sImportText(%s): Not enough closing parenthesis in: %s");
          local_a0[0] = local_80[0];
          goto LAB_141f8ccb0;
        }
      }
LAB_141f8cb5a:
      if (wVar7 == L',') {
        local_b8 = local_b8 + 1;
      }
      else if (wVar7 != L')') {
        (**(code **)param_6)(local_70,*(undefined8 *)&param_6->field_0x8);
        FOutputDevice::LogfImpl(this_00,L"%sImportText (%s): Missing closing parenthesis: %s");
        local_a0[0] = local_70[0];
        goto LAB_141f8ccb0;
      }
      SkipWhitespace(&local_b8);
      wVar7 = *local_b8;
    }
    pwVar6 = local_b8 + 1;
    local_b8 = pwVar6;
  }
  else {
    (**(code **)param_6)(local_60,*(undefined8 *)&param_6->field_0x8);
    FOutputDevice::LogfImpl(this_00,L"%sImportText (%s): Missing opening parenthesis: %s");
    local_a0[0] = local_60[0];
LAB_141f8ccb0:
    if (local_a0[0] != (void *)0x0) {
      FMemory::Free(local_a0[0]);
    }
  }
  pwVar9 = pwVar6;
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
LAB_141f8ccce:
  FOutputDevice::~FOutputDevice(&local_50);
  return pwVar9;
code_r0x000141f8cad6:
  if ((wVar7 == L'\n') || (wVar7 == L'\r')) {
LAB_141f8cae2:
    (**(code **)param_6)(local_a0,*(undefined8 *)&param_6->field_0x8);
    FOutputDevice::LogfImpl(this_00,L"%sImportText (%s): Bad quoted string at: %s");
    goto LAB_141f8ccb0;
  }
  goto LAB_141f8cac0;
}

// ImportText @ 141f8cd00

wchar_t * __thiscall
UScriptStruct::ImportText
          (UScriptStruct *this,wchar_t *param_1,void *param_2,UObject *param_3,int param_4,
          FOutputDevice *param_5,FString *param_6,bool param_7)

{
  wchar_t *pwVar1;
  code *local_18;
  FString **local_10;
  
  local_10 = &param_6;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UScriptStruct::ImportText'::__l2::<lambda_1>,FString>::Call;
  pwVar1 = ImportText(this,param_1,param_2,param_3,param_4,param_5,
                      (TFunctionRef<FString___cdecl(void)> *)&local_18,param_7);
  return pwVar1;
}

// InitializeDefaultValue @ 141f8dc10

void __thiscall UScriptStruct::InitializeDefaultValue(UScriptStruct *this,uchar *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141f8dc19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))(this,param_1,1);
  return;
}

// InitializeStruct @ 141f8e210

void __thiscall UScriptStruct::InitializeStruct(UScriptStruct *this,void *param_1,int param_2)

{
  FStructOpsFakeVTable *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  ICppStructOps *pIVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FString local_48;
  
  if ((param_1 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xec9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (int)*(short *)((longlong)&this->_padding_ + 4);
  uVar10 = (int)this->_padding_ + -1 + iVar8 & -iVar8;
  memset(param_1,0,(longlong)(int)(uVar10 * param_2));
  uVar11 = 0;
  pIVar7 = GetCppStructOps(this);
  if (pIVar7 != (ICppStructOps *)0x0) {
    if ((!(pIVar7->FakeVPtr->Capabilities).HasZeroConstructor) && (0 < param_2)) {
      pvVar9 = param_1;
      uVar12 = (ulonglong)(uint)param_2;
      do {
        if (((ulonglong)pvVar9 & (longlong)pIVar7->Alignment - 1U) != 0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsAligned(PropertyDest, TheCppStructOps->GetAlignment())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                             ,0xedc,
                             L"Destination address for property does not match requirement of %d byte alignment for %s"
                            );
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = pIVar7->FakeVPtr;
        if (((pFVar1->Flags & Construct) == None) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(pFVar1 + 1))(pvVar9);
        pvVar9 = (void *)((longlong)pvVar9 + (longlong)(int)uVar10);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar11 = pIVar7->Size;
    if ((uVar10 == uVar11) && ((uint)this->_padding_ == uVar11)) {
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stride == InitializedSize && PropertiesSize == InitializedSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0xee3,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)uVar11 < (int)this->_padding_) {
    plVar2 = (longlong *)this->_padding_;
    bVar5 = false;
    while ((plVar2 != (longlong *)0x0 && (!bVar5))) {
      if ((int)uVar11 <
          *(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] + *(int *)((longlong)plVar2 + 0x44)) {
        bVar5 = false;
        if (0 < param_2) {
          uVar12 = (ulonglong)(uint)param_2;
          pvVar9 = param_1;
          do {
            if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
              pcVar3 = *(code **)(*plVar2 + 0x150);
              if (((int)plVar2[6] < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((pvVar9 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              (*pcVar3)(plVar2);
            }
            else {
              lVar4 = plVar2[6];
              iVar8 = *(int *)((longlong)plVar2 + 0x34);
              if (((int)lVar4 < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((pvVar9 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              memset((void *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)pvVar9),0,
                     (longlong)(int)lVar4 * (longlong)iVar8);
            }
            pvVar9 = (void *)((longlong)pvVar9 + (longlong)(int)uVar10);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else {
        bVar5 = true;
      }
      plVar2 = (longlong *)plVar2[9];
    }
  }
  return;
}

// IsStructTrashed @ 141f90850

bool __thiscall UScriptStruct::IsStructTrashed(UScriptStruct *this)

{
  return (bool)((byte)(this->StructFlags >> 0x17) & 1);
}

// Link @ 141f90c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScriptStruct::Link(UScriptStruct *this,FArchive *param_1,bool param_2)

{
  longlong lVar1;
  ICppStructOps *pIVar2;
  FName local_res20;
  FString local_18;
  
  UStruct::Link((UStruct *)this,param_1,param_2);
  this->StructFlags = this->StructFlags & ~STRUCT_Trashed;
  pIVar2 = GetCppStructOps(this);
  if (pIVar2 == (ICppStructOps *)0x0) {
    this->StructFlags =
         this->StructFlags | (STRUCT_ZeroConstructor|STRUCT_NoDestructor|STRUCT_IsPlainOldData);
    for (lVar1 = this->_padding_; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
      if ((*(uint *)(lVar1 + 0x38) >> 9 & 1) == 0) {
        this->StructFlags = this->StructFlags & ~STRUCT_ZeroConstructor;
      }
      if ((*(ulonglong *)(lVar1 + 0x38) & 0x1000000000) == 0) {
        this->StructFlags = this->StructFlags & ~STRUCT_NoDestructor;
      }
      if ((*(uint *)(lVar1 + 0x38) >> 0x1e & 1) == 0) {
        this->StructFlags = this->StructFlags & ~STRUCT_IsPlainOldData;
      }
    }
    if (((this->StructFlags & STRUCT_IsPlainOldData) != STRUCT_NoFlags) &&
       (5 < (byte)LogClass._0_1_)) {
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (((this->StructFlags & STRUCT_NoDestructor) != STRUCT_NoFlags) && (5 < (byte)LogClass._0_1_))
    {
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (((this->StructFlags & STRUCT_ZeroConstructor) != STRUCT_NoFlags) &&
       (5 < (byte)LogClass._0_1_)) {
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PrepareCppStructOps @ 141f94a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScriptStruct::PrepareCppStructOps(UScriptStruct *this)

{
  undefined1 *puVar1;
  EStructFlags *pEVar2;
  FName FVar3;
  ICppStructOps *pIVar4;
  FStructOpsFakeVTable *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *this_00;
  UPackage *pUVar10;
  TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*> *pTVar11;
  uchar *_Dst;
  uchar *_Dst_00;
  void *_Dst_01;
  longlong lVar12;
  longlong lVar13;
  ulong64 uVar14;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FTopLevelAssetPath local_1d8;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (this->bPrepareCppStructOpsCompleted != false) {
    return;
  }
  lVar12 = 0;
  if (this->CppStructOps == (ICppStructOps *)0x0) {
    this_00 = (TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
               *)GetDeferredCppStructOps();
    FVar3 = (FName)this->_padding_;
    pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    local_1d8.PackageName.ComparisonIndex.Value = 0;
    local_1d8.PackageName.Number = 0;
    local_1d8.AssetName.ComparisonIndex.Value = 0;
    local_1d8.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_1d8,(FName)pUVar10->_padding_,FVar3);
    pTVar11 = TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
              ::Find(this_00,&local_1d8);
    if (pTVar11 == (TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*> *)0x0) {
      this->CppStructOps = (ICppStructOps *)0x0;
    }
    else {
      pIVar4 = *(ICppStructOps **)&pTVar11->field_0x10;
      this->CppStructOps = pIVar4;
      if (pIVar4 != (ICppStructOps *)0x0) {
        this->StructFlags = this->StructFlags | STRUCT_Native;
        if ((!(pIVar4->FakeVPtr->Capabilities).HasZeroConstructor) &&
           (bVar8 = IsReloadActive(), !bVar8)) {
          uVar14 = (ulong64)this->CppStructOps->Size;
          _Dst = FMemory::Malloc(uVar14,0);
          memset(_Dst,0,uVar14);
          ICppStructOps::Construct(this->CppStructOps,_Dst);
          _Dst_00 = FMemory::Malloc(uVar14,0);
          memset(_Dst_00,0xff,uVar14);
          ICppStructOps::Construct(this->CppStructOps,_Dst_00);
          iVar9 = memcmp(_Dst,_Dst_00,uVar14);
          if (iVar9 != 0) {
            FindConstructorUninitialized((UStruct *)this,_Dst,_Dst_00);
          }
          if ((this->CppStructOps->FakeVPtr->Capabilities).HasDestructor) {
            ICppStructOps::Destruct(this->CppStructOps,_Dst);
            ICppStructOps::Destruct(this->CppStructOps,_Dst_00);
          }
          FMemory::Free(_Dst);
          FMemory::Free(_Dst_00);
        }
        goto LAB_141f94b94;
      }
    }
    if ((this->StructFlags & STRUCT_Native) != STRUCT_NoFlags) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_158);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    if (this->bPrepareCppStructOpsCompleted == false) goto LAB_141f9546b;
    iVar9 = 0xc75;
  }
  else {
LAB_141f94b94:
    pEVar2 = &this->StructFlags;
    if (((*pEVar2 & STRUCT_ComputedFlags) != STRUCT_NoFlags) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(StructFlags & STRUCT_ComputedFlags)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xc96,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((bool)(this->CppStructOps->FakeVPtr->Capabilities).HasSerializer ||
        (bool)(this->CppStructOps->FakeVPtr->Capabilities).HasStructuredSerializer) {
      if (5 < (byte)LogClass._0_1_) {
        local_res10 = (FName)this->_padding_;
        ::FName::ToString(&local_res10,&local_148);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      *pEVar2 = *pEVar2 | STRUCT_SerializeNative;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasPostSerialize) {
      if (5 < (byte)LogClass._0_1_) {
        local_res18 = (FName)this->_padding_;
        ::FName::ToString(&local_res18,&local_138);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = *pEVar2 | STRUCT_PostSerializeNative;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasPostScriptConstruct) {
      if (5 < (byte)LogClass._0_1_) {
        local_res20 = (FName)this->_padding_;
        ::FName::ToString(&local_res20,&local_128);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_PostScriptConstruct;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasNetSerializer) {
      if (5 < (byte)LogClass._0_1_) {
        local_1c8 = (FName)this->_padding_;
        ::FName::ToString(&local_1c8,&local_118);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_NetSerializeNative;
      if ((this->CppStructOps->FakeVPtr->Capabilities).HasNetSharedSerialization) {
        if (5 < (byte)LogClass._0_1_) {
          local_1c0 = (FName)this->_padding_;
          ::FName::ToString(&local_1c0,&local_108);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Native_struct___15080cb10,
                     (FLogCategoryBase *)&LogClass);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        this->StructFlags = this->StructFlags | STRUCT_NetSharedSerialization;
      }
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasNetDeltaSerializer) {
      if (5 < (byte)LogClass._0_1_) {
        local_1b8 = (FName)this->_padding_;
        ::FName::ToString(&local_1b8,&local_f8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_NetDeltaSerializeNative;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).IsPlainOldData) {
      if (5 < (byte)LogClass._0_1_) {
        local_1b0 = (FName)this->_padding_;
        ::FName::ToString(&local_1b0,&local_e8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | (STRUCT_NoDestructor|STRUCT_IsPlainOldData);
    }
    else {
      if ((this->CppStructOps->FakeVPtr->Capabilities).HasCopy) {
        if (5 < (byte)LogClass._0_1_) {
          local_1a8 = (FName)this->_padding_;
          ::FName::ToString(&local_1a8,&local_d8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        this->StructFlags = this->StructFlags | STRUCT_CopyNative;
      }
      if (!(this->CppStructOps->FakeVPtr->Capabilities).HasDestructor) {
        if (5 < (byte)LogClass._0_1_) {
          local_1a0 = (FName)this->_padding_;
          ::FName::ToString(&local_1a0,&local_c8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        this->StructFlags = this->StructFlags | STRUCT_NoDestructor;
      }
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasZeroConstructor) {
      if (5 < (byte)LogClass._0_1_) {
        local_198 = (FName)this->_padding_;
        ::FName::ToString(&local_198,&local_b8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_ZeroConstructor;
    }
    pFVar5 = this->CppStructOps->FakeVPtr;
    if (((pFVar5->Capabilities).IsPlainOldData) && (!(pFVar5->Capabilities).HasZeroConstructor)) {
      iVar9 = this->CppStructOps->Size;
      uVar14 = (ulong64)iVar9;
      _Dst_01 = FMemory::Malloc(uVar14,0);
      memset(_Dst_01,0,uVar14);
      ICppStructOps::Construct(this->CppStructOps,_Dst_01);
      ICppStructOps::Construct(this->CppStructOps,_Dst_01);
      bVar8 = true;
      if (0 < iVar9) {
        do {
          if (!bVar8) break;
          lVar13 = lVar12 + 1;
          bVar7 = false;
          if (*(char *)(lVar12 + (longlong)_Dst_01) == '\0') {
            bVar7 = bVar8;
          }
          bVar8 = bVar7;
          lVar12 = lVar13;
        } while (lVar13 < (longlong)uVar14);
      }
      FMemory::Free(_Dst_01);
      if (bVar8) {
        if (5 < (byte)LogClass._0_1_) {
          local_190 = (FName)this->_padding_;
          ::FName::ToString(&local_190,&local_a8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        this->StructFlags = this->StructFlags | STRUCT_ZeroConstructor;
      }
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasIdentical) {
      if (5 < (byte)LogClass._0_1_) {
        local_188 = (FName)this->_padding_;
        ::FName::ToString(&local_188,&local_98);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_IdenticalNative;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasAddStructReferencedObjects) {
      if (5 < (byte)LogClass._0_1_) {
        local_180 = (FName)this->_padding_;
        ::FName::ToString(&local_180,&local_88);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_AddStructReferencedObjects;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasExportTextItem) {
      if (5 < (byte)LogClass._0_1_) {
        local_178 = (FName)this->_padding_;
        ::FName::ToString(&local_178,&local_78);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_ExportTextItemNative;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasImportTextItem) {
      if (5 < (byte)LogClass._0_1_) {
        local_170 = (FName)this->_padding_;
        ::FName::ToString(&local_170,&local_68);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_ImportTextItemNative;
    }
    if ((bool)(this->CppStructOps->FakeVPtr->Capabilities).HasSerializeFromMismatchedTag ||
        (bool)(this->CppStructOps->FakeVPtr->Capabilities).HasStructuredSerializeFromMismatchedTag)
    {
      if (5 < (byte)LogClass._0_1_) {
        local_168 = (FName)this->_padding_;
        ::FName::ToString(&local_168,&local_58);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_SerializeFromMismatchedTag;
    }
    if ((this->CppStructOps->FakeVPtr->Capabilities).HasVisitor) {
      if (5 < (byte)LogClass._0_1_) {
        local_160 = (FName)this->_padding_;
        ::FName::ToString(&local_160,&local_48);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      this->StructFlags = this->StructFlags | STRUCT_Visitor;
    }
    if (this->bPrepareCppStructOpsCompleted == false) goto LAB_141f9546b;
    iVar9 = 0xd0c;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bPrepareCppStructOpsCompleted",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                     ,iVar9,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_141f9546b:
  this->bPrepareCppStructOpsCompleted = true;
  return;
}

// RecursivelyPreload @ 141f958f0

void __thiscall UScriptStruct::RecursivelyPreload(UScriptStruct *this)

{
  return;
}

// RemoveAllDeferredCppStructOps @ 141f97b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UScriptStruct::RemoveAllDeferredCppStructOps(FName param_1)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  FName local_res8;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  local_res8 = param_1;
  if (5 < (byte)LogClass._0_1_) {
    ::FName::ToString(&local_res8,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  pTVar6 = (TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
            *)GetDeferredCppStructOps();
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,pTVar6);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar8 = local_78._28_4_;
  local_18 = pTVar6;
  if ((int)uVar8 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(FName *)((longlong)(int)uVar7 * 0x20 + *local_48) == local_res8) {
        pvVar1 = *(void **)((longlong)(int)uVar8 * 0x20 + 0x10 + *local_48);
        if ((pvVar1 == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExistingOps",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                               ,0xc54,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::operator_delete(pvVar1,0x10);
        TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar8);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar8 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// RemoveDeferredCppStructOps @ 141f98600

void __cdecl UScriptStruct::RemoveDeferredCppStructOps(FTopLevelAssetPath *param_1)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
  *this;
  longlong lVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  
  this = (TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
          *)GetDeferredCppStructOps();
  FVar1 = param_1->AssetName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->PackageName;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar6 = FVar2.Number + uVar6;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar9 +
                    (ulonglong)
                    (this->HashSize - 1U &
                    (uVar6 * 0x40 + FVar1.Number + uVar5 + -0x61c88647 + (uVar6 >> 2) ^ uVar6)) * 4)
    ;
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar7 = (longlong)iVar8 * 0x20;
        if ((*(FName *)(lVar7 + lVar3) == FVar2) && (*(FName *)(lVar7 + 8 + lVar3) == FVar1)) {
          if (iVar8 == -1) {
            return;
          }
          pvVar4 = *(void **)(lVar7 + 0x10 + lVar3);
          TSet<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(this,iVar8);
          ::operator_delete(pvVar4,0x10);
          return;
        }
        iVar8 = *(int *)(lVar7 + 0x18 + lVar3);
      } while (iVar8 != -1);
    }
  }
  return;
}

// ResolveVisitedPathInfo @ 141f9a430

void * __thiscall
UScriptStruct::ResolveVisitedPathInfo
          (UScriptStruct *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  FProperty *pFVar1;
  FStructOpsFakeVTable *pFVar2;
  code *pcVar3;
  bool bVar4;
  UStruct *pUVar5;
  void *pvVar6;
  void *pvVar7;
  EStructOpsFakeVTableFlags EVar8;
  int iVar9;
  
  pvVar6 = (void *)0x0;
  if ((param_2->ParentStructType == (UStruct *)0x0) ||
     (pUVar5 = FField::GetOwnerStruct((FField *)param_2->Property), pUVar5 == (UStruct *)0x0))
  goto LAB_141f9a526;
  iVar9 = (int)pUVar5->_padding_;
  if (((int)this->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar9 * 8) != &pUVar5->_padding_))
  goto LAB_141f9a526;
  pFVar1 = param_2->Property;
  if (param_2->PropertyInfo == StaticArrayIndex) {
    iVar9 = param_2->Index;
    if (-1 < iVar9) goto LAB_141f9a4a3;
LAB_141f9a4a9:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    iVar9 = 0;
LAB_141f9a4a3:
    if (pFVar1->ArrayDim <= iVar9) goto LAB_141f9a4a9;
  }
  if ((param_1 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  pvVar7 = (void *)((longlong)param_1 +
                   (longlong)pFVar1->Offset_Internal +
                   (longlong)pFVar1->ElementSize * (longlong)iVar9);
  if (pvVar7 != (void *)0x0) {
    return pvVar7;
  }
LAB_141f9a526:
  if ((this->StructFlags & STRUCT_Visitor) == STRUCT_NoFlags) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (((this->CppStructOps == (ICppStructOps *)0x0) ||
        (!(this->CppStructOps->FakeVPtr->Capabilities).HasVisitor)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CppStructOps && CppStructOps->HasVisitor()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xf28,
                           L"Expecting to have a visitor implementation when STRUCT_Visitor is set")
       , bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    pFVar2 = this->CppStructOps->FakeVPtr;
    if ((pFVar2->Capabilities).HasVisitor) {
      if (((pFVar2->Flags & ResolveVisitedPathInfo) == None) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar3)();
        return pvVar6;
      }
      for (EVar8 = pFVar2->Flags & 0xffffff; EVar8 != None; EVar8 = EVar8 & EVar8 - Construct) {
        pvVar6 = (void *)(ulonglong)((int)pvVar6 + 1);
      }
      pvVar6 = (void *)(**(code **)(&pFVar2[1].Flags + (longlong)pvVar6 * 2))(param_1,param_2);
    }
  }
  return pvVar6;
}

// Serialize @ 141f9dbc0

void __thiscall UScriptStruct::Serialize(UScriptStruct *this,FArchive *param_1)

{
  EStructFlags EVar1;
  longlong *plVar2;
  EStructFlags local_res8 [2];
  
  UStruct::Serialize((UStruct *)this,param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  EVar1 = this->StructFlags;
  local_res8[0] = EVar1 & ~STRUCT_ComputedFlags;
  if ((EStructFlags *)plVar2[1] < (EStructFlags *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(EStructFlags *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->bPrepareCppStructOpsCompleted = false;
    this->StructFlags = local_res8[0] & ~STRUCT_ComputedFlags;
    this->CppStructOps = (ICppStructOps *)0x0;
    (**(code **)(this->_padding_ + 0x368))(this);
    if (this->CppStructOps == (ICppStructOps *)0x0) {
      this->StructFlags = (EVar1 ^ this->StructFlags) & ~STRUCT_ComputedFlags ^ EVar1;
    }
  }
  return;
}

// Serialize @ 141f9dca0

void __thiscall UScriptStruct::Serialize(UScriptStruct *this,FStructuredArchiveRecord param_1)

{
  EStructFlags EVar1;
  longlong *plVar2;
  FArchive *this_00;
  EStructFlags local_res8 [2];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UStruct::Serialize((UStruct *)this,this_00);
  plVar2 = *(longlong **)&this_00->field_0x8;
  EVar1 = this->StructFlags;
  local_res8[0] = EVar1 & ~STRUCT_ComputedFlags;
  if ((EStructFlags *)plVar2[1] < (EStructFlags *)*plVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *(EStructFlags *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((this_00->field_0x28 & 1) != 0) {
    this->bPrepareCppStructOpsCompleted = false;
    this->StructFlags = local_res8[0] & ~STRUCT_ComputedFlags;
    this->CppStructOps = (ICppStructOps *)0x0;
    (**(code **)(this->_padding_ + 0x368))(this);
    if (this->CppStructOps == (ICppStructOps *)0x0) {
      this->StructFlags = (EVar1 ^ this->StructFlags) & ~STRUCT_ComputedFlags ^ EVar1;
    }
  }
  return;
}

// SerializeItem @ 141fa6310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UScriptStruct::SerializeItem(UScriptStruct *this,FArchive *param_1,void *param_2,void *param_3)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1d8 [40];
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  SerializeItem(this,*(FStructuredArchiveSlot *)FVar1,param_2,param_3);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return;
}

// SerializeItem @ 141fa6390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UScriptStruct::SerializeItem
          (UScriptStruct *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  FSlotBase FVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  FArchive *pFVar7;
  FArchive *pFVar8;
  ICppStructOps *pIVar9;
  undefined8 *puVar10;
  EStructOpsFakeVTableFlags EVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  EStructFlags EVar14;
  ulonglong uVar15;
  FSlotBase local_res10 [3];
  undefined1 auStackY_108 [32];
  byte local_d8 [8];
  void *local_d0;
  void *local_c8;
  code *local_b8;
  undefined **local_a8;
  FSlotBase *pFStack_a0;
  byte *local_98;
  undefined ***local_90;
  undefined **local_78;
  FSlotBase *pFStack_70;
  byte *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_d0 = param_3;
  local_c8 = param_2;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((((pFVar7->field_0x28 & 5) == 0) || ((pFVar7->field_0x28 & 0x20) != 0)) ||
     ((this->StructFlags & STRUCT_Immutable) != STRUCT_NoFlags)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  EVar14 = this->StructFlags & STRUCT_SerializeNative;
  if ((bVar6) || (EVar14 != STRUCT_NoFlags)) {
    (**(code **)(*(longlong *)pFVar7 + 0x1b0))(pFVar7,this);
  }
  uVar15 = 0;
  if (EVar14 != STRUCT_NoFlags) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
    local_d8[0] = pFVar8->field_0x2c & 1;
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
    pFVar8->field_0x2c = pFVar8->field_0x2c & 0xfe;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UScriptStruct::SerializeItem'::`8'::<lambda_1>,0,0>::
                _vftable_;
    pFStack_a0 = local_res10;
    local_98 = local_d8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,void>::Call;
    local_90 = (undefined ***)0x0;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UScriptStruct::SerializeItem'::`8'::<lambda_1>,0,0>::
                _vftable_;
    pFStack_70 = pFStack_a0;
    local_68 = local_98;
    pIVar9 = GetCppStructOps(this);
    if ((pIVar9 == (ICppStructOps *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xd4b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3.StructuredArchive = local_res10[0].StructuredArchive;
    pFVar1 = pIVar9->FakeVPtr;
    if ((pFVar1->Capabilities).HasStructuredSerializer) {
      if (((pFVar1->Flags & SerializeSlot) == None) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = uVar15;
      for (EVar11 = pFVar1->Flags & (SerializeArchive|Destruct|ConstructForTests|Construct);
          EVar11 != None; EVar11 = EVar11 & EVar11 - Construct) {
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
      cVar5 = (**(code **)(&pFVar1[1].Flags + uVar13 * 2))
                        (FVar3.StructuredArchive,param_2,this,local_d0);
    }
    else {
      pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
      pFVar1 = pIVar9->FakeVPtr;
      if (((pFVar1->Flags & SerializeArchive) == None) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = uVar15;
      for (EVar11 = pFVar1->Flags & (Destruct|ConstructForTests|Construct); EVar11 != None;
          EVar11 = EVar11 & EVar11 - Construct) {
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
      cVar5 = (**(code **)(&pFVar1[1].Flags + uVar13 * 2))(pFVar8,param_2,this,local_d0);
      if (cVar5 != '\0') {
        FStructuredArchiveSlot::IsFilled((FStructuredArchiveSlot *)local_res10);
      }
    }
    UE::Core::Private::Function::CheckCallable(local_b8);
    pcVar2 = local_b8;
    pppuVar12 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar12 = local_90;
    }
    puVar10 = (undefined8 *)(*(code *)(*pppuVar12)[1])();
    if (pcVar2 == UE::Core::Private::Function::
                  TFunctionRefCaller<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,void>::Call) {
      pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                         ((FSlotBase *)*puVar10);
      pFVar8->field_0x2c = pFVar8->field_0x2c ^ (pFVar8->field_0x2c ^ *(byte *)puVar10[1]) & 1;
    }
    else {
      (*pcVar2)(puVar10);
    }
    if (local_b8 != (code *)0x0) {
      pppuVar12 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar12 = local_90;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    param_2 = local_c8;
    param_3 = local_d0;
    if (cVar5 != '\0') goto LAB_141fa668a;
  }
  if (bVar6) {
    if (((((pFVar7->field_0x29 & 1) == 0) && (*(int *)&pFVar7->field_0x34 != 0)) &&
        ((this->StructFlags & STRUCT_Atomic) == STRUCT_NoFlags)) && ((pFVar7->field_0x2c & 1) == 0))
    {
      UStruct::SerializeBinEx
                ((UStruct *)this,(FStructuredArchiveSlot)local_res10[0].StructuredArchive,param_2,
                 param_3,(UStruct *)this);
    }
    else {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_res10[0].StructuredArchive,param_2);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_res10[0].StructuredArchive,param_2,this);
  }
LAB_141fa668a:
  if ((this->StructFlags & STRUCT_PostSerializeNative) != STRUCT_NoFlags) {
    pIVar9 = GetCppStructOps(this);
    if ((pIVar9 == (ICppStructOps *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xd84,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = pIVar9->FakeVPtr;
    if (((pFVar1->Flags & PostSerialize) == None) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    for (EVar11 = pFVar1->Flags &
                  (SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct);
        EVar11 != None; EVar11 = EVar11 & EVar11 - Construct) {
      uVar15 = (ulonglong)((int)uVar15 + 1);
    }
    (**(code **)(&pFVar1[1].Flags + uVar15 * 2))(pFVar7,param_2);
  }
  return;
}

// SetStructTrashed @ 141fab580

void __thiscall UScriptStruct::SetStructTrashed(UScriptStruct *this,bool param_1)

{
  EStructFlags EVar1;
  
  EVar1 = this->StructFlags | STRUCT_Trashed;
  if (!param_1) {
    EVar1 = this->StructFlags & ~STRUCT_Trashed;
  }
  this->StructFlags = EVar1;
  return;
}

// StaticRegisterNativesUScriptStruct @ 141fade30

void __cdecl UScriptStruct::StaticRegisterNativesUScriptStruct(void)

{
  return;
}

// UseBinarySerialization @ 141faffd0

bool __thiscall UScriptStruct::UseBinarySerialization(UScriptStruct *this,FArchive *param_1)

{
  if ((((param_1->field_0x28 & 5) != 0) && ((param_1->field_0x28 & 0x20) == 0)) &&
     ((this->StructFlags & STRUCT_Immutable) == STRUCT_NoFlags)) {
    return false;
  }
  return true;
}

// Visit @ 141fb03d0

EPropertyVisitorControlFlow __thiscall
UScriptStruct::Visit
          (UScriptStruct *this,FPropertyVisitorContext *param_1,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_2)

{
  EScope EVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FStructOpsFakeVTable *pFVar4;
  code *pcVar5;
  EPropertyVisitorControlFlow EVar6;
  bool bVar7;
  longlong lVar8;
  EStructOpsFakeVTableFlags EVar9;
  uint uVar10;
  FProperty *pFVar11;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)> local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  EVar1 = param_1->Scope;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  lVar8 = 0x78;
  if (EVar1 != ObjectRefs) {
    lVar8 = 0x70;
  }
  pFVar11 = *(FProperty **)((longlong)&this->_padding_ + lVar8);
  if (pFVar11 == (FProperty *)0x0) {
LAB_141fb046a:
    EVar6 = StepOver;
  }
  else {
    do {
      local_48._0_8_ = uVar2;
      local_48._8_8_ = uVar3;
      EVar6 = PropertyVisitorHelpers::VisitProperty((UStruct *)this,pFVar11,param_1,&local_48);
      if (EVar6 == Stop) {
        return Stop;
      }
      if (EVar6 == StepOut) goto LAB_141fb046a;
      lVar8 = 0x50;
      if (EVar1 != ObjectRefs) {
        lVar8 = 0x48;
      }
      pFVar11 = *(FProperty **)((longlong)&pFVar11->_padding_ + lVar8);
    } while (pFVar11 != (FProperty *)0x0);
  }
  if ((this->StructFlags & STRUCT_Visitor) != STRUCT_NoFlags) {
    if (((this->CppStructOps == (ICppStructOps *)0x0) ||
        (!(this->CppStructOps->FakeVPtr->Capabilities).HasVisitor)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CppStructOps && CppStructOps->HasVisitor()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xf19,
                           L"Expecting to have a visitor implementation when STRUCT_Visitor is set")
       , bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar6 = (*pcVar5)();
      return EVar6;
    }
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pFVar4 = this->CppStructOps->FakeVPtr;
    if ((pFVar4->Capabilities).HasVisitor) {
      if (((pFVar4->Flags & Visit) == None) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar6 = (*pcVar5)();
        return EVar6;
      }
      uVar10 = 0;
      for (EVar9 = pFVar4->Flags & 0x7fffff; EVar9 != None; EVar9 = EVar9 & EVar9 - Construct) {
        uVar10 = uVar10 + 1;
      }
      local_38 = uVar2;
      local_30 = uVar3;
      EVar6 = (**(code **)(&pFVar4[1].Flags + (ulonglong)uVar10 * 2))(param_1,&local_38);
    }
    else {
      EVar6 = StepOver;
    }
  }
  return EVar6;
}

