// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Add @ 146634580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::Add
          (FObjectPropertyRegistration *this,UClass *param_1,FName param_2,
          _func___cdecl_FObjectComponent_UObject_ptr_FObjectMetadata *param_3,
          _func___cdecl_void_UObject_ptr_FObjectMetadata_FObjectComponent_ptr *param_4,
          FMetaData *param_5)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  UClass **local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  int local_58;
  undefined1 local_54 [4];
  int *local_50;
  FMetaData *local_48;
  UClass *local_40;
  FName FStack_38;
  undefined2 local_30;
  undefined6 uStack_2e;
  _func___cdecl_FObjectComponent_UObject_ptr_FObjectMetadata *p_Stack_28;
  _func___cdecl_void_UObject_ptr_FObjectMetadata_FObjectComponent_ptr *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  plVar1 = &this->_padding_;
  local_58 = (int)this->_padding_;
  local_30 = 0xffff;
  plVar7 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  local_20 = param_4;
  local_40 = param_1;
  FStack_38 = param_2;
  p_Stack_28 = param_3;
  if ((plVar7 <= &local_40) &&
     (lVar6 = (longlong)*(int *)((longlong)&this->_padding_ + 4), &local_40 < plVar7 + lVar6 * 5)) {
    local_68 = 0x28;
    local_88 = &local_40;
    local_80 = plVar7;
    local_78 = lVar6;
    local_70 = (longlong)local_58;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>_>
                      (0x828,(ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>
                              *)plVar1,piVar2);
  }
  lVar6 = (longlong)iVar5;
  *(int *)&this->_padding_ = iVar5 + 1;
  plVar7 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  local_50 = &local_58;
  local_48 = param_5;
  plVar7[lVar6 * 5] = (longlong)local_40;
  *(FName *)(plVar7 + lVar6 * 5 + 1) = FStack_38;
  plVar7[lVar6 * 5 + 2] = CONCAT62(uStack_2e,local_30);
  (plVar7 + lVar6 * 5 + 2)[1] = (longlong)p_Stack_28;
  plVar7[lVar6 * 5 + 4] = (longlong)local_20;
  TSet<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData_const_&>_>
            ((TSet<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData,0>,FDefaultSetAllocator>
              *)&this->MetaData,
             (TPairInitializer<int_const_&,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData_const_&>
              *)local_54,(bool *)(local_54 + 4));
  return;
}

