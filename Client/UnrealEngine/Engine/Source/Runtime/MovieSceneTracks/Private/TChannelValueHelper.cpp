// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// SetKeyFromUserValue @ 1466f8f30

void __thiscall
MovieSceneImpl::TChannelValueHelper<FMovieSceneDoubleChannel,double>::SetKeyFromUserValue
          (TChannelValueHelper<FMovieSceneDoubleChannel,double> *this,FFrameNumber param_1)

{
  FKeyHandle FVar1;
  FMovieSceneDoubleChannel *this_00;
  
  this_00 = (FMovieSceneDoubleChannel *)
            FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->ChannelHandle);
  if ((this_00 != (FMovieSceneDoubleChannel *)0x0) && ((char)this->_padding_ != '\0')) {
    FVar1.Index = (uint)this->_padding_;
    AssignValue(this_00,FVar1,*this->UserValue);
    FMovieSceneChannel::SetKeyTime((FMovieSceneChannel *)this_00,FVar1,param_1);
  }
  return;
}

// SetUserValueFromTime @ 1466fb910

void __thiscall
MovieSceneImpl::TChannelValueHelper<FMovieSceneDoubleChannel,double>::SetUserValueFromTime
          (TChannelValueHelper<FMovieSceneDoubleChannel,double> *this,FFrameNumber param_1)

{
  FFrameTime FVar1;
  FMovieSceneDoubleChannel *this_00;
  
  this_00 = (FMovieSceneDoubleChannel *)
            FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->ChannelHandle);
  if (this_00 != (FMovieSceneDoubleChannel *)0x0) {
    FVar1.SubFrame = 0.0;
    FVar1.FrameNumber.Value = param_1.Value;
    FMovieSceneDoubleChannel::Evaluate(this_00,FVar1,this->UserValue);
  }
  return;
}

// SetKeyFromUserValue @ 1467c1e80

void __thiscall
MovieSceneImpl::TChannelValueHelper<FMovieSceneFloatChannel,float>::SetKeyFromUserValue
          (TChannelValueHelper<FMovieSceneFloatChannel,float> *this,FFrameNumber param_1)

{
  FKeyHandle FVar1;
  FMovieSceneFloatChannel *this_00;
  
  this_00 = (FMovieSceneFloatChannel *)
            FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->ChannelHandle);
  if ((this_00 != (FMovieSceneFloatChannel *)0x0) && ((char)this->_padding_ != '\0')) {
    FVar1.Index = (uint)this->_padding_;
    AssignValue(this_00,FVar1,*this->UserValue);
    FMovieSceneChannel::SetKeyTime((FMovieSceneChannel *)this_00,FVar1,param_1);
  }
  return;
}

// SetUserValueFromTime @ 1467c23c0

void __thiscall
MovieSceneImpl::TChannelValueHelper<FMovieSceneFloatChannel,float>::SetUserValueFromTime
          (TChannelValueHelper<FMovieSceneFloatChannel,float> *this,FFrameNumber param_1)

{
  FFrameTime FVar1;
  FMovieSceneFloatChannel *this_00;
  
  this_00 = (FMovieSceneFloatChannel *)
            FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->ChannelHandle);
  if (this_00 != (FMovieSceneFloatChannel *)0x0) {
    FVar1.SubFrame = 0.0;
    FVar1.FrameNumber.Value = param_1.Value;
    FMovieSceneFloatChannel::Evaluate(this_00,FVar1,this->UserValue);
  }
  return;
}

